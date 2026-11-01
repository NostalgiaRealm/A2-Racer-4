
/* ==== TDaviGraphicHintWindow.vmt_0c0 @ 004690e0 ==== 
 * signature: undefined TDaviGraphicHintWindow.vmt_0c0(void)
 * body: 004690e0-004691e7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviGraphicHintWindow_vmt_0c0
               (int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  LONG *pLVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  LPCSTR lpchText;
  HDC hdc;
  uint uVar6;
  LPRECT lprc;
  
  if (param_5 == (int *)0x0) {
    FUN_00403c40("Assertion failure");
  }
  uVar2 = FUN_00403114(param_5,(int)&PTR_TPersistent_vmt_000_0045d61c);
  if ((char)uVar2 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  piVar3 = FUN_0045dd74((int)param_5,6);
  iVar4 = (**(code **)(*piVar3 + 0x20))();
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    uVar5 = thunk_FUN_00402808(uVar5);
  }
  FUN_0040f7e8(0,0,param_2,&param_4->left,uVar5);
  piVar3 = *(int **)(*(int *)(param_1 + 0x1f0) + 0xc);
  (**(code **)(*piVar3 + 8))(piVar3,param_5[0x14]);
  uVar5 = FUN_004306a8(param_1);
  uVar5 = uVar5 | 0xc10;
  if ((int)uVar5 < 0) {
    uVar5 = thunk_FUN_00402808(uVar5);
  }
  iVar4 = -1;
  lprc = param_4;
  lpchText = FUN_004040a0(param_3);
  hdc = (HDC)FUN_004194d8(*(int **)(param_1 + 0x1f0));
  uVar5 = DrawTextA(hdc,lpchText,iVar4,lprc,uVar5);
  pLVar1 = &param_4->right;
  iVar4 = *pLVar1;
  *pLVar1 = *pLVar1 + 6;
  if (SCARRY4(iVar4,6)) {
    thunk_FUN_00402808(uVar5);
  }
  piVar3 = FUN_0045dd74((int)param_5,6);
  iVar4 = (**(code **)(*piVar3 + 0x20))();
  uVar5 = iVar4 + param_4->top;
  if (SCARRY4(iVar4,param_4->top)) {
    uVar5 = thunk_FUN_00402808(uVar5);
  }
  uVar6 = uVar5 - 1;
  if (SBORROW4(uVar5,1)) {
    uVar6 = thunk_FUN_00402808(uVar6);
  }
  param_4->bottom = uVar6;
  pLVar1 = &param_4->bottom;
  iVar4 = *pLVar1;
  *pLVar1 = *pLVar1 + -1;
  if (SBORROW4(iVar4,1)) {
    thunk_FUN_00402808(uVar6);
  }
  return;
}


