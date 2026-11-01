
/* ==== FUN_0045ee68 @ 0045ee68 ==== 
 * signature: undefined __register FUN_0045ee68(int param_1, int param_2, int param_3)
 * body: 0045ee68-0045eee9
 */

void FUN_0045ee68(int param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  pcStack_28 = (code *)0x45ee84;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404090(param_2);
  pcStack_28 = (code *)0x45ee8c;
  FUN_00404090(local_c);
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_20 = local_8;
  local_1c = 0xb;
  local_18 = local_c;
  local_14 = 0xb;
  pcStack_28 = (code *)&stack0xfffffffc;
  FUN_00409254((byte *)" %s = %s ",&local_20,1,&local_10);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_10);
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_0045eef1;
  pcStack_2c = (code *)0x45eee9;
  FUN_00403c80(&local_10,3);
  return;
}


