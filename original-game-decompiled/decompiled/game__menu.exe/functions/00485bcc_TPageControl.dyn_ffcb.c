
/* ==== TPageControl.dyn_ffcb @ 00485bcc ==== 
 * signature: undefined TPageControl.dyn_ffcb(void)
 * body: 00485bcc-00485c20
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_ffcb(int *param_1,int param_2,undefined4 param_3)

{
  HWND hWnd;
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  byte bVar4;
  tagRECT tStack_14;
  
  bVar4 = 0;
  ptVar2 = &tStack_14;
  hWnd = (HWND)FUN_004349e0(param_1);
  GetWindowRect(hWnd,ptVar2);
  ptVar2 = &tStack_14;
  pLVar3 = (LONG *)(param_2 + 0x44);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00403178(param_1,param_2,param_3);
  return;
}


