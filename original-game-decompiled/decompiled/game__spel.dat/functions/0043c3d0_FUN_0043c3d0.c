
/* ==== FUN_0043c3d0 @ 0043c3d0 ==== 
 * signature: undefined4 __stdcall FUN_0043c3d0(void)
 * body: 0043c3d0-0043c4fb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043c3d0(void)

{
  float10 fVar1;
  
  fVar1 = FUN_004a6800(0x7128b0);
  fVar1 = fVar1 + (float10)_DAT_006c3b98;
  _DAT_006c3b98 = (float)fVar1;
  switch(DAT_006c3b9c) {
  case 0:
    if ((float10)2.2 <= fVar1) {
      DAT_006c3b9c = 1;
      _DAT_006c3b98 = 0.0;
      _DAT_0071277c = 8;
      return 0;
    }
    break;
  case 1:
    if ((float10)0.9 <= fVar1) {
      DAT_006c3b9c = 2;
      _DAT_006c3b98 = 0.0;
      _DAT_0071277c = 9;
      return 0;
    }
    break;
  case 2:
    if ((float10)0.9 <= fVar1) {
      DAT_006c3b9c = 3;
      _DAT_006c3b98 = 0.0;
      _DAT_0071277c = 10;
      return 0;
    }
    break;
  case 3:
    if ((float10)0.9 <= fVar1) {
      DAT_006c3b9c = 4;
      _DAT_006c3b98 = 0.0;
      _DAT_0071277c = 0xb;
      return 0;
    }
    break;
  case 4:
    FUN_0044cda0(0);
    if (DAT_006fba30 != 0) {
      DAT_0059becc = 0x2f;
    }
    if (1.0 <= _DAT_006c3b98) {
      return 1;
    }
  }
  return 0;
}


