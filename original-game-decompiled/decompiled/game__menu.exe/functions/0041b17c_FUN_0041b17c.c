
/* ==== FUN_0041b17c @ 0041b17c ==== 
 * signature: int * __register FUN_0041b17c(int * param_1, char param_2, undefined4 param_3)
 * body: 0041b17c-0041b1f8
 */

int * FUN_0041b17c(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
  param_1[1] = iVar1;
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[2] = iVar1;
  FUN_0041b228((int)param_1,CONCAT22(extraout_var,3),(int)&PTR_TPersistent_vmt_000_00417234);
  FUN_0041b228((int)param_1,CONCAT22(extraout_var_00,0xe),(int)&PTR_TPersistent_vmt_000_00417234);
  FUN_0041b228((int)param_1,CONCAT22(extraout_var_01,2),(int)FUN_004173a4);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


