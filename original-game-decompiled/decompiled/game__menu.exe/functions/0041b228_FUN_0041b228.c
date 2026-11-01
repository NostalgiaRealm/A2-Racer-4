
/* ==== FUN_0041b228 @ 0041b228 ==== 
 * signature: undefined __register FUN_0041b228(int param_1, uint param_2, int param_3)
 * body: 0041b228-0041b26b;0041b289-0041b28f
 */

void FUN_0041b228(int param_1,uint param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41b243;
  FUN_00410104(*(int **)(param_1 + 4),param_3);
  pcStack_20 = thunk_FUN_00403408;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00410104(*(int **)(param_1 + 8),param_2 & 0xffff);
  *in_FS_OFFSET = uStack_24;
  return;
}


