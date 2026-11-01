// A repeatable driver for benchmarks and smoke checks: drives the player's car with the keyboard
// device along the waypoint links the game's own AI follows. Not part of the game; ?bot=1 turns
// it on. Links and speed rule: docs/research/gameplay-systems.md, route following.
const DIK = { UP: 0xC8, DOWN: 0xD0, LEFT: 0xCB, RIGHT: 0xCD };
const WAYPOINTS = 0x715eb8;
const NEAREST_WAYPOINT = 0x4aac20;

export class Bot {
  constructor(race, input) {
    this.m = race.m;
    this.input = input;
    this.stuck = 0;
    this.reversing = 0;
    this.attempts = 0;
    this.state = null;
  }

  carState() {
    const { m } = this;
    const v = m.view;
    const index = m.i32[0x6fba58 >> 2];
    const car = m.u32[0x715e50 >> 2] + index * 0xF0;
    const obj = m.u32[0x73b0d0 >> 2] + v.getInt32(car + 0x24, true) * 0xA9;
    const f = (o) => v.getFloat32(obj + o, true);
    return {
      index,
      chunk: v.getInt32(car + 0x34, true),
      side: v.getInt32(car + 0x50, true),
      pos: [f(0x50), f(0x54), f(0x58)],
      right: [f(0x10), f(0x14), f(0x18)],
      forward: [f(0x30), f(0x34), f(0x38)],
      speed: v.getFloat32(car + 0xC4, true),
    };
  }

  /** FUN_004188c0 walks the links in this order. */
  nextWaypoint(w) {
    const { m } = this;
    const p = m.u32[WAYPOINTS >> 2] + w * 0x50;
    for (const link of [0x14, 0x18, 0x1C]) {
      const n = m.i32[(p + link) >> 2];
      if (n >= 0) return n;
    }
    return -1;
  }

  waypointPos(w) {
    const v = this.m.view;
    const p = this.m.u32[WAYPOINTS >> 2] + w * 0x50 + 8;
    return [v.getFloat32(p, true), v.getFloat32(p + 4, true), v.getFloat32(p + 8, true)];
  }

  /** Degrees to a point: positive is to the right. */
  angleTo(s, t) {
    const dx = t[0] - s.pos[0];
    const dz = t[2] - s.pos[2];
    return (Math.atan2(dx * s.right[0] + dz * s.right[2], dx * s.forward[0] + dz * s.forward[2]) * 180) / Math.PI;
  }

  tick() {
    const s = this.carState();
    this.state = s;
    const { dik } = this.input;
    let w = this.m.call(NEAREST_WAYPOINT, [s.index, s.side === 0 || s.side === 1 ? s.side : -1]);
    if (w < 0) w = this.lastWaypoint ?? -1;
    this.lastWaypoint = w;
    let steerAngle = 0;
    let bendAngle = 0;
    if (w >= 0) {
      let t = w;
      for (let k = 0; k < 2 && t >= 0; k++) t = this.nextWaypoint(t);
      if (t >= 0) steerAngle = this.angleTo(s, this.waypointPos(t));
      for (let k = 0; k < 4 && t >= 0; k++) t = this.nextWaypoint(t);
      if (t >= 0) bendAngle = this.angleTo(s, this.waypointPos(t));
    }
    // Stuck against something: back off with the wheel turned, then try again; if that keeps
    // failing, the game's own reset key (Enter).
    // Not moving yet at the start line is the countdown.
    if (Math.abs(s.speed) > 3) this.moved = true;
    if (Math.abs(s.speed) < 1.5 && this.moved) this.stuck++;
    else if (!this.reversing) this.stuck = 0;
    if (this.reversing > 0) {
      this.reversing--;
      dik[DIK.UP] = 0;
      dik[DIK.DOWN] = 0x80;
      dik[DIK.LEFT] = steerAngle > 0 ? 0x80 : 0;
      dik[DIK.RIGHT] = steerAngle > 0 ? 0 : 0x80;
      if (!this.reversing) this.stuck = 0;
      return;
    }
    if (this.stuck > 120) {
      this.attempts++;
      if (this.attempts % 3 === 0) {
        this.input.pulseVk(0x0D);
        this.stuck = 0;
      } else {
        this.reversing = 70;
      }
      return;
    }
    // Slower into bends than the AI's 60 - a/17, because the keyboard has only full lock.
    const target = Math.max(8, 32 - Math.abs(bendAngle) * 0.55);
    const over = s.speed - target;
    dik[DIK.UP] = over < 0 ? 0x80 : 0;
    dik[DIK.DOWN] = over > 2 ? 0x80 : 0;
    dik[DIK.LEFT] = steerAngle < -3 ? 0x80 : 0;
    dik[DIK.RIGHT] = steerAngle > 3 ? 0x80 : 0;
  }
}
