
/* ==== FUN_0046f2a0 @ 0046f2a0 ==== 
 * signature: int __stdcall FUN_0046f2a0(char param_1)
 * body: 0046f2a0-0046f2de
 */

int FUN_0046f2a0(char param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == '\0') {
    iVar1 = 0;
  }
  else {
    FUN_004a6800(0x7128b0);
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    if (100 < iVar1) {
      return 100;
    }
  }
  return iVar1;
}


