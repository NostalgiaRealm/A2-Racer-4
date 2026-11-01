
/* ==== FUN_00491790 @ 00491790 ==== 
 * signature: undefined FUN_00491790(void)
 * body: 00491790-00491809
 */

int * FUN_00491790(int *param_1,char param_2,int *param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00491590(param_1,'\0',param_3,param_4,param_7);
  piVar1 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX_01);
  param_1[4] = (int)piVar1;
  (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],param_5);
  (**(code **)(*(int *)param_1[4] + 8))((int *)param_1[4],param_6);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


