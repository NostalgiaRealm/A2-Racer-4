
/* ==== FUN_004668a0 @ 004668a0 ==== 
 * signature: undefined __register FUN_004668a0(int * param_1, uint * param_2, uint * param_3)
 * body: 004668a0-00466a33
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004668a0(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  undefined4 extraout_EDX_11;
  uint *puVar8;
  uint *puVar9;
  int *in_FS_OFFSET;
  byte bVar10;
  bool bVar11;
  int iStack_44;
  code *pcStack_40;
  undefined1 *puStack_3c;
  uint local_2c [4];
  uint local_1c [4];
  uint *local_c;
  int *local_8;
  
  bVar10 = 0;
  puStack_3c = &stack0xfffffffc;
  puVar8 = local_1c;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)(param_1 + 0x4b) = 1;
  pcStack_40 = thunk_FUN_004036bc;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  uVar3 = local_1c[3] - local_1c[1];
  puVar2 = &stack0xfffffffc;
  local_c = param_3;
  local_8 = param_1;
  if (SBORROW4(local_1c[3],local_1c[1])) {
    uVar3 = thunk_FUN_00402808(uVar3);
    puVar2 = puStack_3c;
  }
  puStack_3c = puVar2;
  puVar8 = local_2c;
  iVar6 = local_8[9];
  piVar1 = (int *)(iVar6 + 0x34);
  iVar7 = local_1c[1] - *piVar1;
  if (SBORROW4(local_1c[1],*piVar1)) {
    thunk_FUN_00402808((uint)local_8);
    iVar7 = extraout_EDX;
  }
  uVar5 = local_1c[0];
  piVar1 = (int *)(iVar6 + 0x30);
  uVar4 = local_1c[0] - *piVar1;
  if (SBORROW4(local_1c[0],*piVar1)) {
    uVar4 = thunk_FUN_00402808(uVar4);
    iVar7 = extraout_EDX_00;
  }
  iVar6 = local_1c[2] - uVar5;
  if (SBORROW4(local_1c[2],uVar5)) {
    uVar4 = thunk_FUN_00402808(uVar4);
    iVar6 = extraout_ECX;
    iVar7 = extraout_EDX_01;
  }
  FUN_0040f804(uVar4,iVar7,iVar6,(int *)puVar8,uVar3);
  puVar8 = local_2c;
  puVar9 = local_1c;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  uVar3 = TGroupBox_set_Caption((int)local_8,local_c);
  bVar11 = SCARRY4(local_1c[3],4);
  local_1c[3] = local_1c[3] + 4;
  if (bVar11) {
    thunk_FUN_00402808(uVar3);
  }
  uVar3 = local_8[0x4d];
  iVar6 = *(int *)(uVar3 + 0x38) + -0x14;
  if (SBORROW4(*(int *)(uVar3 + 0x38),0x14)) {
    uVar3 = thunk_FUN_00402808(uVar3);
    iVar6 = extraout_EDX_02;
  }
  uVar5 = *(int *)(uVar3 + 0x3c) - 0x14;
  if (SBORROW4(*(int *)(uVar3 + 0x3c),0x14)) {
    uVar5 = thunk_FUN_00402808(uVar5);
    iVar6 = extraout_EDX_03;
  }
  if ((int)uVar5 < (int)local_1c[3]) {
    iVar7 = local_1c[3] - uVar5;
    if (SBORROW4(local_1c[3],uVar5)) {
      uVar5 = thunk_FUN_00402808(uVar5);
      iVar7 = extraout_ECX_00;
      iVar6 = extraout_EDX_04;
    }
    bVar11 = SBORROW4(local_1c[1],iVar7);
    local_1c[1] = local_1c[1] - iVar7;
    if (bVar11) {
      uVar5 = thunk_FUN_00402808(uVar5);
      iVar6 = extraout_EDX_05;
    }
    iVar7 = local_1c[3] - uVar5;
    if (SBORROW4(local_1c[3],uVar5)) {
      uVar5 = thunk_FUN_00402808(uVar5);
      iVar7 = extraout_ECX_01;
      iVar6 = extraout_EDX_06;
    }
    bVar11 = SBORROW4(local_1c[3],iVar7);
    local_1c[3] = local_1c[3] - iVar7;
    if (bVar11) {
      thunk_FUN_00402808(uVar5);
      iVar6 = extraout_EDX_07;
    }
  }
  if (iVar6 < (int)local_1c[2]) {
    uVar3 = local_1c[2] - iVar6;
    if (SBORROW4(local_1c[2],iVar6)) {
      uVar3 = thunk_FUN_00402808(uVar3);
      iVar6 = extraout_EDX_08;
    }
    bVar11 = SBORROW4(local_1c[0],uVar3);
    local_1c[0] = local_1c[0] - uVar3;
    if (bVar11) {
      thunk_FUN_00402808(uVar3);
      iVar6 = extraout_EDX_09;
    }
    uVar3 = local_1c[2] - iVar6;
    if (SBORROW4(local_1c[2],iVar6)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    bVar11 = SBORROW4(local_1c[2],uVar3);
    local_1c[2] = local_1c[2] - uVar3;
    if (bVar11) {
      thunk_FUN_00402808(uVar3);
    }
  }
  if ((int)local_1c[0] < 0) {
    local_1c[0] = 0;
  }
  if ((int)local_1c[3] < 0) {
    local_1c[3] = 0;
  }
  iVar6 = local_1c[2] - local_1c[0];
  if (SBORROW4(local_1c[2],local_1c[0])) {
    local_1c[0] = thunk_FUN_00402808(local_1c[0]);
    iVar6 = extraout_ECX_02;
  }
  iVar7 = local_1c[3] - local_1c[1];
  if (SBORROW4(local_1c[3],local_1c[1])) {
    local_1c[0] = thunk_FUN_00402808(local_1c[0]);
    iVar7 = extraout_ECX_03;
    local_1c[1] = extraout_EDX_10;
  }
  (**(code **)(*local_8 + 0x7c))(local_8,local_1c[0],local_1c[1],iVar7,iVar6);
  FUN_00403178(local_8,CONCAT31((int3)((uint)extraout_EDX_11 >> 8),1),extraout_ECX_04);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = iVar7;
  *(undefined1 *)(local_8 + 0x4b) = 0;
  return;
}


