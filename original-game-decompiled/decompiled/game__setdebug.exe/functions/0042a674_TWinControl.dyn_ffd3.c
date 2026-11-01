
/* ==== TWinControl.dyn_ffd3 @ 0042a674 ==== 
 * signature: undefined TWinControl.dyn_ffd3(void)
 * body: 0042a674-0042a6d2
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffd3(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    if ((char)param_2 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x180) + 8) + -1;
    }
    iVar3 = 0;
    if (*(int *)(iVar1 + 0x134) != 0) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x134) + 8);
    }
    FUN_0042a59c(param_1,iVar2 + iVar3);
    return;
  }
  if (*(HWND *)(param_1 + 0x14c) != (HWND)0x0) {
    SetWindowPos(*(HWND *)(param_1 + 0x14c),(HWND)(uint)*(ushort *)((param_2 & 0x7f) * 2 + 0x4466ec)
                 ,0,0,0,0,3);
  }
  return;
}


