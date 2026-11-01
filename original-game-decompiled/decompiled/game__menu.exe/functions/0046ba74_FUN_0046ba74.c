
/* ==== FUN_0046ba74 @ 0046ba74 ==== 
 * signature: undefined __register FUN_0046ba74(int param_1, int param_2)
 * body: 0046ba74-0046baf5
 */

void FUN_0046ba74(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined *puStack_30;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  puStack_18 = (undefined1 *)0x46ba8b;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (param_1 != 0) {
    puStack_18 = &stack0xfffffffc;
    FUN_004085dc(param_1,8,&local_10);
    puStack_30 = &DAT_0046bb18;
    FUN_00403f9c(&local_c,4);
    FUN_00403c40(local_c);
  }
  *in_FS_OFFSET = puStack_30;
  FUN_00403c80(&local_10,3);
  return;
}


