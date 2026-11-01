
/* ==== TfrmCoolDialog.btnHelpClick @ 004891e0 ==== 
 * signature: undefined __register TfrmCoolDialog.btnHelpClick(int * param_1)
 * body: 004891e0-00489348
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCoolDialog_btnHelpClick(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined1 *in_stack_fffffec4;
  int iVar6;
  code *pcStack_134;
  code *pcStack_130;
  undefined1 *puStack_12c;
  int local_11c [2];
  undefined4 *local_114;
  byte local_110 [256];
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_12c = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_114 = (undefined4 *)0x0;
  pcStack_130 = thunk_FUN_004036bc;
  pcStack_134 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_134;
  FUN_00480584(*(int **)puVar1,0x489360,1);
  iVar4 = *(int *)(*(int *)puVar1 + 0xa0);
  if (iVar4 == 0) {
    TfrmCoolDialog_ShowWinHelp(param_1);
  }
  else {
    iVar6 = 0;
    in_stack_fffffec4 = (undefined1 *)0x0;
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80((int *)&local_10,local_110);
    puVar2 = local_10;
    FUN_00403f28((int *)&local_114,*(undefined4 **)(*(int *)puVar1 + 0xb8),(undefined4 *)"agent.ini"
                );
    FUN_00482af8(iVar4,local_114,puVar2,in_stack_fffffec4,iVar6);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0040f7d0(*(undefined4 *)(param_1[0xbb] + 0x30),*(undefined4 *)(param_1[0xbb] + 0x34),
                 local_11c);
    uVar3 = FUN_0042e2ac(param_1,local_11c,&local_c);
    iVar4 = local_c + 10;
    if (SCARRY4(local_c,10)) {
      thunk_FUN_00402808(uVar3);
      iVar4 = extraout_EDX;
    }
    FUN_0047e2e0(*(int *)(*(int *)puVar1 + 0xa0),iVar4);
    iVar4 = *(int *)(*(int *)puVar1 + 0xa0);
    uVar3 = FUN_0047e5e4(iVar4);
    iVar6 = uVar3 + local_8;
    if (SCARRY4(uVar3,local_8)) {
      uVar3 = thunk_FUN_00402808(uVar3);
      iVar6 = extraout_EDX_00;
    }
    iVar5 = iVar6 + 0x3c;
    if (SCARRY4(iVar6,0x3c)) {
      thunk_FUN_00402808(uVar3);
      iVar5 = extraout_EDX_01;
    }
    FUN_0047e388(iVar4,iVar5);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
  }
  (**(code **)(*param_1 + 0x74))();
  *in_FS_OFFSET = in_stack_fffffec4;
  pcStack_134 = FUN_00489350;
  FUN_00403c5c((int *)&local_114);
  FUN_00403c5c((int *)&local_10);
  return;
}


