
/* ==== FUN_00480b08 @ 00480b08 ==== 
 * signature: undefined __register FUN_00480b08(int param_1, int * param_2)
 * body: 00480b08-00480b5f
 */

void FUN_00480b08(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_1 < 10) {
    pcStack_14 = (code *)&stack0xfffffffc;
    FUN_004085ac(param_1,(int *)&local_8);
    FUN_00403f28(param_2,(undefined4 *)FUN_00480b74,local_8);
  }
  else {
    FUN_004085ac(param_1,param_2);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00480b67;
  pcStack_18 = (code *)0x480b5f;
  FUN_00403c5c((int *)&local_8);
  return;
}


