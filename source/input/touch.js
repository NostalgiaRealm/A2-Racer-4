// On-screen race controls. The steering wheel's graphic and interaction come from RedCat
// SuperKarts (source/input.js bindSteeringWheel, bindTouch, public/assets/touch/steering-wheel.svg),
// unchanged: absolute X/Y position, with its deadzone and axis sensitivities, pointer capture and
// release lifecycle. Its output goes to A2 Racer 4's own controls through a virtual joystick:
// docs/research/input.md H5.

export function axisDeadzone(value, deadzone = 0.18) {
  if (!Number.isFinite(value)) return 0;
  const magnitude = Math.min(1, Math.abs(value));
  const limit = Math.min(0.99, Math.max(0, deadzone));
  return magnitude <= limit ? 0 : (Math.sign(value) * (magnitude - limit)) / (1 - limit);
}

/** Absolute position on the wheel, as in the reference. */
export function touchWheelInput(clientX, clientY, { left, top, width, height }) {
  if (!(width > 0 && height > 0)) return { steer: 0, throttle: 0, brake: 0 };
  const factor = (value, sensitivity) => Math.max(-1, Math.min(1, axisDeadzone(value, 0.1) / (1 - sensitivity)));
  const steer = factor(((clientX - left) / width) * 2 - 1, 0.2);
  const drive = factor(1 - ((clientY - top) / height) * 2, 0.65);
  return { steer, throttle: Math.max(0, drive), brake: Math.max(0, -drive) };
}

/**
 * Runs handler on a release inside el. Browsers do not synthesize click for a second finger while
 * the first holds the wheel, so that finger's pointerup counts, as the reference's Stoppen does.
 */
export function onRelease(el, handler) {
  let fired = 0;
  const once = (e) => {
    if (e.timeStamp - fired < 400) return;
    fired = e.timeStamp;
    handler(e);
  };
  el.addEventListener('click', once);
  el.addEventListener('pointerup', (e) => {
    if (e.pointerType !== 'touch' || e.isPrimary) return;
    const box = el.getBoundingClientRect();
    if (e.clientX >= box.left && e.clientX <= box.right && e.clientY >= box.top && e.clientY <= box.bottom) {
      e.preventDefault();
      once(e);
    }
  });
}

export class TouchControls {
  constructor(root, getInput) {
    this.root = root;
    this.getInput = getInput;
    this.state = { steer: 0, throttle: 0, brake: 0 };
    this.buttons = 0;
    // Release of every pointer holding a control: a pointer id that comes back ends its old owner,
    // and releaseAll ends every gesture, as touchReleases does in the reference.
    this.releases = new Map();
    this.pressed = new Map();
    this.wheel = root.querySelector('#touch-wheel');
    this.bindWheel(this.wheel);
    for (const b of root.querySelectorAll('button[data-button]')) this.bindHold(b, Number(b.dataset.button));
    for (const b of root.querySelectorAll('button[data-vk]')) this.bindKey(b, Number(b.dataset.vk), b.dataset.dik ? Number(b.dataset.dik) : 0);
    const cam = root.querySelector('#touch-camera');
    this.bindPress(cam, (on) => {
      const input = this.getInput();
      if (on && input) input.pulseVk(input.nextCameraKey());
    });
    this.more = root.querySelector('#touch-more');
    this.bindPress(this.more, (on) => {
      if (on) this.showMore(!root.classList.contains('more'));
    });
    this.wheel.addEventListener('contextmenu', (e) => e.preventDefault());
  }

  /** Calls change(true) at the first pointer on el and change(false) when the last one ends. */
  bindPress(el, change) {
    const held = new Map();
    this.pressed.set(el, held);
    el.addEventListener('pointerdown', (e) => {
      if (e.pointerType === 'mouse' && e.button !== 0) return;
      e.preventDefault();
      const id = e.pointerId;
      if (held.has(id)) return;
      const owner = this.releases.get(id);
      if (owner) owner();
      const release = () => {
        if (!held.delete(id)) return;
        this.releases.delete(id);
        el.classList.toggle('held', held.size > 0);
        if (!held.size) change(false);
        if (el.hasPointerCapture(id)) el.releasePointerCapture(id);
      };
      held.set(id, release);
      this.releases.set(id, release);
      el.setPointerCapture(id);
      el.classList.add('held');
      if (held.size === 1) change(true);
    });
    const end = (e) => {
      const release = held.get(e.pointerId);
      if (release) release();
    };
    for (const event of ['pointerup', 'pointercancel', 'lostpointercapture']) el.addEventListener(event, end);
    el.addEventListener('contextmenu', (e) => e.preventDefault());
  }

  bindWheel(element) {
    let pointer = null;
    let release = null;
    const visual = ({ steer = 0, throttle = 0, brake = 0 } = {}) => {
      element.dataset.steer = String(steer);
      element.dataset.drive = throttle ? 'forward' : brake ? 'reverse' : 'neutral';
      element.style.setProperty('--steer-angle', `${steer * 90}deg`);
      element.classList.toggle('held', pointer !== null);
    };
    const update = (e) => {
      const c = touchWheelInput(e.clientX, e.clientY, element.getBoundingClientRect());
      this.state = c;
      visual(c);
      this.push();
    };
    element.addEventListener('pointerdown', (e) => {
      if (e.pointerType === 'mouse' && e.button !== 0) return;
      e.preventDefault();
      if (pointer !== null) return;
      const owner = this.releases.get(e.pointerId);
      if (owner) owner();
      pointer = e.pointerId;
      const id = pointer;
      release = () => {
        if (pointer !== id) return;
        pointer = null;
        release = null;
        this.releases.delete(id);
        this.state = { steer: 0, throttle: 0, brake: 0 };
        visual();
        this.push();
        if (element.hasPointerCapture(id)) element.releasePointerCapture(id);
      };
      this.releases.set(id, release);
      element.setPointerCapture(id);
      update(e);
    });
    element.addEventListener('pointermove', (e) => {
      if (e.pointerId === pointer) {
        e.preventDefault();
        update(e);
      }
    });
    for (const event of ['pointerup', 'pointercancel', 'lostpointercapture']) {
      element.addEventListener(event, (e) => {
        if (e.pointerId === pointer && release) release();
      });
    }
    visual();
  }

  bindHold(el, button) {
    this.bindPress(el, (on) => {
      if (on) this.buttons |= 1 << button;
      else this.buttons &= ~(1 << button);
      this.push();
    });
  }

  bindKey(el, vk, dik) {
    this.bindPress(el, (on) => {
      const input = this.getInput();
      if (!input) return;
      if (on) input.pressHost(vk, dik);
      else input.releaseHost(vk, dik);
    });
  }

  /** Wheel drive axis: up is gas, down is brake and then reverse, as the game's own control. */
  push() {
    const input = this.getInput();
    if (!input) return;
    input.touch.steer = this.state.steer;
    input.touch.gas = this.state.throttle > 0;
    input.touch.brake = this.state.brake > 0;
    input.touch.buttons = this.buttons;
  }

  releaseAll() {
    for (const release of [...this.releases.values()]) release();
    this.buttons = 0;
    this.state = { steer: 0, throttle: 0, brake: 0 };
    this.push();
  }

  /** One control goes away: its presses end, and the fingers on the others stay. */
  releaseControl(el) {
    const held = this.pressed.get(el);
    if (held) for (const release of [...held.values()]) release();
  }

  /**
   * After a layout: if the wheel moved, a finger on it would go on at another place, so every
   * gesture ends, as in the reference on resize. A resize that leaves the wheel alone ends nothing.
   */
  relayout() {
    const r = this.wheel.getBoundingClientRect();
    const was = this.wheelRect;
    this.wheelRect = r;
    if (was && (Math.abs(was.left - r.left) > 1 || Math.abs(was.top - r.top) > 1 || Math.abs(was.width - r.width) > 1)) this.releaseAll();
  }

  /** The less used buttons, in landscape behind Meer. Portrait always shows them: style.css. */
  showMore(open) {
    this.root.classList.toggle('more', open);
    this.more.setAttribute('aria-expanded', String(open));
  }

  setVisible(v) {
    this.root.hidden = !v;
    if (!v) {
      this.releaseAll();
      this.showMore(false);
    }
  }
}
