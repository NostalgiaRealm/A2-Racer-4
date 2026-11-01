// Key state seen by the game: Windows virtual keys for GetAsyncKeyState and DirectInput
// scan codes for the keyboard device. Mapping from docs/research/input.md H1 and C10.
const DIK = {
  Escape: 0x01, Digit1: 0x02, Digit2: 0x03, Digit3: 0x04, Digit4: 0x05, Digit5: 0x06, Digit6: 0x07, Digit7: 0x08,
  Digit8: 0x09, Digit9: 0x0A, Digit0: 0x0B, Minus: 0x0C, Equal: 0x0D, Backspace: 0x0E, Tab: 0x0F, KeyQ: 0x10,
  KeyW: 0x11, KeyE: 0x12, KeyR: 0x13, KeyT: 0x14, KeyY: 0x15, KeyU: 0x16, KeyI: 0x17, KeyO: 0x18, KeyP: 0x19,
  BracketLeft: 0x1A, BracketRight: 0x1B, Enter: 0x1C, ControlLeft: 0x1D, KeyA: 0x1E, KeyS: 0x1F, KeyD: 0x20,
  KeyF: 0x21, KeyG: 0x22, KeyH: 0x23, KeyJ: 0x24, KeyK: 0x25, KeyL: 0x26, Semicolon: 0x27, Quote: 0x28,
  Backquote: 0x29, ShiftLeft: 0x2A, Backslash: 0x2B, KeyZ: 0x2C, KeyX: 0x2D, KeyC: 0x2E, KeyV: 0x2F, KeyB: 0x30,
  KeyN: 0x31, KeyM: 0x32, Comma: 0x33, Period: 0x34, Slash: 0x35, ShiftRight: 0x36, NumpadMultiply: 0x37,
  AltLeft: 0x38, Space: 0x39, CapsLock: 0x3A, F1: 0x3B, F2: 0x3C, F3: 0x3D, F4: 0x3E, F5: 0x3F, F6: 0x40, F7: 0x41,
  F8: 0x42, F9: 0x43, F10: 0x44, NumLock: 0x45, ScrollLock: 0x46, Numpad7: 0x47, Numpad8: 0x48, Numpad9: 0x49,
  NumpadSubtract: 0x4A, Numpad4: 0x4B, Numpad5: 0x4C, Numpad6: 0x4D, NumpadAdd: 0x4E, Numpad1: 0x4F, Numpad2: 0x50,
  Numpad3: 0x51, Numpad0: 0x52, NumpadDecimal: 0x53, F11: 0x57, F12: 0x58, NumpadEnter: 0x9C, ControlRight: 0x9D,
  NumpadDivide: 0xB5, PrintScreen: 0xB7, AltRight: 0xB8, Home: 0xC7, ArrowUp: 0xC8, PageUp: 0xC9, ArrowLeft: 0xCB,
  ArrowRight: 0xCD, End: 0xCF, ArrowDown: 0xD0, PageDown: 0xD1, Insert: 0xD2, Delete: 0xD3, MetaLeft: 0xDB,
  MetaRight: 0xDC, ContextMenu: 0xDD,
};

/** Windows virtual key of a KeyboardEvent.code; 0 if none. The menu's key dialog uses the same mapping. */
export function vkOf(code) {
  if (code.startsWith('Key')) return code.charCodeAt(3);
  if (code.startsWith('Digit')) return code.charCodeAt(5);
  if (code.startsWith('Numpad') && code.length === 7) return 0x60 + Number(code[6]);
  const fn = /^F(\d+)$/.exec(code);
  if (fn) return 0x6F + Number(fn[1]);
  const table = {
    Escape: 0x1B, Enter: 0x0D, NumpadEnter: 0x0D, Space: 0x20, Tab: 0x09, Backspace: 0x08, ShiftLeft: 0x10, ShiftRight: 0x10,
    ControlLeft: 0x11, ControlRight: 0x11, AltLeft: 0x12, AltRight: 0x12, ArrowLeft: 0x25, ArrowUp: 0x26, ArrowRight: 0x27,
    ArrowDown: 0x28, PageUp: 0x21, PageDown: 0x22, End: 0x23, Home: 0x24, Insert: 0x2D, Delete: 0x2E,
    NumpadMultiply: 0x6A, NumpadAdd: 0x6B, NumpadSubtract: 0x6D, NumpadDecimal: 0x6E, NumpadDivide: 0x6F,
    Minus: 0xBD, Equal: 0xBB, Comma: 0xBC, Period: 0xBE, Slash: 0xBF, Semicolon: 0xBA, Quote: 0xDE,
    BracketLeft: 0xDB, BracketRight: 0xDD, Backslash: 0xDC, Backquote: 0xC0, CapsLock: 0x14,
    NumLock: 0x90, ScrollLock: 0x91, PrintScreen: 0x2C, MetaLeft: 0x5B, MetaRight: 0x5C, ContextMenu: 0x5D,
  };
  return table[code] || 0;
}

const VK_TO_DIK = {
  0x31: 0x02, 0x32: 0x03, 0x33: 0x04, 0x34: 0x05, 0x35: 0x06, 0x36: 0x07, 0x37: 0x08, 0x38: 0x09, 0x39: 0x0A, 0x30: 0x0B,
  0x50: 0x19, 0x1B: 0x01, 0x0D: 0x1C, 0x4A: 0x24, 0x4E: 0x31, 0x44: 0x20, 0x54: 0x14,
};

/** Keys the game never sees: F11 and F10 would hang or break it (input.md H1, H7), F9 is the port's settings key. */
const MASKED = new Set(['F11', 'F10', 'F9']);

/**
 * Keys that stay with the browser during a race: reload, full screen, developer tools and the
 * Command or Ctrl+Shift chords. Every other Ctrl key is the game's, because Ctrl is turbo by default.
 */
function browserKey(e) {
  return e.code === 'F5' || e.code === 'F11' || e.code === 'F12' || e.metaKey || (e.ctrlKey && (e.code === 'KeyR' || e.shiftKey));
}

/** 0x0046ced0 adds these second bindings. The Ctrl, Alt and Shift pairs share one VK here. */
const SECOND_KEY = { 0x25: 0x64, 0x27: 0x66, 0x26: 0x68, 0x28: 0x62 };

/**
 * The active list holds 32 commands and the next call throws at 32 (0x004f0df0, fatal through
 * 0x00458386). The steering keys ramp on DEVICE 1, so up to four more stay active after release.
 */
const MAX_REPORTED_KEYS = 27;

export class GameInput {
  constructor(m) {
    this.m = m;
    this.vk = new Uint8Array(256);
    this.dik = new Uint8Array(256);
    this.mouseX = 0;
    this.mouseY = 0;
    this.steer = 0;          // analog joystick, -1..1
    this.joyY = 0;           // +1 up/gas, -1 down/brake
    this.buttons = 0;        // bit n = rgbButtons[n]
    this.spinCount = new Uint16Array(256);
    this.latched = [];
    this.touch = { steer: 0, gas: false, brake: false, buttons: 0 };
    this.pad = { active: false, steer: 0, y: 0, gas: false, brake: false, turbo: false, horn: false, handbrake: false };
    this.device = 1;
    // game.ini [INPUT], read at race start: the player's keys also work in a joystick session.
    this.keys = { left: 0x25, right: 0x27, up: 0x26, down: 0x28, extra1: 0x11, extra2: 0x12, extra3: 0x20 };
    this.rampLeft = 0;
    this.rampRight = 0;
    this.pulses = [];
    this.ignoreCode = null;  // key that closed the settings panel: not the game's until released
    this.onClear = null;
  }

  /** On-screen buttons and pad buttons that stand for a key. */
  pressHost(vk, dik = 0) {
    this.vk[vk] = 1;
    if (dik) this.dik[dik] = 0x80;
  }

  releaseHost(vk, dik = 0) {
    this.latchedHost = this.latchedHost || [];
    this.latchedHost.push([vk, dik]);
  }

  /** A short press: held for two ticks, so it is seen as an edge. */
  pulseVk(vk) {
    this.vk[vk] = 1;
    const dik = VK_TO_DIK[vk];
    if (dik) this.dik[dik] = 0x80;
    this.pulses.push({ vk, dik, ticks: 2 });
  }

  /**
   * Key of the next camera in the on-screen and pad cycle 1, 2, 4, from the view in use: DAT_00599c80
   * (FUN_004390c0). Key 2 selects view 0, key 4 view 3, key 1 a view from 5 up: 0x00438670.
   */
  nextCameraKey() {
    const view = this.m.i32[0x00599c80 >> 2];
    return view === 0 ? 0x34 : view === 3 ? 0x31 : 0x32;
  }

  /**
   * Joystick state for this tick, merged from touch wheel, pad and the player's keys.
   * DEVICE 2 (touch, gamepad): steering lX, gas button 2, brake lY full down, buttons
   * 0 turbo, 1 horn, 3 handbrake. DEVICE 3 and 4: lY analog, buttons 0 turbo, 1 horn, 2
   * handbrake. docs/research/input.md H4, H5.
   */
  updateJoystick(dt) {
    const { vk, keys } = this;
    const t = this.touch;
    const p = this.pad;
    const down = (k) => vk[k] !== 0 || vk[SECOND_KEY[k]] === 1;
    // Each side ramps by itself, as CarLeft and CarRight do at 2*dt: 0x0046f530, input.md C6.
    const rate = 2 * dt;
    this.rampLeft = Math.max(0, Math.min(1, this.rampLeft + (down(keys.left) ? rate : -rate)));
    this.rampRight = Math.max(0, Math.min(1, this.rampRight + (down(keys.right) ? rate : -rate)));
    let steer = this.rampRight - this.rampLeft;
    if (Math.abs(t.steer) > Math.abs(steer)) steer = t.steer;
    if (p.active && Math.abs(p.steer) > Math.abs(steer)) steer = p.steer;
    this.steer = steer;
    const gas = t.gas || down(keys.up);
    const brake = t.brake || down(keys.down);
    let b = t.buttons;
    if (p.turbo || down(keys.extra1)) b |= 1;
    if (p.horn || down(keys.extra3)) b |= 2;
    if (this.device === 2) {
      if (p.handbrake || down(keys.extra2)) b |= 8;
      if (gas || p.gas) b |= 4;
      this.joyY = brake || p.brake ? -1 : 0;
    } else {
      if (p.handbrake || down(keys.extra2) || (t.buttons & 8)) b |= 4;
      b &= ~8;
      const digital = (gas ? 1 : 0) - (brake ? 1 : 0);
      this.joyY = digital !== 0 || !p.active ? digital : p.y;
    }
    this.buttons = b;
  }

  /** A press stays visible until sampled once, so taps shorter than a tick are not lost. */
  keyEvent(code, down) {
    if (MASKED.has(code)) return;
    const d = DIK[code];
    const v = vkOf(code);
    if (down) {
      // Released and pressed again within one tick: the key stays down.
      const k = this.latched.indexOf(code);
      if (k >= 0) this.latched.splice(k, 1);
      if (v) this.vk[v] = 1;
      if (d) this.dik[d] = 0x80;
    } else {
      this.latched.push(code);
    }
  }

  /** Auto-repeat of a key this state does not have as down: held since before it could be seen. */
  repeatEvent(code) {
    const d = DIK[code];
    const v = vkOf(code);
    if ((v && !this.vk[v]) || (d && !this.dik[d])) this.keyEvent(code, true);
  }

  /** Applied once per tick after the game has sampled, so releases are always seen once. */
  endTick() {
    this.spinCount.fill(0);
    for (let k = this.pulses.length - 1; k >= 0; k--) {
      const q = this.pulses[k];
      if (--q.ticks <= 0) {
        this.vk[q.vk] = 0;
        if (q.dik) this.dik[q.dik] = 0;
        this.pulses.splice(k, 1);
      }
    }
    if (this.latchedHost && this.latchedHost.length) {
      for (const [vk, dik] of this.latchedHost) {
        this.vk[vk] = 0;
        if (dik) this.dik[dik] = 0;
      }
      this.latchedHost.length = 0;
    }
    if (!this.latched.length) return;
    for (const code of this.latched) {
      const d = DIK[code];
      const v = vkOf(code);
      if (v) this.vk[v] = 0;
      if (d) this.dik[d] = 0;
    }
    this.latched.length = 0;
  }

  clear() {
    // On-screen controls follow, with their capture and art: the reference's InputState.onClear.
    if (this.onClear) this.onClear();
    this.vk.fill(0);
    this.dik.fill(0);
    this.latched.length = 0;
    this.pulses.length = 0;
    if (this.latchedHost) this.latchedHost.length = 0;
    this.steer = 0;
    this.joyY = 0;
    this.buttons = 0;
    this.rampLeft = 0;
    this.rampRight = 0;
    this.ignoreCode = null;
    this.touch.steer = 0;
    this.touch.gas = false;
    this.touch.brake = false;
    this.touch.buttons = 0;
  }

  /**
   * GetAsyncKeyState. Game code only spins on this waiting for a key release, and a key
   * cannot change during one tick, so repeated polls of one key in a tick read as released.
   * Not Shift: no spin waits on it, and FUN_004c5e40 polls it before every other key.
   */
  keyDown(vk) {
    if (!this.vk[vk]) return false;
    if (vk === 0x10) return true;
    return ++this.spinCount[vk] <= 8;
  }

  fillDeviceState(kind, p, size) {
    const m = this.m;
    if (kind === 'keyboard') {
      m.u8.fill(0, p, p + size);
      for (let k = 0, n = 0; k < size && n < MAX_REPORTED_KEYS; k++) {
        if (this.dik[k]) {
          m.u8[p + k] = this.dik[k];
          n++;
        }
      }
    } else if (kind === 'joystick') {
      m.u8.fill(0, p, p + size);
      m.i32[p >> 2] = Math.round((this.steer + 1) * 32767);
      m.i32[(p + 4) >> 2] = Math.round((1 - this.joyY) * 32767);
      for (let k = 0; k < 32; k++) if (this.buttons & (1 << k)) m.u8[p + 48 + k] = 0x80;
    } else {
      m.u8.fill(0, p, p + size);
    }
  }
}

export function bindKeyboard(target, getInput) {
  const onKey = (e) => {
    const input = getInput();
    if (!input) return;
    if (!browserKey(e)) e.preventDefault();
    if (e.code === input.ignoreCode) {
      if (e.type === 'keyup') input.ignoreCode = null;
      return;
    }
    if (e.repeat) input.repeatEvent(e.code);
    else input.keyEvent(e.code, e.type === 'keydown');
  };
  target.addEventListener('keydown', onKey);
  target.addEventListener('keyup', onKey);
  const clear = () => {
    const input = getInput();
    if (input) input.clear();
  };
  target.addEventListener('blur', clear);
  target.addEventListener('pagehide', clear);
  document.addEventListener('visibilitychange', () => {
    if (document.hidden) clear();
  });
}
