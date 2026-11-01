// The menu's TSoundManager: one music loop, one voice at a time, overlapping effects.
// Names are MenuRcs members without extension, or files in assets/media. audio.md section 16.
export class MenuSound {
  constructor(getContext, getOutput = null, base = 'assets/menu/') {
    this.getContext = getContext;
    this.getOutput = getOutput;
    this.base = base;
    this.buffers = new Map();
    this.music = null;
    this.musicGain = null;
    this.voice = null;
    this.volumes = { music: 1, fx: 1, voice: 1 };
    this.musicOn = true;
    this.fxOn = true;
  }

  gainFor(percent) {
    // Linear in the port's percent values: data.js soundPercent and directSoundVolume hold the curve.
    return Math.max(0, Math.min(1, percent / 100));
  }

  setVolumes({ music, fx, voice, musicOn, fxOn }) {
    if (music !== undefined) this.volumes.music = this.gainFor(music);
    if (fx !== undefined) this.volumes.fx = this.gainFor(fx);
    if (voice !== undefined) this.volumes.voice = this.gainFor(voice);
    if (musicOn !== undefined) this.musicOn = musicOn;
    if (fxOn !== undefined) this.fxOn = fxOn;
    if (this.musicGain) this.musicGain.gain.value = this.musicOn ? this.volumes.music : 0;
  }

  async load(name, base = this.base) {
    const key = name.toLowerCase();
    let p = this.buffers.get(key);
    if (!p) {
      p = (async () => {
        const c = this.getContext();
        if (!c) return null;
        const r = await fetch(base + key + '.wav');
        if (!r.ok) return null;
        const data = await r.arrayBuffer();
        const bytes = data.byteLength; // decodeAudioData detaches the buffer
        const audio = await c.decodeAudioData(data);
        return { audio, bytes };
      })().catch(() => null);
      this.buffers.set(key, p);
    }
    return p;
  }

  /** Where every menu sound connects: the port's master Volume. */
  output() {
    const c = this.getContext();
    return (this.getOutput && this.getOutput()) || (c && c.destination);
  }

  /** wanted, if given, says after the load whether this sound is still asked for. */
  async start(name, gainValue, loop = false, base, wanted = null) {
    const c = this.getContext();
    const b = await this.load(name, base);
    if (!c || !b || (wanted && !wanted())) return null;
    const s = c.createBufferSource();
    s.buffer = b.audio;
    s.loop = loop;
    const g = c.createGain();
    g.gain.value = gainValue;
    s.connect(g);
    g.connect(this.output());
    s.start();
    return { source: s, gain: g };
  }

  /** The original's StartMusic 0x4820d0 is synchronous; here a stop can overtake the load. */
  async startMusic() {
    if (this.music) return;
    const token = {};
    this.music = token;
    const gain = this.musicOn ? this.volumes.music : 0;
    const v = await this.start('menumsc', gain, true, 'assets/media/', () => this.music === token);
    if (this.music !== token) {
      if (v) v.source.stop();
      return;
    }
    this.music = v;
    if (v) this.musicGain = v.gain;
  }

  stopMusic() {
    if (this.music && this.music.source) this.music.source.stop();
    this.music = null;
    this.musicGain = null;
  }

  /** Stops the current voice and plays this one. */
  async playVoice(name) {
    this.stopVoice();
    const token = {};
    this.voiceToken = token;
    const v = await this.start(name, this.volumes.voice);
    if (this.voiceToken !== token) {
      if (v) v.source.stop();
      return;
    }
    this.voice = v;
  }

  stopVoice() {
    this.voiceToken = null;
    if (this.voice) {
      try {
        this.voice.source.stop();
      } catch {
        // already ended
      }
    }
    this.voice = null;
  }

  async playFx(name) {
    if (this.fxOn) await this.start(name, this.volumes.fx);
  }

  /** FUN_00482a0c: seconds = Trunc(bytes * WavTimeFactor / 1,000,000). */
  async durationSeconds(name, wavTimeFactor = 25) {
    const b = await this.load(name);
    return b ? Math.trunc((b.bytes * wavTimeFactor) / 1000000) : 0;
  }

  stopAll() {
    this.stopVoice();
    this.stopMusic();
  }
}
