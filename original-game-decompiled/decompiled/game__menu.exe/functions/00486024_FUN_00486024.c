
/* ==== FUN_00486024 @ 00486024 ==== 
 * signature: undefined __register FUN_00486024(int param_1, int param_2)
 * body: 00486024-00486075
 */

void FUN_00486024(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TGroupBox_get_Caption(param_2,&local_8);
  iVar1 = local_8;
  iVar2 = FUN_004855fc(param_2);
  (**(code **)(**(int **)(param_1 + 0x210) + 0x20))(*(int **)(param_1 + 0x210),iVar2,iVar1);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0048607d;
  pcStack_18 = (code *)0x486075;
  FUN_00403c5c(&local_8);
  return;
}


