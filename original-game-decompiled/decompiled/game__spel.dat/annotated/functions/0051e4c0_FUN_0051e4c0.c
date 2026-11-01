
/* ==== FUN_0051e4c0 @ 0051e4c0 ==== 
 * signature: undefined __stdcall FUN_0051e4c0(void)
 * body: 0051e4c0-0051e5b9
 */

void FUN_0051e4c0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_00558d5b(DAT_0074c76c,DAT_0074c758,4,FUN_0051e5c0);
  DAT_0074c760 = DAT_0074c76c[(int)DAT_0074c758 + -1];
  if ((DAT_0074c750 <= DAT_0074c760) || (DAT_0074c754 <= DAT_0074c760)) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_error__qh_memsetup___large_005be5b0);
    FUN_0051e8e0(4,(int *)0x0);
  }
  DAT_0074c770 = _malloc(DAT_0074c760 * 4 + 4);
  if (DAT_0074c770 == (void *)0x0) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_error__qh_memsetup___insuf_005be580);
    FUN_0051e8e0(4,(int *)0x0);
  }
  iVar1 = DAT_0074c760;
  if (DAT_0074c760 != -1) {
    do {
      *(int *)((int)DAT_0074c770 + iVar1 * 4) = iVar1;
      bVar3 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar3);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (-1 < DAT_0074c760) {
    do {
      if (DAT_0074c76c[iVar1] < *(int *)((int)DAT_0074c770 + iVar2 * 4)) {
        iVar1 = iVar1 + 1;
      }
      *(int *)((int)DAT_0074c770 + iVar2 * 4) = iVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= DAT_0074c760);
  }
  return;
}


