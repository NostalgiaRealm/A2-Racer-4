
/* ==== FUN_00481178 @ 00481178 ==== 
 * signature: undefined __register FUN_00481178(undefined4 param_1, int * param_2)
 * body: 00481178-004811ce
 */

void FUN_00481178(undefined4 param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004085ac(param_1,&local_8);
  FUN_00403f9c(param_2,4);
  *in_FS_OFFSET = &DAT_00481204;
  FUN_00403c5c(&local_8);
  return;
}


