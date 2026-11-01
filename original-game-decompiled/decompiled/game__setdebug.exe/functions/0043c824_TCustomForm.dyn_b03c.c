
/* ==== TCustomForm.dyn_b03c @ 0043c824 ==== 
 * signature: undefined __register TCustomForm.dyn_b03c(int * param_1, int param_2, uint param_3)
 * body: 0043c824-0043c8b8
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
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    iVar6 = -0x14;
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    local_10 = GetWindowLongA(pHVar2,iVar6);
    local_10 = local_10 & 0xffff8fff;
    FUN_00427910(param_1,&local_10);
    iVar6 = -0x14;
    dwNewLong = local_10;
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    SetWindowLongA(pHVar2,iVar6,dwNewLong);
  }
  iVar6 = FUN_00413fe8((int)param_1);
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_00413fbc((int)param_1,iVar5);
      uVar4 = FUN_00402e8c(piVar3,(int)&PTR_TPersistent_vmt_000_00431a24);
      if ((char)uVar4 != '\0') {
        piVar3 = (int *)FUN_00413fbc((int)param_1,iVar5);
        FUN_0043673c(piVar3);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


