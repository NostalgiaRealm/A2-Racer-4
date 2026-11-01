// DirectDraw, Direct3D (DX5 interfaces), DirectInput and DirectSound for spel.dat.
// Exactly the methods listed in docs/research/win32-surface.md C3, in vtable order.
// Rendering and audio go to the backends in host.render and host.audio.

const S_OK = 0;
const IID = {
  // first dword of each GUID, enough to tell the requested interfaces apart
  IDirectDraw2: 0xB3A6F3E0,
  IDirect3D2: 0x6AAE1EC1,
  IDirectDrawSurface2: 0x57805885,
  IDirect3DTexture2: 0x93281502,
  IDirect3DRampDevice: 0xF2086B20,
  IDirectInputDevice2A: 0x5944E682,
};

function slots(count, entries) {
  const out = new Array(count).fill(null);
  for (const [off, name, n, fn] of entries) out[off / 4] = [name, n, fn];
  return out;
}

export function installDirectX(m, host) {
  const { u8, u16, u32, i32, f32 } = m;
  const heap = host.heap;
  const render = () => host.render;
  const audio = () => host.audio;
  const addRef = (self) => ++self.refs;
  const release = (self) => {
    self.refs--;
    if (self.refs <= 0 && self.onFree) self.onFree();
    return Math.max(self.refs, 0);
  };
  const noop = () => S_OK;

  // --- surfaces -----------------------------------------------------------------
  const RGB565 = { flags: 0x40, bits: 16, r: 0xF800, g: 0x07E0, b: 0x001F, a: 0 };
  const ARGB4444 = { flags: 0x41, bits: 16, r: 0x0F00, g: 0x00F0, b: 0x000F, a: 0xF000 };
  // RESOLUTION 0 and 1. FUN_004c8540, FUN_004c8690 and FUN_004c1e60 test bit 0x20, and spin on the
  // zero masks without it.
  const PAL8 = { flags: 0x60, bits: 8, r: 0, g: 0, b: 0, a: 0 };
  const screenFormat = () => (host.screen.bits === 8 ? PAL8 : RGB565);
  const writePixelFormat = (p, f) => {
    u32[p >> 2] = 32;
    u32[(p + 4) >> 2] = f.flags;
    u32[(p + 8) >> 2] = 0;
    u32[(p + 12) >> 2] = f.bits;
    u32[(p + 16) >> 2] = f.r;
    u32[(p + 20) >> 2] = f.g;
    u32[(p + 24) >> 2] = f.b;
    u32[(p + 28) >> 2] = f.a;
  };
  const readPixelFormat = (p) => ({
    flags: u32[(p + 4) >> 2], bits: u32[(p + 12) >> 2],
    r: u32[(p + 16) >> 2], g: u32[(p + 20) >> 2], b: u32[(p + 24) >> 2], a: u32[(p + 28) >> 2],
  });

  class Surface {
    constructor(desc) {
      Object.assign(this, desc);
      this.ptr = 0;
      this.colorKey = -1;
      this.attached = [];
      this.textureId = -1;
      this.handle = 0;
      this.generation = 0;
    }

    memory() {
      if (!this.ptr) {
        this.pitch = (this.width * (this.format.bits >> 3) + 3) & ~3;
        this.ptr = heap.alloc(this.pitch * this.height, true);
      }
      return this.ptr;
    }

    free() {
      if (this.ptr) heap.release(this.ptr);
      this.ptr = 0;
      if (this.textureId >= 0 && render()) render().freeTexture(this);
      if (this.handle) textureHandles.delete(this.handle);
    }
  }

  const SURFACE_VT = 'IDirectDrawSurface';
  const newSurface = (desc) => {
    const s = new Surface(desc);
    m.newObject(SURFACE_VT, s);
    s.onFree = () => {
      s.free();
      m.objects.delete(s.addr);
    };
    return s;
  };

  const createSurface = (dd, pDesc, pOut) => {
    const flags = u32[(pDesc + 4) >> 2];
    const caps = u32[(pDesc + 0x68) >> 2];
    const screen = host.screen;
    let width = flags & 4 ? u32[(pDesc + 0xC) >> 2] : screen.width;
    let height = flags & 2 ? u32[(pDesc + 8) >> 2] : screen.height;
    let format = screenFormat();
    if (flags & 0x1000) format = readPixelFormat(pDesc + 0x48);
    const isZ = (caps & 0x20000) !== 0;
    const isPrimary = (caps & 0x200) !== 0;
    if (caps & 0x10000000 && !(caps & 0x4000000)) {
      // The memory probe of FUN_004bc0f0 asks for LOCALVIDMEM textures until refused.
      // Report 16 MB as the original HAL path would on a card of the period: 128 surfaces at
      // 256x256 and 16 bits are 0x1000000, the least that keeps Maximaal in menu.exe FUN_00488bd8.
      // 8-bit surfaces hold half as much each.
      host.probeTextures = (host.probeTextures || 0) + 1;
      if (host.probeTextures > 256 / (format.bits >> 3)) {
        host.probeTextures = 0;
        return 0x887600E1 | 0;  // DDERR_OUTOFVIDEOMEMORY
      }
    }
    const s = newSurface({ width, height, format, caps, isZ, isPrimary, backBuffer: false });
    if (isZ) s.format = { flags: 0x400, bits: 16, r: 0, g: 0xFFFF, b: 0, a: 0 };
    // The screen the 8-bit path draws into at focus 2, FUN_004c4b00: a device target, not a flip chain.
    else if (format === PAL8 && caps & 0x2000 && !isPrimary) host.bufferScreen = s;
    if (isPrimary && flags & 0x20 && u32[(pDesc + 0x14) >> 2] > 0) {
      const back = newSurface({ width, height, format, caps: 0x2004, isZ: false, isPrimary: false, backBuffer: true });
      s.attached.push(back);
    }
    if (flags & 0x20000 && caps & 0x400000) {
      // Mip chain: the texture object walks it with GetAttachedSurface.
      const levels = u32[(pDesc + 0x18) >> 2];
      let cur = s;
      s.mipLevels = levels;
      for (let k = 1; k < levels; k++) {
        const w = Math.max(1, width >> k);
        const h = Math.max(1, height >> k);
        const lev = newSurface({ width: w, height: h, format, caps, isZ: false, isPrimary: false, backBuffer: false, mipOf: s, mipLevel: k });
        cur.attached.push(lev);
        cur = lev;
      }
    }
    u32[pOut >> 2] = s.addr;
    return S_OK;
  };

  const lockedAddr = new Map();
  const blt = (dst, pDstRect, srcAddr, pSrcRect, flags, pFx) => {
    const src = srcAddr ? m.objects.get(srcAddr) : null;
    const rect = (p, s) => (p
      ? { l: i32[p >> 2], t: i32[(p + 4) >> 2], r: i32[(p + 8) >> 2], b: i32[(p + 12) >> 2] }
      : { l: 0, t: 0, r: s.width, b: s.height });
    const dr = rect(pDstRect, dst);
    const isScreen = dst.isPrimary || dst.backBuffer || dst === host.bufferScreen;
    if (flags & 0x400) {
      const color = u32[(pFx + 0x50) >> 2];
      if (isScreen && render()) render().fillScreen(dst, dr, color);
      else softFill(dst, dr, color);
      return S_OK;
    }
    if (!src) return S_OK;
    const sr = rect(pSrcRect, src);
    if (isScreen && render()) {
      render().blitToScreen(dst, dr, src, sr, flags);
      return S_OK;
    }
    softBlit(dst, dr, src, sr, flags);
    return S_OK;
  };
  const softFill = (dst, r, color) => {
    const p = dst.memory();
    const pitch = dst.pitch;
    for (let y = r.t; y < r.b; y++) {
      if (dst.format.bits === 8) u8.fill(color, p + y * pitch + r.l, p + y * pitch + r.r);
      else u16.fill(color, (p + y * pitch + r.l * 2) >> 1, (p + y * pitch + r.r * 2) >> 1);
    }
    dst.generation++;
  };
  const softBlit = (dst, dr, src, sr, flags) => {
    const dp = dst.memory();
    const sp = src.memory();
    const dw = dr.r - dr.l;
    const dh = dr.b - dr.t;
    const sw = sr.r - sr.l;
    const sh = sr.b - sr.t;
    if (dw <= 0 || dh <= 0 || sw <= 0 || sh <= 0) return;
    const keyed = (flags & 0x8000) !== 0;
    const key = src.colorKey & 0xFFFF;
    const size = src.format.bits >> 3;
    if (dw === sw && dh === sh && !keyed) {
      const bytes = dw * size;
      for (let y = 0; y < dh; y++) {
        const a = dp + (dr.t + y) * dst.pitch + dr.l * size;
        const b = sp + (sr.t + y) * src.pitch + sr.l * size;
        u8.copyWithin(a, b, b + bytes);
      }
    } else if (size === 1) {
      // The page tiles of the 8-bit path: FUN_004b9fa0 stretches 256 into 341 or 342. From pixel
      // centres in 16.16, measured against the real thing: docs/research/render-8bit.md.
      const keyByte = key & 0xFF;
      const stepX = Math.floor((sw * 65536) / dw);
      const stepY = Math.floor((sh * 65536) / dh);
      for (let y = 0; y < dh; y++) {
        const sy = sr.t + Math.floor(((stepY >> 1) + y * stepY) / 65536);
        const a = dp + (dr.t + y) * dst.pitch + dr.l;
        const b = sp + sy * src.pitch + sr.l;
        for (let x = 0; x < dw; x++) {
          const c = u8[b + Math.floor(((stepX >> 1) + x * stepX) / 65536)];
          if (!keyed || c !== keyByte) u8[a + x] = c;
        }
      }
    } else {
      for (let y = 0; y < dh; y++) {
        const sy = sr.t + Math.floor((y * sh) / dh);
        const a = (dp + (dr.t + y) * dst.pitch + dr.l * 2) >> 1;
        const b = (sp + sy * src.pitch + sr.l * 2) >> 1;
        for (let x = 0; x < dw; x++) {
          const c = u16[b + Math.floor((x * sw) / dw)];
          if (!keyed || c !== key) u16[a + x] = c;
        }
      }
    }
    dst.generation++;
  };

  m.defineInterface(SURFACE_VT, slots(36, [
    [0x00, 'QueryInterface', 2, (self, riid, pOut) => {
      const id = u32[riid >> 2];
      if (id === IID.IDirect3DTexture2) {
        // The texture interface is a separate object sharing the surface.
        let t = self.textureObj;
        if (!t) {
          t = { surface: self };
          m.newObject('IDirect3DTexture2', t);
          t.refs = 0;
          self.textureObj = t;
        }
        t.refs++;
        u32[pOut >> 2] = t.addr;
        return S_OK;
      }
      self.refs++;
      u32[pOut >> 2] = self.addr;
      return S_OK;
    }],
    [0x04, 'AddRef', 0, addRef],
    [0x08, 'Release', 0, release],
    [0x0C, 'AddAttachedSurface', 1, (self, a) => {
      self.attached.push(m.objects.get(a));
      return S_OK;
    }],
    [0x14, 'Blt', 5, blt],
    [0x2C, 'Flip', 2, (self) => {
      if (host.onFlip) host.onFlip();
      return S_OK;
    }],
    [0x30, 'GetAttachedSurface', 2, (self, pCaps, pOut) => {
      const want = u32[pCaps >> 2];
      const a = self.attached.find((s) => (want & 4 ? s.backBuffer : true));
      if (!a) return 0x887600FF | 0;
      a.refs++;
      u32[pOut >> 2] = a.addr;
      return S_OK;
    }],
    [0x44, 'GetDC', 1, (self, pDC) => {
      u32[pDC >> 2] = 0x3000;
      return S_OK;
    }],
    [0x54, 'GetPixelFormat', 1, (self, p) => {
      writePixelFormat(p, self.format);
      return S_OK;
    }],
    [0x58, 'GetSurfaceDesc', 1, (self, p) => {
      self.memory();
      u32[(p + 4) >> 2] = 0x100F;
      u32[(p + 8) >> 2] = self.height;
      u32[(p + 12) >> 2] = self.width;
      u32[(p + 16) >> 2] = self.pitch;
      u32[(p + 0x24) >> 2] = self.ptr;
      writePixelFormat(p + 0x48, self.format);
      u32[(p + 0x68) >> 2] = self.caps;
      return S_OK;
    }],
    [0x60, 'IsLost', 0, noop],
    [0x64, 'Lock', 4, (self, rect, p) => {
      const ptr = self.memory();
      u32[(p + 4) >> 2] = 0x100F;
      u32[(p + 8) >> 2] = self.height;
      u32[(p + 12) >> 2] = self.width;
      u32[(p + 16) >> 2] = self.pitch;
      u32[(p + 0x24) >> 2] = rect ? ptr + i32[(rect + 4) >> 2] * self.pitch + i32[rect >> 2] * (self.format.bits >> 3) : ptr;
      writePixelFormat(p + 0x48, self.format);
      u32[(p + 0x68) >> 2] = self.caps;
      lockedAddr.set(self.addr, true);
      return S_OK;
    }],
    [0x68, 'ReleaseDC', 1, noop],
    [0x6C, 'Restore', 0, noop],
    [0x70, 'SetClipper', 1, noop],
    [0x74, 'SetColorKey', 2, (self, flags, p) => {
      self.colorKey = p ? u32[p >> 2] : -1;
      return S_OK;
    }],
    [0x7C, 'SetPalette', 1, noop],
    [0x80, 'Unlock', 1, (self) => {
      self.generation++;
      return S_OK;
    }],
  ]));

  // One palette for the screen and the page: FUN_004c9c90. It keeps its own copy, because the
  // flitser passes a stack buffer (FUN_0043b130) and FUN_004c9ff0 rewrites the table it was given.
  m.defineInterface('IDirectDrawPalette', slots(7, [
    [0x08, 'Release', 0, release],
    [0x10, 'GetEntries', 4, (self, flags, base, n, p) => {
      u8.copyWithin(p, self.ptr + base * 4, self.ptr + (base + n) * 4);
      return S_OK;
    }],
    [0x18, 'SetEntries', 4, (self, flags, base, n, p) => {
      u8.copyWithin(self.ptr + base * 4, p, p + n * 4);
      if (render() && render().setPalette) render().setPalette(u8.subarray(self.ptr, self.ptr + 1024));
      return S_OK;
    }],
  ]));

  // --- DirectDraw --------------------------------------------------------------------
  const ddBase = [
    [0x00, 'QueryInterface', 2, (self, riid, pOut) => {
      const id = u32[riid >> 2];
      if (id === IID.IDirect3D2) {
        u32[pOut >> 2] = host.d3d.addr;
        return S_OK;
      }
      if (id === IID.IDirectDraw2) {
        u32[pOut >> 2] = host.dd2.addr;
        return S_OK;
      }
      return 0x80004002 | 0;
    }],
    [0x04, 'AddRef', 0, addRef],
    [0x08, 'Release', 0, release],
    [0x14, 'CreatePalette', 4, (self, flags, entries, pOut) => {
      const pal = { ptr: heap.alloc(1024, true) };
      u8.copyWithin(pal.ptr, entries, entries + 1024);
      m.newObject('IDirectDrawPalette', pal);
      host.palette = pal;
      u32[pOut >> 2] = pal.addr;
      return S_OK;
    }],
    [0x18, 'CreateSurface', 3, createSurface],
    [0x20, 'EnumDisplayModes', 4, () => S_OK],
    [0x50, 'SetCooperativeLevel', 2, noop],
  ];
  m.defineInterface('IDirectDraw', slots(24, [
    ...ddBase,
    [0x54, 'SetDisplayMode', 3, (self, w, h) => {
      host.screen.width = w;
      host.screen.height = h;
      return S_OK;
    }],
  ]));
  m.defineInterface('IDirectDraw2', slots(24, [
    ...ddBase,
    [0x54, 'SetDisplayMode', 5, (self, w, h, bits) => {
      host.screen.width = w;
      host.screen.height = h;
      host.screen.bits = bits;
      return S_OK;
    }],
    [0x58, 'WaitForVerticalBlank', 2, noop],
  ]));
  host.dd = {};
  m.newObject('IDirectDraw', host.dd);
  host.dd2 = {};
  m.newObject('IDirectDraw2', host.dd2);

  m.api('DDRAW.DLL!DirectDrawEnumerateA', 2, () => S_OK);
  m.api('DDRAW.DLL!DirectDrawCreate', 3, (guid, pOut) => {
    u32[pOut >> 2] = host.dd.addr;
    return S_OK;
  });
  m.api('DDRAW.DLL!DirectDrawCreateClipper', 3, () => S_OK);

  // --- Direct3D ---------------------------------------------------------------------
  const textureHandles = new Map();
  let nextTexHandle = 1;
  const materialHandles = new Map();
  let nextMatHandle = 1;

  m.defineInterface('IDirect3DTexture2', slots(6, [
    [0x04, 'AddRef', 0, addRef],
    [0x08, 'Release', 0, (self) => {
      self.refs--;
      return Math.max(self.refs, 0);
    }],
    [0x0C, 'GetHandle', 2, (self, dev, pOut) => {
      const s = self.surface;
      if (!s.handle) {
        s.handle = nextTexHandle++;
        textureHandles.set(s.handle, s);
      }
      u32[pOut >> 2] = s.handle;
      return S_OK;
    }],
    [0x14, 'Load', 1, (self, srcTex) => {
      const dst = self.surface;
      const src = m.objects.get(srcTex).surface;
      dst.width = src.width;
      dst.height = src.height;
      dst.format = src.format;
      dst.source = src;
      dst.colorKeySource = src;
      dst.generation++;
      if (render()) render().loadTexture(dst, src);
      return S_OK;
    }],
  ]));

  m.defineInterface('IDirect3DMaterial2', slots(6, [
    [0x08, 'Release', 0, release],
    [0x0C, 'SetMaterial', 1, (self, p) => {
      self.diffuse = [f32[(p + 4) >> 2], f32[(p + 8) >> 2], f32[(p + 12) >> 2], f32[(p + 16) >> 2]];
      self.ambient = [f32[(p + 20) >> 2], f32[(p + 24) >> 2], f32[(p + 28) >> 2], f32[(p + 32) >> 2]];
      return S_OK;
    }],
    [0x14, 'GetHandle', 2, (self, dev, pOut) => {
      if (!self.handle) {
        self.handle = nextMatHandle++;
        materialHandles.set(self.handle, self);
      }
      u32[pOut >> 2] = self.handle;
      return S_OK;
    }],
  ]));

  const readViewport2 = (p) => ({
    x: u32[(p + 4) >> 2], y: u32[(p + 8) >> 2], width: u32[(p + 12) >> 2], height: u32[(p + 16) >> 2],
    clipX: f32[(p + 20) >> 2], clipY: f32[(p + 24) >> 2], clipW: f32[(p + 28) >> 2], clipH: f32[(p + 32) >> 2],
    minZ: f32[(p + 36) >> 2], maxZ: f32[(p + 40) >> 2],
  });
  m.defineInterface('IDirect3DViewport2', slots(18, [
    [0x08, 'Release', 0, release],
    [0x20, 'SetBackground', 1, (self, handle) => {
      const mat = materialHandles.get(handle);
      if (mat && mat.diffuse && render()) render().setBackground(mat.diffuse);
      return S_OK;
    }],
    [0x30, 'Clear', 3, (self, n, rects, flags) => {
      if (render()) render().clear(flags);
      return S_OK;
    }],
    [0x44, 'SetViewport2', 1, (self, p) => {
      self.vp = readViewport2(p);
      if (render()) render().setViewport(self.vp);
      return S_OK;
    }],
  ]));

  const device = { };
  m.defineInterface('IDirect3DDevice2', slots(34, [
    [0x08, 'Release', 0, release],
    [0x0C, 'GetCaps', 2, (self, hw, hel) => {
      // HAL path as on the cards the game was built for. No limit on texture width
      // (0), both blend factor sets present, flags non-zero: see win32-surface C3.
      for (const p of [hw, hel]) {
        const size = u32[p >> 2];
        u8.fill(0, p + 4, p + size);
        u32[(p + 4) >> 2] = 0x7FFFFFFF;
        u32[(p + 0x74) >> 2] = 0x1FFF;
        u32[(p + 0x78) >> 2] = 0x1FFF;
      }
      // The Ramp device is software: no hardware description. FUN_004c1030 then takes the path
      // with one surface per texture and no Load.
      if (device.ramp) u8.fill(0, hw + 4, hw + u32[hw >> 2]);
      return S_OK;
    }],
    [0x18, 'AddViewport', 1, noop],
    [0x24, 'EnumTextureFormats', 2, (self, cb, ctx) => {
      const p = m.lowAlloc(0x6c);
      for (const fmt of device.ramp ? [PAL8] : [RGB565, ARGB4444]) {
        u8.fill(0, p, p + 0x6c);
        u32[p >> 2] = 0x6c;
        u32[(p + 4) >> 2] = 0x1000;
        u32[(p + 0x68) >> 2] = 0x1000;
        writePixelFormat(p + 0x48, fmt);
        if (!m.call(cb, [p, ctx])) break;
      }
      return S_OK;
    }],
    [0x28, 'BeginScene', 0, () => {
      if (render()) render().beginScene();
      return S_OK;
    }],
    [0x2C, 'EndScene', 0, () => {
      if (render()) render().endScene();
      return S_OK;
    }],
    [0x34, 'SetCurrentViewport', 1, noop],
    [0x5C, 'SetRenderState', 2, (self, state, value) => {
      if (state === 1) {
        // Texture handle: resolved here so the renderer sees the surface.
        host.renderState.texture = value ? textureHandles.get(value) || null : null;
      }
      if (render()) render().setRenderState(state, value);
      return S_OK;
    }],
    [0x64, 'SetLightState', 2, (self, state, value) => {
      if (render()) render().setLightState(state, value);
      return S_OK;
    }],
    [0x68, 'SetTransform', 2, (self, type, p) => {
      if (render()) render().setTransform(type, p);
      return S_OK;
    }],
    [0x74, 'DrawPrimitive', 5, (self, prim, vtype, verts, count) => {
      if (render()) render().drawPrimitive(prim, vtype, verts, count);
      return S_OK;
    }],
    [0x78, 'DrawIndexedPrimitive', 7, (self, prim, vtype, verts, nverts, indices, nindices) => {
      if (render()) render().drawIndexed(prim, vtype, verts, nverts, indices, nindices);
      return S_OK;
    }],
  ]));
  host.device = device;
  host.renderState = { texture: null };

  m.defineInterface('IDirect3D2', slots(9, [
    [0x08, 'Release', 0, release],
    [0x0C, 'EnumDevices', 2, noop],
    [0x14, 'CreateMaterial', 2, (self, pOut) => {
      const mat = {};
      m.newObject('IDirect3DMaterial2', mat);
      u32[pOut >> 2] = mat.addr;
      return S_OK;
    }],
    [0x18, 'CreateViewport', 2, (self, pOut) => {
      const v = {};
      m.newObject('IDirect3DViewport2', v);
      u32[pOut >> 2] = v.addr;
      return S_OK;
    }],
    [0x20, 'CreateDevice', 3, (self, guid, surf, pOut) => {
      if (!device.addr) m.newObject('IDirect3DDevice2', device);
      device.target = m.objects.get(surf);
      device.ramp = u32[guid >> 2] === IID.IDirect3DRampDevice;
      if (render() && render().setIndexed) render().setIndexed(device.ramp, host.screen);
      u32[pOut >> 2] = device.addr;
      return S_OK;
    }],
  ]));
  host.d3d = {};
  m.newObject('IDirect3D2', host.d3d);

  // --- DirectInput --------------------------------------------------------------------
  const devices = {
    keyboard: { kind: 'keyboard' },
    mouse: { kind: 'mouse' },
    joystick: { kind: 'joystick' },
  };
  const deviceGuid = { keyboard: 0x11111111, mouse: 0x22222222, joystick: 0x33333333 };
  const devVt = 'IDirectInputDeviceA';
  m.defineInterface(devVt, slots(27, [
    [0x00, 'QueryInterface', 2, (self, riid, pOut) => {
      self.refs++;
      u32[pOut >> 2] = self.addr;
      return S_OK;
    }],
    [0x08, 'Release', 0, release],
    [0x0C, 'GetCapabilities', 1, (self, p) => {
      const size = u32[p >> 2];
      u8.fill(0, p + 4, p + size);
      u32[(p + 4) >> 2] = 1;
      if (self.kind === 'joystick') {
        const cfg = host.joystickCaps || { devType: 0x0604, axes: 2, buttons: 4 };
        u32[(p + 8) >> 2] = cfg.devType;
        u32[(p + 12) >> 2] = cfg.axes;
        u32[(p + 16) >> 2] = cfg.buttons;
      } else if (self.kind === 'mouse') {
        u32[(p + 8) >> 2] = 0x0112;
        u32[(p + 12) >> 2] = 3;
        u32[(p + 16) >> 2] = 3;
      } else {
        u32[(p + 8) >> 2] = 0x0303;
        u32[(p + 16) >> 2] = 101;
      }
      return S_OK;
    }],
    [0x14, 'GetProperty', 2, (self, prop, p) => {
      if (prop === 4) {
        i32[(p + 16) >> 2] = 0;
        i32[(p + 20) >> 2] = 65535;
      }
      return S_OK;
    }],
    [0x18, 'SetProperty', 2, noop],
    [0x1C, 'Acquire', 0, noop],
    [0x20, 'Unacquire', 0, noop],
    [0x24, 'GetDeviceState', 2, (self, size, p) => {
      if (host.input) host.input.fillDeviceState(self.kind, p, size);
      else u8.fill(0, p, p + size);
      return S_OK;
    }],
    [0x2C, 'SetDataFormat', 1, noop],
    [0x34, 'SetCooperativeLevel', 2, noop],
    [0x64, 'Poll', 0, noop],
  ]));
  for (const k of Object.keys(devices)) {
    devices[k].addrReady = true;
  }
  m.defineInterface('IDirectInputA', slots(8, [
    [0x08, 'Release', 0, release],
    [0x0C, 'CreateDevice', 3, (self, guid, pOut) => {
      const id = u32[guid >> 2];
      const kind = Object.keys(deviceGuid).find((k) => deviceGuid[k] === id);
      const d = devices[kind];
      if (!d.addr) m.newObject(devVt, d);
      u32[pOut >> 2] = d.addr;
      return S_OK;
    }],
    [0x10, 'EnumDevices', 4, (self, type, cb, ctx) => {
      const kind = { 2: 'mouse', 3: 'keyboard', 4: 'joystick' }[type];
      const present = kind && (kind !== 'joystick' || host.joystickPresent);
      if (!present) return S_OK;
      const p = m.lowAlloc(0x244);
      u8.fill(0, p, p + 0x244);
      u32[p >> 2] = 0x244;
      u32[(p + 4) >> 2] = deviceGuid[kind];
      m.call(cb, [p, ctx]);
      return S_OK;
    }],
  ]));
  host.dinput = {};
  m.newObject('IDirectInputA', host.dinput);
  m.api('DINPUT.DLL!DirectInputCreateA', 4, (hinst, ver, pOut) => {
    u32[pOut >> 2] = host.dinput.addr;
    return S_OK;
  });

  // --- DirectSound -----------------------------------------------------------------------
  // A buffer never changes after its one Lock/Unlock on load, no streaming: win32-surface C3.
  const bufVt = 'IDirectSoundBuffer';
  m.defineInterface(bufVt, slots(21, [
    [0x08, 'Release', 0, (self) => {
      const r = release(self);
      if (r === 0 && self.ptr && !self.dup) heap.release(self.ptr);
      if (r === 0 && audio()) audio().releaseBuffer(self);
      if (r === 0) m.objects.delete(self.addr);
      return r;
    }],
    [0x20, 'GetFrequency', 1, (self, p) => {
      u32[p >> 2] = self.frequency;
      return S_OK;
    }],
    [0x24, 'GetStatus', 1, (self, p) => {
      u32[p >> 2] = audio() && audio().isPlaying(self) ? 1 : 0;
      return S_OK;
    }],
    [0x2C, 'Lock', 7, (self, off, size, p1, n1, p2, n2) => {
      if (!self.ptr) self.ptr = heap.alloc(self.size);
      u32[p1 >> 2] = self.ptr + off;
      u32[n1 >> 2] = size;
      if (p2) u32[p2 >> 2] = 0;
      if (n2) u32[n2 >> 2] = 0;
      return S_OK;
    }],
    [0x30, 'Play', 3, (self, r, pr, flags) => {
      if (audio() && !self.primary) audio().play(self, (flags & 1) !== 0);
      return S_OK;
    }],
    [0x34, 'SetCurrentPosition', 1, (self, pos) => {
      if (audio() && !self.primary) audio().setPosition(self, pos);
      return S_OK;
    }],
    [0x38, 'SetFormat', 1, noop],
    [0x3C, 'SetVolume', 1, (self, v) => {
      self.volume = v | 0;
      if (audio() && !self.primary) audio().setVolume(self, self.volume);
      return S_OK;
    }],
    [0x40, 'SetPan', 1, (self, v) => {
      self.pan = v | 0;
      if (audio() && !self.primary) audio().setPan(self, self.pan);
      return S_OK;
    }],
    [0x44, 'SetFrequency', 1, (self, v) => {
      self.frequency = v || self.baseFrequency;
      if (audio() && !self.primary) audio().setFrequency(self, self.frequency);
      return S_OK;
    }],
    [0x48, 'Stop', 0, (self) => {
      if (audio() && !self.primary) audio().stop(self);
      return S_OK;
    }],
    [0x4C, 'Unlock', 4, (self) => {
      if (audio() && !self.primary) audio().bufferFilled(self);
      return S_OK;
    }],
  ]));
  m.defineInterface('IDirectSound', slots(11, [
    [0x08, 'Release', 0, release],
    [0x0C, 'CreateSoundBuffer', 3, (self, pDesc, pOut) => {
      const flags = u32[(pDesc + 4) >> 2];
      const b = { primary: (flags & 1) !== 0, ptr: 0, volume: 0, pan: 0 };
      if (!b.primary) {
        b.size = u32[(pDesc + 8) >> 2];
        const fmt = u32[(pDesc + 16) >> 2];
        b.channels = u16[(fmt + 2) >> 1];
        b.baseFrequency = u32[(fmt + 4) >> 2];
        b.frequency = b.baseFrequency;
        b.bits = u16[(fmt + 14) >> 1];
      }
      m.newObject(bufVt, b);
      u32[pOut >> 2] = b.addr;
      return S_OK;
    }],
    [0x14, 'DuplicateSoundBuffer', 2, (self, src, pOut) => {
      const s = m.objects.get(src);
      const b = { ...s, dup: true, volume: s.volume, pan: s.pan, source: s.source || s };
      delete b.addr;
      m.newObject(bufVt, b);
      if (audio()) audio().duplicate(b, s);
      u32[pOut >> 2] = b.addr;
      return S_OK;
    }],
    [0x18, 'SetCooperativeLevel', 2, noop],
  ]));
  host.dsound = {};
  m.newObject('IDirectSound', host.dsound);
  m.api('DSOUND.DLL!DirectSoundEnumerateA', 2, () => S_OK);
  m.api('DSOUND.DLL!DirectSoundCreate', 3, (guid, pOut) => {
    u32[pOut >> 2] = host.dsound.addr;
    return S_OK;
  });
}
