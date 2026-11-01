
/* ==== TWinControl.vmt_08c @ 00431d24 ==== 
 * signature: undefined __register TWinControl.vmt_08c(int * param_1)
 * body: 00431d24-00431db9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_08c(int *param_1)

{
  HWND hWndInsertAfter;
  int iVar1;
  int iVar2;
  int iVar3;
  int cy;
  UINT uFlags;
  
  if (param_1[0x53] == 0) {
    (**(code **)(*param_1 + 0x98))();
    SetPropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_004ac75a,param_1);
    SetPropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_004ac758,param_1);
    if (param_1[9] != 0) {
      uFlags = 0x13;
      cy = 0;
      iVar3 = 0;
      iVar2 = 0;
      iVar1 = 0;
      hWndInsertAfter = (HWND)FUN_00431cdc(param_1[9],(int)param_1);
      SetWindowPos((HWND)param_1[0x53],hWndInsertAfter,iVar1,iVar2,iVar3,cy,uFlags);
    }
    iVar1 = FUN_004317bc((int)param_1);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        iVar3 = FUN_00431780((int)param_1,iVar2);
        FUN_0042de78(iVar3);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


