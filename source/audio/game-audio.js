// IDirectSoundBuffer on Web Audio. A buffer's samples never change after the one
// Lock/Unlock at load, so each becomes an AudioBuffer at Unlock. Volume and pan follow
// the DirectSound laws in hundredths of a decibel. See docs/research/audio.md.
// Status and position read the game's virtual clock, not the audio hardware: what the game
// learns about its sounds then depends on ticks alone, so sound-driven logic such as speech
// queues stays the same at any frame rate.

export class GameAudio {
  constructor(context = null, output = null) {
    this.ctx = context;
    this.output = output;
    this.master = null;
    this.musicGainValue = 1;
    this.sfxGainValue = 1;
    this.muted = false;
    this.m = null;
    this.clock = null;
    this.voices = new Set();
  }

  attach(m, clock = null) {
    this.m = m;
    this.clock = clock;
  }

  ensureContext() {
    if (!this.ctx) {
      const AC = globalThis.AudioContext || globalThis.webkitAudioContext;
      if (!AC) return null;
      this.ctx = new AC();
    }
    if (!this.master) {
      this.master = this.ctx.createGain();
      this.applyMaster();
      this.master.connect(this.output || this.ctx.destination);
    }
    return this.ctx;
  }

  resume() {
    const c = this.ensureContext();
    if (c && c.state === 'suspended') c.resume();
  }

  suspend() {
    if (this.ctx && this.ctx.state === 'running') this.ctx.suspend();
  }

  setMasterGain(v) {
    this.sfxGainValue = v;
    this.applyMaster();
  }

  applyMaster() {
    if (this.master) this.master.gain.value = this.muted ? 0 : this.sfxGainValue;
  }

  now() {
    return this.clock ? this.clock.seconds : performance.now() / 1000;
  }

  bufferFilled(b) {
    if (b.audioBuffer) return;
    const c = this.ensureContext();
    if (!c) return;
    b.audioBuffer = decodePcm(c, this.m, b);
  }

  /** Shares the samples only: 0x0049e890 sets volume and pan per source, so chain(b) makes its own. */
  duplicate(b, src) {
    b.audioBuffer = src.audioBuffer;
    b.voice = null;
    b.position = 0;
    b.split = b.left = b.right = b.merge = null;
  }

  chain(b) {
    const c = this.ctx;
    if (b.left) return;
    b.split = c.createChannelSplitter(2);
    b.left = c.createGain();
    b.right = c.createGain();
    b.merge = c.createChannelMerger(2);
    b.left.connect(b.merge, 0, 0);
    b.right.connect(b.merge, 0, 1);
    b.merge.connect(this.master);
    this.applyGains(b);
  }

  applyGains(b) {
    if (!b.left) return;
    const base = Math.pow(10, Math.min(0, b.volume || 0) / 2000);
    const pan = b.pan || 0;
    b.left.gain.value = base * (pan > 0 ? Math.pow(10, -pan / 2000) : 1);
    b.right.gain.value = base * (pan < 0 ? Math.pow(10, pan / 2000) : 1);
  }

  play(b, loop) {
    const c = this.ensureContext();
    if (!c || !b.audioBuffer) return;
    if (b.voice) this.stopVoice(b);
    this.chain(b);
    const s = c.createBufferSource();
    s.buffer = b.audioBuffer;
    s.loop = loop;
    s.playbackRate.value = (b.frequency || b.baseFrequency) / b.baseFrequency;
    if (b.audioBuffer.numberOfChannels === 1) {
      s.connect(b.left);
      s.connect(b.right);
    } else {
      s.connect(b.split);
      b.split.connect(b.left, 0);
      b.split.connect(b.right, 1);
    }
    const offset = b.position || 0;
    s.start(0, offset);
    b.voice = { source: s, loop, started: this.now(), offset, rate: s.playbackRate.value };
    b.position = 0;
    this.voices.add(b);
  }

  stopVoice(b) {
    const v = b.voice;
    if (!v) return;
    try {
      v.source.stop();
      v.source.disconnect();
    } catch {
      // already stopped
    }
    b.position = this.positionOf(b, v);
    b.voice = null;
    this.voices.delete(b);
  }

  positionOf(b, v) {
    const d = (this.now() - v.started) * v.rate + v.offset;
    const len = b.audioBuffer.duration;
    return v.loop ? d % len : Math.min(d, len);
  }

  stop(b) {
    this.stopVoice(b);
  }

  setPosition(b, pos) {
    const bytes = (b.bits >> 3) * b.channels;
    b.position = pos / bytes / b.baseFrequency;
  }

  isPlaying(b) {
    const v = b.voice;
    if (!v) return false;
    if (v.loop) return true;
    if ((this.now() - v.started) * v.rate + v.offset >= b.audioBuffer.duration) {
      this.stopVoice(b);
      b.position = 0;
      return false;
    }
    return true;
  }

  setVolume(b) {
    this.applyGains(b);
  }

  setPan(b) {
    this.applyGains(b);
  }

  setFrequency(b, freq) {
    const v = b.voice;
    if (!v) return;
    const r = freq / b.baseFrequency;
    if (r === v.rate) return;
    v.offset = (this.now() - v.started) * v.rate + v.offset;
    v.started = this.now();
    v.rate = r;
    v.source.playbackRate.value = r;
  }

  releaseBuffer(b) {
    if (b.voice) this.stopVoice(b);
    if (b.merge) b.merge.disconnect();
    b.audioBuffer = null;
  }

  /** The pause dialog mutes through the mixer until it ends in the original: audio.md section 14. */
  pauseAll() {
    this.muted = true;
    this.applyMaster();
  }

  resumeAll() {
    this.muted = false;
    this.applyMaster();
  }

  stopAll() {
    for (const b of [...this.voices]) this.stopVoice(b);
  }
}

function decodePcm(c, m, b) {
  const frames = Math.floor(b.size / ((b.bits >> 3) * b.channels));
  if (!frames || !b.ptr) return null;
  const rate = Math.max(8000, Math.min(96000, b.baseFrequency));
  const out = c.createBuffer(b.channels, frames, rate);
  for (let ch = 0; ch < b.channels; ch++) {
    const d = out.getChannelData(ch);
    if (b.bits === 8) {
      const u8 = m.u8;
      let p = b.ptr + ch;
      for (let k = 0; k < frames; k++, p += b.channels) d[k] = (u8[p] - 128) / 128;
    } else {
      const v = m.view;
      let p = b.ptr + ch * 2;
      for (let k = 0; k < frames; k++, p += 2 * b.channels) d[k] = v.getInt16(p, true) / 32768;
    }
  }
  return out;
}
