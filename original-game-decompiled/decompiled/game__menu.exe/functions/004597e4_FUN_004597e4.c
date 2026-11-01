
/* ==== FUN_004597e4 @ 004597e4 ==== 
 * signature: undefined __register FUN_004597e4(int param_1, int param_2)
 * body: 004597e4-004598db;004598e3-004598f8
 */

void FUN_004597e4(int param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 uStack_54;
  code *pcStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  code *pcStack_40;
  int local_30 [4];
  int local_20 [4];
  undefined *local_10;
  int *local_c;
  int local_8;
  
  pcStack_40 = (code *)&stack0xfffffffc;
  local_10 = (undefined *)0x0;
  pcStack_44 = thunk_FUN_004036bc;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x459812;
  local_8 = param_2;
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),0,&local_10);
  puStack_4c = (undefined1 *)0x45981a;
  uVar2 = FUN_004087a4(local_10);
  if ((char)uVar2 != '\0') {
    puStack_4c = (undefined1 *)0x45982c;
    local_c = (int *)FUN_004596b4(param_1,local_10);
    puStack_4c = (undefined1 *)0x45983a;
    (**(code **)(*local_c + 0x48))(local_c,local_10);
    pcStack_50 = thunk_FUN_004036bc;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    FUN_00457194(*(int **)(param_1 + 0x10),*(int *)(*(int *)(param_1 + 8) + 0xc),
                 *(int *)(*(int *)(param_1 + 8) + 0x10),0x18);
    iVar3 = local_c[0x23] / *(int *)(*(int *)(param_1 + 8) + 4);
    iVar9 = local_c[0x10];
    piVar7 = local_20;
    uVar1 = (longlong)local_8 * (longlong)iVar3;
    if ((longlong)(int)(uint)uVar1 != uVar1) {
      uVar4 = thunk_FUN_00402808((uint)uVar1);
      uVar1 = (ulonglong)uVar4;
    }
    FUN_0040f804((int)uVar1,0,iVar3,piVar7,iVar9);
    piVar7 = local_20;
    FUN_0040f804(0,0,*(int *)(*(int *)(param_1 + 8) + 0xc),local_30,
                 *(int *)(*(int *)(param_1 + 8) + 0x10));
    piVar8 = local_30;
    piVar5 = (int *)FUN_00456800((int)local_c,extraout_EDX,extraout_ECX);
    piVar6 = (int *)FUN_00456800(*(int *)(param_1 + 0x10),extraout_EDX_00,extraout_ECX_00);
    FUN_00418f14(piVar6,piVar8,piVar5,piVar7);
    *in_FS_OFFSET = uStack_54;
    puStack_4c = (undefined1 *)0x4598e3;
    pcStack_50 = (code *)0x4598db;
    FUN_00402f9c(local_c);
    return;
  }
  *in_FS_OFFSET = uStack_48;
  pcStack_40 = FUN_00459900;
  pcStack_44 = (code *)0x4598f8;
  FUN_00403c5c((int *)&local_10);
  return;
}


