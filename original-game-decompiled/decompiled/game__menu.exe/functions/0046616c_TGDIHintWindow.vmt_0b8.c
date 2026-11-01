
/* ==== TGDIHintWindow.vmt_0b8 @ 0046616c ==== 
 * signature: undefined TGDIHintWindow.vmt_0b8(void)
 * body: 0046616c-004661bb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDIHintWindow_vmt_0b8(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  HWND hWnd;
  int iVar2;
  uint *puVar3;
  HWND hWndInsertAfter;
  int cy;
  UINT uFlags;
  uint auStack_14 [4];
  
  puVar3 = auStack_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  piVar1 = (int *)FUN_00465fd0(param_1);
  FUN_004668a0(piVar1,auStack_14,param_3);
  uFlags = 0x50;
  cy = 0;
  iVar2 = 0;
  hWndInsertAfter = (HWND)0xffffffff;
  hWnd = (HWND)FUN_004349e0(param_1);
  SetWindowPos(hWnd,hWndInsertAfter,auStack_14[0],auStack_14[1],iVar2,cy,uFlags);
  return;
}


