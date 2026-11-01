
/* ==== FUN_0049c868 @ 0049c868 ==== 
 * signature: undefined FUN_0049c868(void)
 * body: 0049c868-0049c9e6
 */

void FUN_0049c868(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int iVar9;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  
  uVar1 = param_1[0xcd];
  iVar7 = *(int *)(param_1[0xce] + 0x30) - *(int *)(uVar1 + 0x30);
  if (SBORROW4(*(int *)(param_1[0xce] + 0x30),*(int *)(uVar1 + 0x30))) {
    puStack_18 = (undefined1 *)0x49c88a;
    uVar1 = thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX;
  }
  iVar8 = *(int *)(param_1[0xcc] + 0x34) - *(int *)(uVar1 + 0x34);
  if (SBORROW4(*(int *)(param_1[0xcc] + 0x34),*(int *)(uVar1 + 0x34))) {
    puStack_18 = (undefined1 *)0x49c89d;
    thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX_00;
  }
  puStack_18 = (undefined1 *)0x49c8a9;
  piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',param_3);
  puStack_1c = &UNK_0049c9e7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)&UNK_0049c9fc,piVar2);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd2] = (int)piVar3;
  FUN_004916a4(param_1[0xd2],*(int *)(param_1[0xcd] + 0x30),*(undefined4 *)(param_1[0xcd] + 0x34),
               iVar7);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd3] = (int)piVar3;
  uVar1 = param_1[0xcd];
  iVar4 = *(int *)(uVar1 + 0x34) + iVar8;
  iVar6 = iVar7;
  if (SCARRY4(*(int *)(uVar1 + 0x34),iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar4 = extraout_ECX_01;
  }
  FUN_004916a4(param_1[0xd3],*(int *)(uVar1 + 0x30),iVar4,iVar6);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd4] = (int)piVar3;
  uVar1 = param_1[0xcd];
  iVar4 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 2);
  iVar9 = iVar7;
  if ((longlong)iVar6 != (longlong)iVar8 * 2) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar4 = extraout_ECX_02;
    iVar6 = extraout_EDX;
  }
  iVar5 = iVar4 + iVar6;
  if (SCARRY4(iVar4,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar5 = extraout_ECX_03;
  }
  FUN_004916a4(param_1[0xd4],*(int *)(uVar1 + 0x30),iVar5,iVar9);
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd5] = (int)piVar3;
  uVar1 = param_1[0xcd];
  iVar4 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 3);
  if ((longlong)iVar6 != (longlong)iVar8 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar4 = extraout_ECX_04;
    iVar6 = extraout_EDX_00;
  }
  iVar8 = iVar4 + iVar6;
  if (SCARRY4(iVar4,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar8 = extraout_ECX_05;
  }
  FUN_004916a4(param_1[0xd5],*(int *)(uVar1 + 0x30),iVar8,iVar7);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_0049c9ee;
  puStack_1c = (undefined *)0x49c9e6;
  FUN_00402f9c(piVar2);
  return;
}


