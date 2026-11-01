
/* ==== FUN_00454e80 @ 00454e80 ==== 
 * signature: int * __register FUN_00454e80(int * param_1, char param_2, undefined4 param_3)
 * body: 00454e80-00454ecd
 */

int * FUN_00454e80(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
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
  FUN_00402f6c(param_1,'\0',param_3);
  piVar1 = FUN_00410d28((int *)&PTR_TPersistent_vmt_000_0040eccc,'\x01',
                        (int)&PTR_TPersistent_vmt_000_00454d88);
  param_1[1] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


