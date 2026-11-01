
/* ==== THintWindow.vmt_0c0 @ 00435fd8 ==== 
 * signature: undefined __register THintWindow.vmt_0c0(int param_1, undefined4 param_2, undefined * param_3, LPRECT param_4)
 * body: 00435fd8-00436030
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THintWindow_vmt_0c0(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4)

{
  uint uVar1;
  LPCSTR lpchText;
  HDC hdc;
  int cchText;
  LPRECT lprc;
  
  FUN_0040f7e8(0,0,param_2,&param_4->left,0);
  uVar1 = FUN_004306a8(param_1);
  uVar1 = uVar1 | 0xc10;
  cchText = -1;
  lprc = param_4;
  lpchText = FUN_004040a0(param_3);
  hdc = (HDC)FUN_004194d8(*(int **)(param_1 + 0x1f0));
  DrawTextA(hdc,lpchText,cchText,lprc,uVar1);
  param_4->right = param_4->right + 6;
  param_4->bottom = param_4->bottom + 2;
  return;
}


