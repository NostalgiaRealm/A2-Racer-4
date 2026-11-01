
/* ==== FUN_00494a40 @ 00494a40 ==== 
 * signature: undefined __register FUN_00494a40(int param_1, undefined4 * param_2)
 * body: 00494a40-00494a83
 */

void FUN_00494a40(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *local_8;
  
  pcStack_10 = (code *)0x494a52;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_00403cb0((int *)(param_1 + 0x2fc),local_8);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00494a8b;
  pcStack_14 = (code *)0x494a83;
  FUN_00403c5c((int *)&local_8);
  return;
}


