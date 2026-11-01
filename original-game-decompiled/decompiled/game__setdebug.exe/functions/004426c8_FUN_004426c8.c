
/* ==== FUN_004426c8 @ 004426c8 ==== 
 * signature: undefined __register FUN_004426c8(void)
 * body: 004426c8-0044272b
 */

void FUN_004426c8(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  BOOL BVar5;
  int iVar6;
  
  iVar2 = FUN_00440214(DAT_004477c8);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      piVar3 = (int *)FUN_00440200(DAT_004477c8,iVar6);
      bVar1 = FUN_0042abb0((int)piVar3);
      if (bVar1) {
        pHVar4 = (HWND)FUN_0042a8b4(piVar3);
        BVar5 = IsWindowVisible(pHVar4);
        if (BVar5 != 0) {
          pHVar4 = (HWND)FUN_0042a8b4(piVar3);
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


