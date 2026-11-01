
/* ==== FUN_00463388 @ 00463388 ==== 
 * signature: undefined __register FUN_00463388(undefined4 param_1, undefined * param_2)
 * body: 00463388-004633cc
 */

void FUN_00463388(undefined4 param_1,undefined *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined *local_8;
  
  pcStack_10 = (code *)0x463398;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_004040a0(local_8);
  xvga_file_exist();
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004633d4;
  pcStack_14 = (code *)0x4633cc;
  FUN_00403c5c((int *)&local_8);
  return;
}


