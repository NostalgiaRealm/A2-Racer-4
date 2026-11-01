
/* ==== FUN_00410764 @ 00410764 ==== 
 * signature: undefined __register FUN_00410764(int param_1, int param_2)
 * body: 00410764-004107a6
 */

void FUN_00410764(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x410776;
  FUN_00410750(param_1);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_00410448(*(int **)(param_1 + 4),param_2);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004107ae;
  pcStack_14 = (code *)0x4107a6;
  FUN_004107b4(param_1);
  return;
}


