
/* ==== FUN_00492404 @ 00492404 ==== 
 * signature: undefined __register FUN_00492404(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 00492404-0049244e
 */

void FUN_00492404(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  uint *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(int *)(param_1 + 0xc) = param_2;
  FUN_0049238c(param_2,(int *)&local_8,param_3,param_4);
  TGroupBox_set_Caption(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00492456;
  pcStack_18 = (code *)0x49244e;
  FUN_00403c5c((int *)&local_8);
  return;
}


