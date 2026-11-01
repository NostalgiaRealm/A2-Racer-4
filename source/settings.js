// Port settings kept in localStorage: render resolution, render scale, volumes, full screen and
// controls. Original settings live in the player's save, as they did. See
// docs/intentional-differences.md.
const KEY = 'a2racer4.settings';
const DEFAULTS = { resolution: 'auto', renderScale: 100, volume: 100, showFps: false, fullscreen: true, touch: 'auto', deadzone: 0.18 };

/** Whether on-screen controls apply: the player's choice, or by default a touch screen as main pointer. */
export function useTouch(settings) {
  const choice = settings.get('touch');
  if (choice === 'on') return true;
  if (choice === 'off') return false;
  const coarse = typeof matchMedia === 'function' && matchMedia('(pointer: coarse)').matches;
  return coarse && navigator.maxTouchPoints > 0;
}

/** The element in full screen, with Safari's prefix. An iPhone has neither, and stays silent. */
export function fullscreenElement() {
  return document.fullscreenElement || document.webkitFullscreenElement || null;
}

/** RESOLUTION 0 and 1, the 8-bit path: the mode's size, FUN_00447870. Null for the others. */
export function softwareMode(resolution) {
  if (resolution === 0) return { width: 320, height: 200 };
  if (resolution === 1) return { width: 640, height: 480 };
  return null;
}

/** That mode's pixels on a view of this shape, one for one with the original at 4:3. */
export function modeGrid(width, height, aspect) {
  return aspect >= 4 / 3
    ? { width: Math.round(width * 0.75 * aspect), height }
    : { width, height: Math.round((height * (4 / 3)) / aspect) };
}

export class Settings {
  constructor() {
    this.values = { ...DEFAULTS };
    try {
      Object.assign(this.values, JSON.parse(localStorage.getItem(KEY) || '{}'));
    } catch {
      // Blocked storage: defaults for this session.
    }
    this.listeners = new Set();
  }

  get(k) {
    return this.values[k];
  }

  set(k, v) {
    this.values[k] = v;
    try {
      localStorage.setItem(KEY, JSON.stringify(this.values));
    } catch {
      // As above.
    }
    for (const l of this.listeners) l(k, v);
  }

  /**
   * Drawing-buffer size of the 3D view. 'auto' is the native size: CSS size times DPR, or, in the
   * 8-bit modes, the mode's own pixels (grid). Explicit presets give the base height, keeping the
   * viewport's aspect. Render scale multiplies both.
   */
  renderSize(cssW, cssH, dpr, maxSize = Infinity, grid = null) {
    const res = this.values.resolution;
    let w;
    let h;
    if (res === 'auto' && grid) {
      w = grid.width;
      h = grid.height;
    } else if (res === 'auto') {
      w = cssW * dpr;
      h = cssH * dpr;
    } else {
      h = Number(res);
      w = (h * cssW) / cssH;
    }
    const wanted = this.values.renderScale / 100;
    const s = Math.min(wanted, maxSize / w, maxSize / h);
    return { width: Math.max(16, Math.round(w * s)), height: Math.max(16, Math.round(h * s)), limited: s < wanted };
  }
}
