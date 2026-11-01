
/* ==== FUN_0045ef0c @ 0045ef0c ==== 
 * signature: undefined __register FUN_0045ef0c(int param_1, int param_2, undefined4 param_3)
 * body: 0045ef0c-0045ef82
 */

void FUN_0045ef0c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  int local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  pcStack_28 = (code *)0x45ef28;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_1c = local_8;
  local_18 = 0xb;
  local_10 = 0;
  pcStack_28 = (code *)&stack0xfffffffc;
  local_14 = param_3;
  FUN_00409254((byte *)" %s = %d ",&local_1c,1,&local_c);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_c);
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_0045ef8a;
  pcStack_2c = (code *)0x45ef82;
  FUN_00403c80(&local_c,2);
  return;
}


