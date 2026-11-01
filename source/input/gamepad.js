// Gamepad API for menu navigation and driving. Standard mapping: A0 B1 X2 Y3 LB4 RB5 LT6 RT7
// Back8 Start9 L3 10 R3 11 D-pad 12..15. Mapping to the game's buttons: docs/research/input.md H4.
import { axisDeadzone } from './touch.js';

const EDGE_BUTTONS = { a: 0, b: 1, lb: 4, back: 8, start: 9, reset: 10, taunt: 12 };

export class GamepadInput {
  /** deadzone: returns the current value, because the player can change it during a race. */
  constructor(deadzone = () => 0.18) {
    this.last = new Map();
    this.deadzone = deadzone;
    this.quiet = new Set();     // menu keys held at a resync: their release is no event either
    this.padIndex = null;       // the pad in use during a race
    this.lookingBack = false;
    this.onFound = null;
  }

  pad() {
    let pads;
    try {
      pads = navigator.getGamepads ? navigator.getGamepads() : [];
    } catch {
      return null;
    }
    for (const p of pads) if (p && p.connected && p.mapping === 'standard') return p;
    for (const p of pads) if (p && p.connected) return p;
    return null;
  }

  connected() {
    return this.pad() !== null;
  }

  edge(key, pressed) {
    const was = this.last.get(key) || false;
    this.last.set(key, pressed);
    return pressed && !was;
  }

  menuKeys(p) {
    const b = (n) => (p.buttons[n] ? p.buttons[n].value : 0) > 0.5;
    const deadzone = this.deadzone();
    const vert = axisDeadzone(p.axes[1] || 0, deadzone);
    const horiz = axisDeadzone(p.axes[0] || 0, deadzone);
    return {
      ArrowUp: b(12) || vert < -0.5, ArrowDown: b(13) || vert > 0.5, ArrowLeft: b(14) || horiz < -0.5, ArrowRight: b(15) || horiz > 0.5,
      Enter: b(0), Escape: b(1), Tab: b(5),
    };
  }

  /** Menu: sends key codes as they change. */
  pollMenu(send) {
    const p = this.pad();
    if (!p) return;
    for (const [code, pressed] of Object.entries(this.menuKeys(p))) {
      const was = this.last.get('menu' + code) || false;
      if (pressed !== was) {
        this.last.set('menu' + code, pressed);
        if (!pressed && this.quiet.delete(code)) continue;
        send(code, pressed);
      }
    }
  }

  /** Last state := current state with no events, so a held button counts only after its release. */
  resync() {
    this.last.clear();
    this.quiet.clear();
    this.padIndex = null;
    this.lookingBack = false;
    const p = this.pad();
    if (!p) return;
    for (const [code, pressed] of Object.entries(this.menuKeys(p))) {
      this.last.set('menu' + code, pressed);
      if (pressed) this.quiet.add(code);
    }
    for (const [key, n] of Object.entries(EDGE_BUTTONS)) this.last.set(key, (p.buttons[n] ? p.buttons[n].value : 0) > 0.5);
  }

  /** The pad in use is gone: nothing stays held, and the race pauses, as the reference does on losing its pad. */
  lost(input, paused, results) {
    Object.assign(input.pad, { active: false, steer: 0, y: 0, gas: false, brake: false, turbo: false, horn: false, handbrake: false });
    if (this.lookingBack) input.releaseHost(0x33, 0x04);
    this.lookingBack = false;
    this.last.clear();
    this.padIndex = null;
    if (!paused && !results) input.pulseVk(0x50);
  }

  /**
   * Race: writes the pad's state into the game input for this tick. paused is the dialog kind,
   * results is true on the finish table and game-over screens.
   */
  pollRace(input, paused, results) {
    const p = this.pad();
    const pad = input.pad;
    if (this.padIndex !== null && (!p || p.index !== this.padIndex)) this.lost(input, paused, results);
    if (!p) return;
    if (this.padIndex === null) {
      this.padIndex = p.index;
      if (this.onFound) this.onFound();
    }
    pad.active = true;
    const v = (n) => (p.buttons[n] ? p.buttons[n].value : 0);
    const b = (n) => v(n) > 0.5;
    const deadzone = this.deadzone();
    const stickY = -axisDeadzone(p.axes[1] || 0, deadzone);
    pad.steer = axisDeadzone(p.axes[0] || 0, deadzone);
    const standard = p.mapping === 'standard';
    if (standard) {
      if (b(14)) pad.steer = -1;
      if (b(15)) pad.steer = 1;
      const pedals = Math.max(v(7), b(0) ? 1 : 0) - Math.max(v(6), b(1) || b(13) ? 1 : 0);
      pad.y = Math.abs(stickY) > Math.abs(pedals) ? stickY : pedals;
      pad.gas = v(7) > 0.2 || b(0);
      pad.brake = v(6) > 0.2 || b(1) || b(13) || stickY < -0.5;
      pad.turbo = b(2);
      pad.horn = b(3);
      pad.handbrake = b(5);
    } else {
      // A joystick or wheel has no known layout: its buttons by number, as the game binds them on
      // each device (0x0046d8a0, 0x0046e350), and the stick's Y as CM_JOY_UP and CM_JOY_DOWN.
      const joypad = input.device === 2;
      pad.y = stickY;
      pad.gas = joypad && b(2);
      pad.brake = stickY < -0.5;
      pad.turbo = b(0);
      pad.horn = b(1);
      pad.handbrake = b(joypad ? 3 : 2);
    }
    // Every poll follows every button, so one held since before a dialog is no new press in it.
    const press = {};
    for (const [key, n] of Object.entries(EDGE_BUTTONS)) press[key] = this.edge(key, b(n));
    const look = standard && !paused && b(11);
    if (look !== this.lookingBack) {
      this.lookingBack = look;
      if (look) input.pressHost(0x33, 0x04);
      else input.releaseHost(0x33, 0x04);
    }
    if (paused) {
      // Dialogs wait on keys: A confirms or resumes, B declines.
      if (press.a) input.pulseVk(paused === 2 ? 0x4A : 0x01);
      if (press.b) input.pulseVk(paused === 2 ? 0x4E : 0x01);
      if (press.start) input.pulseVk(0x01);
      return;
    }
    if (results && press.a) input.pulseVk(0x20);
    if (!standard) return;
    if (press.start) input.pulseVk(0x50);
    if (press.back) input.pulseVk(0x1B);
    if (press.lb) input.pulseVk(input.nextCameraKey());
    if (press.reset) input.pulseVk(0x0D);
    if (press.taunt) input.pulseVk(0x54);
  }
}
