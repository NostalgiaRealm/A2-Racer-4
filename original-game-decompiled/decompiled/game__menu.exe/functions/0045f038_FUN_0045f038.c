
/* ==== FUN_0045f038 @ 0045f038 ==== 
 * signature: undefined __register FUN_0045f038(int param_1, int param_2, char param_3)
 * body: 0045f038-0045f0d4
 */

void FUN_0045f038(int param_1,int param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  pcStack_2c = (code *)0x45f057;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (param_3 == '\0') {
    pcStack_2c = (code *)&stack0xfffffffc;
    FUN_00403cf4(&local_c,0x45f0fc);
  }
  else {
    pcStack_2c = (code *)&stack0xfffffffc;
    FUN_00403cf4(&local_c,0x45f0ec);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_18 = local_c;
  local_14 = 0xb;
  FUN_00409254((byte *)" %s = %s ",&local_20,1,&local_10);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_10);
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_0045f0dc;
  pcStack_30 = (code *)0x45f0d4;
  FUN_00403c80(&local_10,3);
  return;
}


