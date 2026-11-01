
/* ==== FUN_004457d0 @ 004457d0 ==== 
 * signature: undefined __stdcall FUN_004457d0(void)
 * body: 004457d0-00445834
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004457d0(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_006ed6a0;
  lVar2 = __ftol();
  DAT_006ed694 = (int)lVar2;
  if (DAT_006ed694 < 0) {
    DAT_006ed694 = DAT_006ed694 + iVar1;
    _DAT_006ed69c = (float)DAT_006ed694;
  }
  if (iVar1 <= DAT_006ed694) {
    DAT_006ed694 = DAT_006ed694 - iVar1;
    _DAT_006ed69c = (float)DAT_006ed694;
  }
  FUN_004456e0();
  return;
}


