
/* ==== TOleControl.vmt_098 @ 0046f9fc ==== 
 * signature: undefined TOleControl.vmt_098(void)
 * body: 0046f9fc-0046fa9c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_098(int *param_1)

{
  int *piVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  undefined4 auStack_14 [4];
  
  FUN_0046f49c(param_1);
  if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
    FUN_0042e13c((int)param_1,auStack_14);
    FUN_0043481c((int)param_1);
    (**(code **)(*(int *)param_1[0x80] + 0x2c))();
    if (param_1[0x85] == 0) {
      piVar1 = FUN_0040b694((int *)&DAT_0046bfdc,'\x01',(undefined4 *)PTR_PTR_004ab7cc);
      FUN_004036f4(piVar1);
    }
    FUN_0046fecc((int)param_1);
    if (*(char *)((int)param_1 + 0x47) == '\0') {
      pHVar2 = (HWND)FUN_004349e0(param_1);
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_004349e0(param_1);
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  else {
    TWinControl_vmt_098(param_1);
  }
  return;
}


