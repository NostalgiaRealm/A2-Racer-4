
/* ==== TCustomTabControl.dyn_0002 @ 0048526c ==== 
 * signature: undefined TCustomTabControl.dyn_0002(void)
 * body: 0048526c-004852f9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomTabControl_dyn_0002(int *param_1)

{
  int iVar1;
  int *piVar2;
  HWND hWnd;
  HWND pHVar3;
  BOOL BVar4;
  undefined4 extraout_ECX;
  
  if ((int *)param_1[0x84] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
    if (0 < iVar1) {
      piVar2 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
      param_1[0x82] = (int)piVar2;
      (**(code **)(*piVar2 + 8))(piVar2,param_1[0x84]);
      iVar1 = FUN_00484b6c(param_1);
      param_1[0x81] = iVar1;
    }
  }
  hWnd = GetFocus();
  if (hWnd != (HWND)0x0) {
    pHVar3 = (HWND)FUN_004349e0(param_1);
    if (hWnd != pHVar3) {
      pHVar3 = (HWND)FUN_004349e0(param_1);
      BVar4 = IsChild(pHVar3,hWnd);
      if (BVar4 == 0) goto LAB_004852e5;
    }
    SetFocus((HWND)0x0);
  }
LAB_004852e5:
  TWinControl_dyn_0002(param_1);
  param_1[0x53] = 0;
  return;
}


