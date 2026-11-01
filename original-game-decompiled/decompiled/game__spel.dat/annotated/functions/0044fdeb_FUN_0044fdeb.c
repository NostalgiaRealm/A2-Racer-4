
/* ==== FUN_0044fdeb @ 0044fdeb ==== 
 * signature: int __stdcall FUN_0044fdeb(void)
 * body: 0044fdeb-0044fe60
 */

int FUN_0044fdeb(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iStack00000004;
  
  lVar3 = __ftol();
  iStack00000004 = (int)lVar3;
  if (iStack00000004 < 0xf) {
    return 0;
  }
  if (200 < iStack00000004) {
    iStack00000004 = 200;
  }
  __ftol();
  iVar2 = (-(uint)(DAT_006fb8d4 != 1) & 0xfffffffa) + 0xc;
  iStack00000004 = iVar2;
  lVar3 = __ftol();
  iVar1 = (int)lVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  return iVar1;
}


