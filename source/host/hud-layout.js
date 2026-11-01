// Moves HUD groups to the screen edges at draw time, for any screen shape. The game's HUD
// logic keeps its 640x480 canvas. Around the HUD's draw call (0x00484fc0) the positions
// get offset, and restored afterwards, so game code never sees the changed values.
// Component layout and group table: docs/research/hud-overlay.md sections 6, 10, B and C.

const TOP = 0x007126ec;         // pointer to the root composite
const STRINGS = 0x007126fc;     // string list object
const OVERLAY_STATE = 0x0071277c;
const STATE_FINISH = 5;

// Finish table, 0x00492980: strings slide from world x 1.0 to 0.1, portraits from their slot
// to -0.4. The slot is canvas x 25 of PLAYER_n.
const FINISH_STRING_START = 1;
const FINISH_STRING_END = 0.1;
const FINISH_PORTRAIT_END = -0.4;
const PORTRAIT_SLOT = (0.99 / 320) * 25 - 1;

// Portrait phones: below this CSS width the canvas shows smaller than the 0.7425 CSS px per
// canvas unit of an 800x360 landscape phone, so text-bearing groups grow back to that size.
const READABLE_WIDTH = 480;
// Speedometer and Communicator must fit side by side, (0.635 + 0.652) * k < 2, and the stats'
// last row, down to canvas y 91.8 * k, must stay above the game text at canvas y 126.5.
const MAX_SCALE = 1.35;

// Rotation units of the matrix code, 0x004b3ea0: its table mask 0x005b23bc holds 4095.
const TURN = 4096;

export class HudLayout {
  constructor(m) {
    this.m = m;
    this.found = false;
    this.groups = {
      right: [], left: [], rank: [], stats: [], topCentre: [], plates: [], bottomCentre: [],
      panels: [], text: [], players: [], finish: [],
    };
    this.dx = 0;
    this.dy = 0;
    this.saved = [];
    this.scale = 1;
    this.tilt = { rotation: 0, y: 1, z: 1 };
    this.insets = { left: 0, right: 0, top: 0, bottom: 0 };
    this.tall = false;
    this.leftShift = 0;       // world units: keeps the Communicator clear of on-screen controls
  }

  nameOf(c) {
    const m = this.m;
    const p = m.u32[(c + 0x38) >> 2];
    if (p < 0x400000 || p >= m.u8.length - 64) return '';
    let s = '';
    for (let k = 0; k < 40; k++) {
      const ch = m.u8[p + k];
      if (!ch) return s;
      if (ch < 32 || ch > 126) return '';
      s += String.fromCharCode(ch);
    }
    return '';
  }

  children(c) {
    const m = this.m;
    const limit = m.u8.length - 16;
    const v = m.u32[(c + 0x78) >> 2];
    if (v < 0x400000 || v >= limit || v & 3) return [];
    const a = m.u32[(v + 4) >> 2];
    const b = m.u32[(v + 8) >> 2];
    if (a < 0x400000 || b >= limit || b < a || (b - a) > 4096 || (a & 3) || ((b - a) & 3)) return [];
    const out = [];
    for (let p = a; p < b; p += 4) {
      const k = m.u32[p >> 2];
      if (k >= 0x400000 && k < limit && !(k & 3)) out.push(k);
    }
    return out;
  }

  /** Walks the component tree once it exists: names decide the groups. */
  scan() {
    const m = this.m;
    const root = m.u32[TOP >> 2];
    if (!root) return false;
    const g = this.groups;
    const seen = new Set();
    const walk = (c, depth) => {
      if (!c || seen.has(c) || depth > 8) return;
      seen.add(c);
      const name = this.nameOf(c);
      const up = name.toUpperCase();
      if (up === 'SPEEDOMETER') {
        g.right.push(c);
        g.panels.push(c);
      } else if (up === 'COMMUNICATOR') {
        this.communicator = c;
        g.left.push(c);
        g.panels.push(c);
      }
      else if (up.startsWith('OVL_PORTRAITS_')) g.left.push(c);
      else if (up === 'PORTRAITS') g.rank.push(c);
      else if (up.startsWith('PLAYER_')) g.players.push(c);
      // One digit: a glyph child carries its string's name plus its own index.
      else if (/^STRING_FINISH_POS_\d$/.test(up)) g.finish.push(c);
      else if (up === 'STRING_RACE_TIME_VALUE' || up === 'STRING_CUR_LAP' || up === 'STRING_CUR_POS') g.stats.push(c);
      else if (up === 'STRING_RACE_TIME' || up === 'STRING_LAP' || up === 'STRING_POS') g.stats.push(c);
      else if (up === 'OVL_TURNAROUND_FRAME' || up.startsWith('OVL_DIRECTION_')) g.plates.push(c);
      else if (up === 'STRING_COUNTDOWN_TIMER' || up === 'STRING_GAME_TEXT') g.topCentre.push(c);
      else if (up === 'STRING_FINISH_TEXT' || up === 'OVL_PROGRESS_BAR') g.bottomCentre.push(c);
      for (const k of this.children(c)) walk(k, depth + 1);
    };
    walk(root, 0);
    const list = m.u32[STRINGS >> 2];
    if (list) {
      const a = m.u32[(list + 4) >> 2];
      const b = m.u32[(list + 8) >> 2];
      for (let p = a; p && p < b; p += 4) walk(m.u32[p >> 2], 7);
    }
    // Every string that takes part in a group's scale.
    g.text.push(...g.stats);
    for (const c of g.panels) {
      for (const k of this.children(c)) if (this.nameOf(k).toUpperCase().startsWith('STRING_')) g.text.push(k);
    }
    this.found = true;
    this.names = [...seen].map((c) => this.nameOf(c));
    return true;
  }

  /**
   * aspect: width/height of the area the HUD draws in. insets are fractions of that area.
   * clipY: the mode's H/W. 320x200 squeezes the canvas to 0.625 (0x0047fd20), and fills 4:3 like any other mode.
   */
  setShape(aspect, insets = this.insets, cssSize = this.cssSize, clipY = 0.75) {
    this.aspect = aspect;
    this.insets = insets;
    this.cssSize = cssSize;     // { w, h } of the area in CSS pixels
    const base = 4 / 3;
    this.xr = aspect >= base ? 0.75 * aspect : 1;
    this.yr = aspect >= base ? clipY : (clipY * base) / aspect;
    this.dx = this.xr - 1;
    this.dy = this.yr - clipY;
    this.scale = aspect < 1 && cssSize ? Math.min(Math.max(1, READABLE_WIDTH / cssSize.w), MAX_SCALE) : 1;
    // The signs and the wrong-way frame are 3D plates, vertices at z 1.04..1.63 (.d3d), drawn
    // at x/z, y/z. Adding o to y moves the far end less, which would stretch them. Their picture
    // shifts unchanged if y also grows by o*z, and a tilt about x gives that: the matrix is
    // v * scale * rotation + position (0x004b5770, 0x004b3ea0), so y gains sz*sin*v.z and z is
    // sz*cos*v.z. Hence tan = o and sz / cos. The plate's thickness tilts too: seen at y/z of
    // about 0.5 + o it keeps its height with the y factor below. Exact to 1 canvas unit.
    const o = this.dy - insets.top * 2 * this.yr;
    const rotation = Math.round((Math.atan(o) * TURN) / (2 * Math.PI));
    const angle = (rotation * 2 * Math.PI) / TURN;
    this.tilt = {
      rotation,
      y: 1 / (Math.cos(angle) + (0.5 + o) * Math.sin(angle)),
      z: 1 / Math.cos(angle),
    };
  }

  apply() {
    const m = this.m;
    if (!this.found) this.scan();
    const { dx, scale, saved, tilt } = this;
    const dyLocal = this.dy / 0.75;
    // Notches and home bars, as fractions of the area: world units across, local units down.
    const inset = this.insets;
    const insetL = inset.left * 2 * this.xr;
    const insetR = inset.right * 2 * this.xr;
    const insetT = (inset.top * 2 * this.yr) / 0.75;
    const insetB = (inset.bottom * 2 * this.yr) / 0.75;
    saved.length = 0;
    const f32 = m.f32;
    const poke = (addr, value) => {
      const p = addr >> 2;
      saved.push(p, f32[p]);
      f32[p] = value;
    };
    const times = (addr, factor) => poke(addr, f32[addr >> 2] * factor);
    const add = (list, x, y) => {
      if (!x && !y) return;
      for (const c of list) {
        poke(c + 4, f32[(c + 4) >> 2] + x);
        poke(c + 8, f32[(c + 8) >> 2] + y);
      }
    };
    const g = this.groups;
    const state = m.u32[OVERLAY_STATE >> 2];
    // The Communicator slides between -1 (off screen) and 0.011: the shift grows with it, or
    // part of it would stay in view while hidden.
    const slide = this.communicator ? Math.max(0, Math.min(1, (f32[(this.communicator + 4) >> 2] + 1) / 1.011)) : 1;
    if (scale !== 1) {
      // Scales a group about its screen corner (ax, ay), slide positions included. Scale z and
      // z stay, so this is an exact 2D similarity: hud-overlay.md section B, lever 3.
      const grow = (list, ax, ay) => {
        for (const c of list) {
          poke(c + 4, f32[(c + 4) >> 2] * scale + ax * (1 - scale));
          poke(c + 8, f32[(c + 8) >> 2] * scale + ay * (1 - scale));
          times(c + 0x10, scale);
          times(c + 0x14, scale);
        }
      };
      grow(g.right, 1, -1);
      grow(g.left, -1, -1);
      grow(g.stats, 1, 1);
      for (const c of g.panels) {
        times(c + 0x7c, scale);
        times(c + 0x80, scale);
      }
      // String advance follows its own +0x7c and ScreenWidth, not the parent's Width (0x00487240).
      for (const c of g.text) times(c + 0x7c, scale);
    }
    add(g.right, dx - insetR, -dyLocal + insetB);
    add(g.left, -dx + Math.max(insetL, this.leftShift * slide), -dyLocal + insetB);
    add(g.stats, dx - insetR, dyLocal - insetT);
    add(g.topCentre, 0, dyLocal - insetT);
    add(g.plates, 0, dyLocal - insetT);
    if (tilt.rotation) {
      for (const c of g.plates) {
        poke(c + 0x1c, tilt.rotation);
        times(c + 0x14, tilt.y);
        times(c + 0x18, tilt.z);
      }
    }
    add(g.bottomCentre, 0, -dyLocal + insetB);
    if (state !== STATE_FINISH) {
      add(g.rank, -dx + insetL, dyLocal - insetT);
    } else {
      // The table is laid out around world 0 (0x00492980), so it takes no group offset. Strings
      // come from outside the view as at 4:3: their start maps to the screen edge.
      const out = this.xr - 1;
      for (const c of g.finish) {
        const x = f32[(c + 4) >> 2];
        if (out && x > FINISH_STRING_END) {
          poke(c + 4, x + ((x - FINISH_STRING_END) / (FINISH_STRING_START - FINISH_STRING_END)) * out);
        }
      }
      // Portraits start from where the rank column was, and lose its offset on their way in.
      for (const c of g.players) {
        const remaining = (FINISH_PORTRAIT_END - f32[(c + 4) >> 2]) / (FINISH_PORTRAIT_END - PORTRAIT_SLOT);
        const t = Math.max(0, Math.min(1, remaining));
        add([c], (-dx + insetL) * t, (dyLocal - insetT) * t);
      }
    }
  }

  restore() {
    const f32 = this.m.f32;
    const s = this.saved;
    for (let k = s.length - 2; k >= 0; k -= 2) f32[s[k]] = s[k + 1];
    s.length = 0;
  }
}
