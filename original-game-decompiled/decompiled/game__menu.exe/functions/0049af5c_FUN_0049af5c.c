
/* ==== FUN_0049af5c @ 0049af5c ==== 
 * signature: undefined __register FUN_0049af5c(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0049af5c-0049b155
 */

void FUN_0049af5c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int iVar9;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  
  uVar1 = param_1[0xc4];
  iVar7 = *(int *)(param_1[0xc6] + 0x30) - *(int *)(uVar1 + 0x30);
  if (SBORROW4(*(int *)(param_1[0xc6] + 0x30),*(int *)(uVar1 + 0x30))) {
    pcStack_18 = (code *)0x49af7e;
    uVar1 = thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX;
  }
  iVar8 = *(int *)(param_1[0xc5] + 0x34) - *(int *)(uVar1 + 0x34);
  if (SBORROW4(*(int *)(param_1[0xc5] + 0x34),*(int *)(uVar1 + 0x34))) {
    pcStack_18 = (code *)0x49af91;
    thunk_FUN_00402808(uVar1);
    param_3 = extraout_ECX_00;
  }
  pcStack_18 = (code *)0x49af9d;
  piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',param_3);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"butbigci",piVar2);
  piVar4 = piVar2;
  iVar3 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,iVar3,piVar4);
  param_1[0xcc] = (int)piVar4;
  iVar3 = *(int *)(param_1[200] + 0x30) - *(int *)(param_1[199] + 0x30);
  if (SBORROW4(*(int *)(param_1[200] + 0x30),*(int *)(param_1[199] + 0x30))) {
    thunk_FUN_00402808((uint)piVar4);
    iVar3 = extraout_EDX;
  }
  FUN_004916a4(param_1[0xcc],*(int *)(param_1[199] + 0x30),*(undefined4 *)(param_1[199] + 0x34),
               iVar3);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)"klrondje",piVar2);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xcd] = (int)piVar4;
  FUN_004916a4(param_1[0xcd],*(int *)(param_1[0xc4] + 0x30),*(undefined4 *)(param_1[0xc4] + 0x34),
               iVar7);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xce] = (int)piVar4;
  uVar1 = param_1[0xc4];
  iVar3 = *(int *)(uVar1 + 0x34) + iVar8;
  iVar6 = iVar7;
  if (SCARRY4(*(int *)(uVar1 + 0x34),iVar8)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_ECX_01;
  }
  FUN_004916a4(param_1[0xce],*(int *)(uVar1 + 0x30),iVar3,iVar6);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xcf] = (int)piVar4;
  uVar1 = param_1[0xc4];
  iVar3 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 2);
  iVar9 = iVar7;
  if ((longlong)iVar6 != (longlong)iVar8 * 2) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_ECX_02;
    iVar6 = extraout_EDX_00;
  }
  iVar5 = iVar3 + iVar6;
  if (SCARRY4(iVar3,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar5 = extraout_ECX_03;
  }
  FUN_004916a4(param_1[0xcf],*(int *)(uVar1 + 0x30),iVar5,iVar9);
  piVar4 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,9,piVar2);
  param_1[0xd0] = (int)piVar4;
  uVar1 = param_1[0xc4];
  iVar3 = *(int *)(uVar1 + 0x34);
  iVar6 = (int)((longlong)iVar8 * 3);
  if ((longlong)iVar6 != (longlong)iVar8 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_ECX_04;
    iVar6 = extraout_EDX_01;
  }
  iVar8 = iVar3 + iVar6;
  if (SCARRY4(iVar3,iVar6)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar8 = extraout_ECX_05;
  }
  FUN_004916a4(param_1[0xd0],*(int *)(uVar1 + 0x30),iVar8,iVar7);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0049b15d;
  pcStack_1c = (code *)0x49b155;
  FUN_00402f9c(piVar2);
  return;
}


