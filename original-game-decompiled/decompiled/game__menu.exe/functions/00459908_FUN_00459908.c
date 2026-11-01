
/* ==== FUN_00459908 @ 00459908 ==== 
 * signature: undefined __register FUN_00459908(int param_1, int param_2)
 * body: 00459908-0045998f;00459997-004599ac
 */

void FUN_00459908(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined *local_c;
  int *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_c = (undefined *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_2 < 0) {
    puStack_24 = (undefined1 *)0x459935;
    thunk_FUN_00402808(0);
    pcVar1 = pcStack_18;
  }
  pcStack_18 = pcVar1;
  puStack_24 = (undefined1 *)0x45993d;
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  puStack_24 = (undefined1 *)0x459945;
  uVar2 = FUN_004087a4(local_c);
  if ((char)uVar2 != '\0') {
    puStack_24 = (undefined1 *)0x459953;
    local_8 = (int *)FUN_004596b4(param_1,local_c);
    puStack_24 = (undefined1 *)0x459961;
    (**(code **)(*local_8 + 0x48))(local_8,local_c);
    pcStack_28 = thunk_FUN_004036bc;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int **)(param_1 + 0x10),local_8);
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x459997;
    pcStack_28 = (code *)0x45998f;
    FUN_00402f9c(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_004599b4;
  pcStack_1c = (code *)0x4599ac;
  FUN_00403c5c((int *)&local_c);
  return;
}


