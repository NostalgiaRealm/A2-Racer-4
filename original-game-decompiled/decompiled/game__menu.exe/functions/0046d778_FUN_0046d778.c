
/* ==== FUN_0046d778 @ 0046d778 ==== 
 * signature: undefined4 __register FUN_0046d778(void)
 * body: 0046d778-0046d7a2;0046d7b4-0046d7bc
 */

undefined4 FUN_0046d778(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403408;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))();
  *in_FS_OFFSET = uStack_1c;
  return 0;
}


