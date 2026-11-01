
/* ==== FUN_00498df8 @ 00498df8 ==== 
 * signature: undefined FUN_00498df8(void)
 * body: 00498df8-00499053
 */

/* WARNING: Removing unreachable block (ram,0x00498f25) */

void FUN_00498df8(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar6;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar7;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x324) + 0x30);
  uVar1 = *(uint *)(param_1 + 800);
  iVar9 = iVar6 - *(int *)(uVar1 + 0x30);
  if (SBORROW4(iVar6,*(int *)(uVar1 + 0x30))) {
    puStack_20 = (undefined1 *)0x498e1c;
    uVar1 = thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x328) + 0x34);
  iVar10 = iVar6 - *(int *)(uVar1 + 0x34);
  if (SBORROW4(iVar6,*(int *)(uVar1 + 0x34))) {
    puStack_20 = (undefined1 *)0x498e2f;
    thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX_00;
  }
  puStack_20 = (undefined1 *)0x498e3b;
  piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',param_3);
  puStack_20 = (undefined1 *)0x498e4a;
  piVar3 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX_01);
  puStack_20 = (undefined1 *)0x498e59;
  piVar4 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX_02);
  puStack_24 = &UNK_00499054;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)&UNK_0049906c,piVar2);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"blind_up",piVar3);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"redin_up",piVar4);
  uVar5 = FUN_00491790(&UNK_00491580,1,param_1,9,piVar4,piVar3,piVar2);
  *(undefined4 *)(param_1 + 0x338) = uVar5;
  FUN_004916a4(*(int *)(param_1 + 0x338),*(int *)(*(int *)(param_1 + 800) + 0x30),
               *(undefined4 *)(*(int *)(param_1 + 800) + 0x34),iVar9);
  uVar5 = FUN_00491790(&UNK_00491580,1,param_1,9,piVar4,piVar3,piVar2);
  *(undefined4 *)(param_1 + 0x33c) = uVar5;
  uVar1 = *(uint *)(param_1 + 800);
  iVar6 = *(int *)(uVar1 + 0x34) + iVar10;
  iVar8 = iVar9;
  if (SCARRY4(*(int *)(uVar1 + 0x34),iVar10)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_03;
  }
  FUN_004916a4(*(int *)(param_1 + 0x33c),*(int *)(uVar1 + 0x30),iVar6,iVar8);
  uVar5 = FUN_00491790(&UNK_00491580,1,param_1,9,piVar4,piVar3,piVar2);
  *(undefined4 *)(param_1 + 0x340) = uVar5;
  uVar1 = *(uint *)(param_1 + 800);
  iVar6 = *(int *)(uVar1 + 0x34);
  iVar8 = (int)((longlong)iVar10 * 2);
  iVar12 = iVar9;
  if ((longlong)iVar8 != (longlong)iVar10 * 2) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_04;
    iVar8 = extraout_EDX;
  }
  iVar7 = iVar6 + iVar8;
  if (SCARRY4(iVar6,iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar7 = extraout_ECX_05;
  }
  FUN_004916a4(*(int *)(param_1 + 0x340),*(int *)(uVar1 + 0x30),iVar7,iVar12);
  uVar5 = FUN_00491790(&UNK_00491580,1,param_1,9,piVar4,piVar3,piVar2);
  *(undefined4 *)(param_1 + 0x344) = uVar5;
  uVar1 = *(uint *)(param_1 + 800);
  iVar6 = *(int *)(uVar1 + 0x34);
  iVar8 = (int)((longlong)iVar10 * 3);
  iVar12 = iVar9;
  if ((longlong)iVar8 != (longlong)iVar10 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_06;
    iVar8 = extraout_EDX_00;
  }
  iVar7 = iVar6 + iVar8;
  if (SCARRY4(iVar6,iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar7 = extraout_ECX_07;
  }
  FUN_004916a4(*(int *)(param_1 + 0x344),*(int *)(uVar1 + 0x30),iVar7,iVar12);
  uVar11 = 9;
  uVar5 = FUN_00491790(&UNK_00491580,1,param_1,9,piVar4,piVar3,piVar2);
  *(undefined4 *)(param_1 + 0x348) = uVar5;
  uVar1 = *(uint *)(param_1 + 800);
  iVar6 = *(int *)(uVar1 + 0x34);
  iVar8 = (int)((longlong)iVar10 * 4);
  if ((longlong)iVar8 != (longlong)iVar10 * 4) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar6 = extraout_ECX_08;
    iVar8 = extraout_EDX_01;
  }
  iVar10 = iVar6 + iVar8;
  if (SCARRY4(iVar6,iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar10 = extraout_ECX_09;
  }
  FUN_004916a4(*(int *)(param_1 + 0x348),*(int *)(uVar1 + 0x30),iVar10,iVar9);
  *in_FS_OFFSET = uVar11;
  FUN_00402f9c(piVar2);
  FUN_00402f9c(piVar3);
  FUN_00402f9c(piVar4);
  return;
}


