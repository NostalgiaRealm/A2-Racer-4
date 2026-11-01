
/* ==== FUN_00429080 @ 00429080 ==== 
 * signature: undefined __cdecl FUN_00429080(float param_1)
 * body: 00429080-004290cb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00429080(float param_1)

{
  DAT_006c2f28 = 1;
  if (50000.0 < param_1) {
    _DAT_006c2f2c = 50000.0;
    return;
  }
  if (param_1 < 0.0) {
    _DAT_006c2f2c = 0.0;
    return;
  }
  _DAT_006c2f2c = param_1;
  return;
}


