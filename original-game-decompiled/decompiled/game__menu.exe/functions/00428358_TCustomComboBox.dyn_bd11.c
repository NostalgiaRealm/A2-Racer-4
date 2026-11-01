
/* ==== TCustomComboBox.dyn_bd11 @ 00428358 ==== 
 * signature: undefined TCustomComboBox.dyn_bd11(void)
 * body: 00428358-00428382;00428482-00428497
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomComboBox_dyn_bd11(int *param_1,int param_2,undefined4 param_3)

{
  HWND pHVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  uint *puStack_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_18 = &UNK_00428498;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  switch(*(undefined2 *)(param_2 + 6)) {
  case 1:
    puStack_14 = &stack0xfffffffc;
    uVar2 = FUN_00427908(param_1);
    (**(code **)(*(int *)param_1[0x7c] + 0xc))((int *)param_1[0x7c],uVar2,&puStack_8);
    TGroupBox_set_Caption((int)param_1,puStack_8);
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
    break;
  case 2:
    puStack_14 = &stack0xfffffffc;
    FUN_00403178(param_1,param_2,param_3);
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(undefined1 *)((int)param_1 + 0x221) = 1;
    puStack_14 = &stack0xfffffffc;
    FUN_00432f90(param_1,param_2,param_3);
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined1 *)((int)param_1 + 0x221) = 1;
    puStack_14 = &stack0xfffffffc;
    FUN_0043307c(param_1);
    break;
  case 5:
    puStack_14 = &stack0xfffffffc;
    FUN_00403178(param_1,param_2,param_3);
    break;
  case 7:
    *(undefined1 *)((int)param_1 + 0x221) = 0;
    FUN_00403178(param_1,param_2,param_3);
    FUN_0042829c(param_1);
    if (*(char *)((int)param_1 + 0x221) != '\0') {
      LVar5 = 0;
      WVar4 = 0;
      UVar3 = 0x1f;
      pHVar1 = (HWND)FUN_004349e0(param_1);
      PostMessageA(pHVar1,UVar3,WVar4,LVar5);
      if ((char)param_1[0x88] == '\0') {
        LVar5 = 0;
        WVar4 = 0;
        UVar3 = 0x14f;
        pHVar1 = (HWND)FUN_004349e0(param_1);
        PostMessageA(pHVar1,UVar3,WVar4,LVar5);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_0042849f;
  puStack_18 = (undefined *)0x428497;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


