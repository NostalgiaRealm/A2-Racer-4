
/* ==== TCustomForm.vmt_040 @ 00446924 ==== 
 * signature: undefined TCustomForm.vmt_040(void)
 * body: 00446924-004469a9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_040(int *param_1,LPRECT param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  DWORD dwExStyle;
  DWORD dwStyle;
  int nIndex;
  int iVar3;
  
  pHVar1 = (HWND)FUN_004349e0(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 != 0) {
    SetRect(param_2,0,0,0,0);
    iVar3 = -0x14;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    dwExStyle = GetWindowLongA(pHVar1,iVar3);
    iVar3 = -(uint)(param_1[0x8c] != 0);
    nIndex = -0x10;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    dwStyle = GetWindowLongA(pHVar1,nIndex);
    AdjustWindowRectEx(param_2,dwStyle,iVar3,dwExStyle);
    SetRect(param_2,0,0,(param_1[0xe] - param_2->right) + param_2->left,
            (param_1[0xf] - param_2->bottom) + param_2->top);
    return;
  }
  TWinControl_vmt_040(param_1,param_2);
  return;
}


