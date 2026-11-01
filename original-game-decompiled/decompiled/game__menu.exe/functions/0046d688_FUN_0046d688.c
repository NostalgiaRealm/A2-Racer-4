
/* ==== FUN_0046d688 @ 0046d688 ==== 
 * signature: undefined __register FUN_0046d688(int param_1, int * param_2)
 * body: 0046d688-0046d6ef
 */

void FUN_0046d688(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_ffffffe4;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x46d69a;
  local_8 = param_2;
  FUN_004058c0(param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) != 0) {
    in_stack_ffffffe4 = (undefined4 *)0x46d6b5;
    puStack_10 = &stack0xfffffffc;
    FUN_0046d70c(param_1);
  }
  if (local_8 != (int *)0x0) {
    in_stack_ffffffe4 = (undefined4 *)(param_1 + 0x10);
    FUN_0046c2d8(local_8,&DAT_0046d6fc,*(undefined4 *)(param_1 + 0x14),in_stack_ffffffe4);
  }
  FUN_00405878((int *)(param_1 + 0xc),local_8);
  *in_FS_OFFSET = in_stack_ffffffe4;
  pcStack_14 = FUN_0046d6f7;
  uStack_18 = 0x46d6ef;
  FUN_00405860((int *)&local_8);
  return;
}


