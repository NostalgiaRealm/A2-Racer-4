
/* ==== FUN_0045fe88 @ 0045fe88 ==== 
 * signature: undefined __register FUN_0045fe88(uint param_1, int param_2)
 * body: 0045fe88-0045fec9
 */

void FUN_0045fe88(uint param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int local_8;
  
  pcStack_10 = (code *)0x45fe9a;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_0045f668(param_1,0x4d,local_8);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0045fed1;
  pcStack_14 = (code *)0x45fec9;
  FUN_00403c5c(&local_8);
  return;
}


