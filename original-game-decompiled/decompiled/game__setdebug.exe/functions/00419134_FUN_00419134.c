
/* ==== FUN_00419134 @ 00419134 ==== 
 * signature: undefined __register FUN_00419134(int param_1, uint param_2, int param_3)
 * body: 00419134-00419177;00419195-0041919b
 */

void FUN_00419134(int param_1,uint param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41914f;
  FUN_0040eec8(*(int **)(param_1 + 4),param_3);
  pcStack_20 = thunk_FUN_00403180;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0040eec8(*(int **)(param_1 + 8),param_2 & 0xffff);
  *in_FS_OFFSET = uStack_24;
  return;
}


