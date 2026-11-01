
/* ==== FUN_0044beb0 @ 0044beb0 ==== 
 * signature: int __stdcall FUN_0044beb0(void)
 * body: 0044beb0-0044bf07
 */

int FUN_0044beb0(void)

{
  longlong lVar1;
  undefined4 uStack00000008;
  
  lVar1 = __ftol();
  uStack00000008 = (undefined4)lVar1;
  if (DAT_006fb8d4 == 0) {
    lVar1 = __ftol();
    return (int)lVar1 * 1000;
  }
  lVar1 = __ftol();
  return (int)lVar1 * 1000;
}


