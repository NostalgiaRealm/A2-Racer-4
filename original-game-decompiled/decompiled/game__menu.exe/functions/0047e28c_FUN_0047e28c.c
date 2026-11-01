
/* ==== FUN_0047e28c @ 0047e28c ==== 
 * signature: undefined __register FUN_0047e28c(int param_1, uint * param_2)
 * body: 0047e28c-0047e2d2
 */

void FUN_0047e28c(int param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  uint *local_8;
  
  pcStack_10 = (code *)0x47e29e;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  TGroupBox_set_Caption(*(int *)(*(int *)(param_1 + 8) + 0x2d4),local_8);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0047e2da;
  pcStack_14 = (code *)0x47e2d2;
  FUN_00403c5c((int *)&local_8);
  return;
}


