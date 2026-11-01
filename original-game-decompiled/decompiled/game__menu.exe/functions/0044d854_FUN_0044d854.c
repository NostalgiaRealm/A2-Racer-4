
/* ==== FUN_0044d854 @ 0044d854 ==== 
 * signature: undefined __register FUN_0044d854(void)
 * body: 0044d854-0044d8b7
 */

void FUN_0044d854(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  BOOL BVar5;
  int iVar6;
  
  iVar2 = FUN_0044b19c(DAT_004ac7d8);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      piVar3 = (int *)FUN_0044b188(DAT_004ac7d8,iVar6);
      bVar1 = FUN_00434cdc((int)piVar3);
      if (bVar1) {
        pHVar4 = (HWND)FUN_004349e0(piVar3);
        BVar5 = IsWindowVisible(pHVar4);
        if (BVar5 != 0) {
          pHVar4 = (HWND)FUN_004349e0(piVar3);
          BVar5 = IsWindowEnabled(pHVar4);
          if (BVar5 != 0) {
            (**(code **)(*piVar3 + 200))();
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


