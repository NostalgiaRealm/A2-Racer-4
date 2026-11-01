
/* ==== TCustomForm.dyn_b03c @ 004471d4 ==== 
 * signature: undefined __register TCustomForm.dyn_b03c(int * param_1, int param_2, uint param_3)
 * body: 004471d4-00447268
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b03c(int *param_1,int param_2,uint param_3)

{
  bool bVar1;
  HWND pHVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint dwNewLong;
  uint local_10;
  
  local_10 = param_3;
  TScrollingWinControl_dyn_b03c(param_1,param_2);
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    iVar6 = -0x14;
    pHVar2 = (HWND)FUN_004349e0(param_1);
    local_10 = GetWindowLongA(pHVar2,iVar6);
    local_10 = local_10 & 0xffff8fff;
    FUN_004318b0(param_1,&local_10);
    iVar6 = -0x14;
    dwNewLong = local_10;
    pHVar2 = (HWND)FUN_004349e0(param_1);
    SetWindowLongA(pHVar2,iVar6,dwNewLong);
  }
  iVar6 = FUN_00415b9c((int)param_1);
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_00415b70((int)param_1,iVar5);
      uVar4 = FUN_00403114(piVar3,(int)&PTR_TPersistent_vmt_000_0043c104);
      if ((char)uVar4 != '\0') {
        piVar3 = (int *)FUN_00415b70((int)param_1,iVar5);
        FUN_00440e1c(piVar3);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


