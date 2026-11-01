
/* ==== FUN_0040f3a0 @ 0040f3a0 ==== 
 * signature: undefined __register FUN_0040f3a0(int param_1, int param_2)
 * body: 0040f3a0-0040f3e2
 */

void FUN_0040f3a0(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x40f3b2;
  FUN_0040f38c(param_1);
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_0040f164(*(int **)(param_1 + 4),param_2);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0040f3ea;
  pcStack_14 = (code *)0x40f3e2;
  FUN_0040f3f0(param_1);
  return;
}


