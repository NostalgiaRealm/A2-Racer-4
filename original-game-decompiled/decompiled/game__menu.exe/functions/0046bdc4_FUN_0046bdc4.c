
/* ==== FUN_0046bdc4 @ 0046bdc4 ==== 
 * signature: undefined __register FUN_0046bdc4(int param_1, int * param_2)
 * body: 0046bdc4-0046be98;0046beaf-0046bec4
 */

void FUN_0046bdc4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  pcStack_28 = (code *)0x46bdda;
  local_8 = param_2;
  FUN_004058c0(param_2);
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (DAT_004ab06c != '\0') {
    pcStack_38 = thunk_FUN_00403408;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    pcStack_28 = (code *)&stack0xfffffffc;
    iVar1 = (**(code **)(*local_8 + 0x2c))();
    uVar2 = FUN_0046ba74(iVar1,0x46bedc);
    uVar3 = local_14;
    if ((int)local_14 < 0) {
      thunk_FUN_00402808(uVar2);
      uVar3 = extraout_ECX;
    }
    uVar3 = FUN_004028d8(*(undefined4 **)(param_1 + 0x38),local_c,uVar3);
    if (local_10 != (undefined4 *)0x0) {
      if ((int)local_18 < 0) {
        thunk_FUN_00402808(uVar3);
        local_18 = extraout_ECX_00;
      }
      puVar4 = (undefined4 *)(*(uint *)(param_1 + 0x38) + local_14);
      if (CARRY4(*(uint *)(param_1 + 0x38),local_14)) {
        puVar4 = (undefined4 *)thunk_FUN_00402808((uint)puVar4);
        local_18 = extraout_ECX_01;
        local_10 = extraout_EDX;
      }
      FUN_004028d8(puVar4,local_10,local_18);
    }
    iVar1 = (**(code **)(*local_8 + 0x4c))();
    FUN_0046ba74(iVar1,0x46bedc);
    *in_FS_OFFSET = uStack_3c;
  }
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_0046becc;
  pcStack_2c = (code *)0x46bec4;
  FUN_00405860((int *)&local_8);
  return;
}


