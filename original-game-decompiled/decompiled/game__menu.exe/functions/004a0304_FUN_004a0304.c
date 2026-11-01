
/* ==== FUN_004a0304 @ 004a0304 ==== 
 * signature: undefined __register FUN_004a0304(int param_1)
 * body: 004a0304-004a03a3
 */

void FUN_004a0304(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 local_10;
  undefined1 local_c;
  uint *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),
                       *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14));
  TGroupBox_set_Caption(*(int *)(param_1 + 0x2f8),*(uint **)(iVar1 + 0x38));
  local_10 = *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x2c) + 8);
  local_c = 0;
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x24),&local_10,0,(int *)&local_8);
  TGroupBox_set_Caption(*(int *)(param_1 + 0x2fc),local_8);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_004a03ab;
  pcStack_1c = (code *)0x4a03a3;
  FUN_00403c5c((int *)&local_8);
  return;
}


