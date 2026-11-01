
/* ==== FUN_00452b24 @ 00452b24 ==== 
 * signature: undefined __register FUN_00452b24(int * param_1, char param_2, undefined4 * param_3, int param_4)
 * body: 00452b24-00452b86
 */

void FUN_00452b24(int *param_1,char param_2,undefined4 *param_3,int param_4)

{
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  code *pcStackY_28;
  code *pcStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 *local_8;
  
  if (param_2 != '\0') {
    pcStackY_24 = (code *)0x452b36;
    local_8 = param_3;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  pcStackY_24 = (code *)0x452b45;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  pcStackY_28 = thunk_FUN_004036bc;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  pcStackY_24 = (code *)&stack0xfffffffc;
  FUN_00453bd8(param_1,'\0',extraout_ECX_00);
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00403cb0(param_1 + 2,local_8);
  param_1[3] = param_4;
  *in_FS_OFFSET = uStackY_2c;
  pcStackY_24 = FUN_00452b8e;
  pcStackY_28 = (code *)0x452b86;
  FUN_00403c5c((int *)&local_8);
  return;
}


