
/* ==== TCustomPanel.dyn_0047 @ 00450790 ==== 
 * signature: undefined TCustomPanel.dyn_0047(void)
 * body: 00450790-0045087f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomPanel_dyn_0047(int *param_1,int param_2)

{
  code *pcVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar4;
  BOOL BVar5;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  int iStack_18;
  RECT RStack_14;
  
  pcStack_28 = (code *)&stack0xfffffffc;
  iStack_18 = 0;
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcVar1 = (code *)&stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x205) == '\0') {
    TGroupBox_get_Caption((int)param_1,&iStack_18);
    pcVar1 = pcStack_28;
    if (iStack_18 == 0) {
      iVar3 = param_1[0x80];
      if (*(char *)((int)param_1 + 0x1f9) != '\0') {
        iVar3 = iVar3 + param_1[0x7f];
      }
      if (*(char *)((int)param_1 + 0x1fa) != '\0') {
        iVar3 = iVar3 + param_1[0x7f];
      }
      if (0 < iVar3) {
        RStack_14.right = param_1[0xe];
        RStack_14.bottom = param_1[0xf];
        if (*(int *)(*(int *)(param_2 + 8) + 0x10) != RStack_14.right) {
          RStack_14.top = 0;
          RStack_14.left = (RStack_14.right - iVar3) + -1;
          BVar5 = -1;
          pRVar4 = &RStack_14;
          pHVar2 = (HWND)FUN_004349e0(param_1);
          InvalidateRect(pHVar2,pRVar4,BVar5);
        }
        if (*(int *)(*(int *)(param_2 + 8) + 0x14) != RStack_14.bottom) {
          RStack_14.left = 0;
          RStack_14.top = (RStack_14.bottom - iVar3) + -1;
          BVar5 = -1;
          pRVar4 = &RStack_14;
          pHVar2 = (HWND)FUN_004349e0(param_1);
          InvalidateRect(pHVar2,pRVar4,BVar5);
        }
      }
      goto LAB_00450861;
    }
  }
  pcStack_28 = pcVar1;
  (**(code **)(*param_1 + 0x74))();
LAB_00450861:
  TWinControl_dyn_0047(param_1,param_2);
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_00450887;
  pcStack_2c = (code *)0x45087f;
  FUN_00403c5c(&iStack_18);
  return;
}


