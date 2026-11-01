
/* ==== TCustomGDIRadioButton.vmt_0c0 @ 00490654 ==== 
 * signature: undefined TCustomGDIRadioButton.vmt_0c0(void)
 * body: 00490654-004906b0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIRadioButton_vmt_0c0(int *param_1,int *param_2,LONG *param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  tagRECT *ptVar4;
  UINT UVar5;
  UINT UVar6;
  tagRECT tStack_14;
  
  ptVar4 = &tStack_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar4->left = *param_3;
    param_3 = param_3 + 1;
    ptVar4 = (tagRECT *)&ptVar4->top;
  }
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 == '\0') {
    UVar6 = 4;
    UVar5 = 4;
    ptVar4 = &tStack_14;
    pHVar2 = (HDC)FUN_004194d8(param_2);
    DrawFrameControl(pHVar2,ptVar4,UVar5,UVar6);
  }
  else {
    UVar6 = 0x404;
    UVar5 = 4;
    ptVar4 = &tStack_14;
    pHVar2 = (HDC)FUN_004194d8(param_2);
    DrawFrameControl(pHVar2,ptVar4,UVar5,UVar6);
  }
  return;
}


