
/* ==== TGameMenuScreen.btnHelpClick @ 0049e678 ==== 
 * signature: undefined __register TGameMenuScreen.btnHelpClick(int * param_1)
 * body: 0049e678-0049e7e7
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TGameMenuScreen_btnHelpClick(int *param_1)

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
  undefined1 *puVar6;
  int iVar7;
  undefined4 uStack_134;
  code *pcStack_130;
  code *pcStack_12c;
  int local_11c [2];
  undefined4 *local_114;
  byte local_110 [256];
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puVar1 = PTR_DAT_004ab694;
  pcStack_12c = (code *)&stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_114 = (undefined4 *)0x0;
  pcStack_130 = thunk_FUN_004036bc;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  FUN_00480584(*(int **)puVar1,0x49e800,1);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  iVar4 = *(int *)(*(int *)puVar1 + 0xa0);
  if (iVar4 == 0) {
    FUN_0049eb00(param_1);
  }
  else {
    iVar7 = 0;
    puVar6 = (undefined1 *)0x0;
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80((int *)&local_10,local_110);
    puVar2 = local_10;
    FUN_00403f28((int *)&local_114,*(undefined4 **)(*(int *)puVar1 + 0xb8),(undefined4 *)"agent.ini"
                );
    FUN_00482af8(iVar4,local_114,puVar2,puVar6,iVar7);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0040f7d0(*(undefined4 *)(param_1[0xb5] + 0x30),*(undefined4 *)(param_1[0xb5] + 0x34),
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
    iVar7 = uVar3 + local_8;
    if (SCARRY4(uVar3,local_8)) {
      uVar3 = thunk_FUN_00402808(uVar3);
      iVar7 = extraout_EDX_00;
    }
    iVar5 = iVar7 + 0x3c;
    if (SCARRY4(iVar7,0x3c)) {
      thunk_FUN_00402808(uVar3);
      iVar5 = extraout_EDX_01;
    }
    FUN_0047e388(iVar4,iVar5);
    FUN_0047e430(*(int *)(*(int *)puVar1 + 0xa0));
    FUN_0047e17c(*(int *)(*(int *)puVar1 + 0xa0));
    (**(code **)(*param_1 + 0x74))();
  }
  *in_FS_OFFSET = uStack_134;
  pcStack_12c = FUN_0049e7ef;
  pcStack_130 = (code *)0x49e7df;
  FUN_00403c5c((int *)&local_114);
  pcStack_130 = (code *)0x49e7e7;
  FUN_00403c5c((int *)&local_10);
  return;
}


