// A race without the menu: the ?race=1 route and the headless checks. The menu writes these keys
// before every race. They are pinned here because the shipped game.ini cannot be relied on: the
// car update overwrites it with a copy from the developers' machine (etappe 8, car 7, tune-ups on).
export function pinRace(vfs, { etappe = 0, car = 0, laps = 2, resolution = null, chunks = null } = {}) {
  const set = (section, key, value) => vfs.iniSet('game.ini', section, key, String(value));
  // 0 and 1 are the 8-bit path, 3 is what raser.ini ships.
  if (resolution !== null) vfs.iniSet('raser.ini', 'PROGRAM', 'RESOLUTION', String(resolution));
  // What a slow machine ends up at: FUN_0044cb30. For comparing pictures with one.
  if (chunks !== null) vfs.iniSet('game.ini', 'OPTIONS', 'VISIBLECHUNKS', String(chunks));
  set('ETAPPE', 'ETAPPE', etappe);
  // static.ini [TRACK9] british=1, the one track that drives on the left.
  set('ETAPPE', 'BRITISH', etappe === 9 ? 1 : 0);
  set('OPTIONS', 'NRLAPS', laps);
  set('PLAYER', 'CAR', car);
  set('PLAYER', 'MONEY', 0);
  for (const tuneUp of ['MOTOR', 'BANDEN', 'ABS', 'VERSNELLINGSBAK']) set('PLAYER', tuneUp, 0);
}
