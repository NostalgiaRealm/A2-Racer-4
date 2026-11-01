
/* ==== TCustomForm.dyn_0018 @ 0043e644 ==== 
 * signature: undefined TCustomForm.dyn_0018(void)
 * body: 0043e644-0043e6d9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0018(int *param_1,int param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  int nCmdShow;
  
  if (*(int *)(param_2 + 8) == 1) {
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    BVar1 = IsIconic(pHVar2);
    if (BVar1 == 0) {
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      BVar1 = IsZoomed(pHVar2);
      if (BVar1 == 0) {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x85) = 3;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x85) = 2;
    }
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 8) == 3) {
    if ((char)param_1[0x85] != '\0') {
      nCmdShow = *(int *)((uint)*(byte *)(param_1 + 0x85) * 4 + 0x4468f8);
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      ShowWindow(pHVar2,nCmdShow);
      *(undefined1 *)(param_1 + 0x85) = 0;
      return;
    }
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


