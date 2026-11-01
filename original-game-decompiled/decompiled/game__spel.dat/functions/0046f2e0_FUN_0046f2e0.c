
/* ==== FUN_0046f2e0 @ 0046f2e0 ==== 
 * signature: int __stdcall FUN_0046f2e0(char param_1)
 * body: 0046f2e0-0046f32d
 */

int FUN_0046f2e0(char param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != '\0') {
    FUN_004a6800(0x7128b0);
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    if (100 < iVar1) {
      iVar1 = 100;
    }
    DAT_006fba2c = 1;
    return iVar1;
  }
  DAT_006fba2c = 0;
  return 0;
}


