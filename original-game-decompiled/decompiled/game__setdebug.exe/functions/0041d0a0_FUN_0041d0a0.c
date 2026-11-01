
/* ==== FUN_0041d0a0 @ 0041d0a0 ==== 
 * signature: undefined __register FUN_0041d0a0(int param_1)
 * body: 0041d0a0-0041d0ea;0041d109-0041d116
 */

void FUN_0041d0a0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = *(undefined4 **)(param_1 + 4);
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  puStack_14 = (undefined *)0x41d0bc;
  local_c = local_10;
  local_8 = param_1;
  FUN_0041ced4(param_1);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined4 *)(local_8 + 4) = *local_10;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &DAT_0041d0f2;
  uStack_18 = 0x41d0ea;
  FUN_0041cee0(local_8);
  return;
}


