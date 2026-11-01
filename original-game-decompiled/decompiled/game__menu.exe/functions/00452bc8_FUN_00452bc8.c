
/* ==== FUN_00452bc8 @ 00452bc8 ==== 
 * signature: int * __register FUN_00452bc8(int * param_1, char param_2, undefined4 param_3)
 * body: 00452bc8-00452c1d
 */

int * FUN_00452bc8(int *param_1,char param_2,undefined4 param_3)

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
  FUN_00453bd8(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 0;
  piVar1 = TObjectList_vmt_008((int *)&PTR_TObjectList_vmt_000_004519c0,'\x01',0);
  param_1[2] = (int)piVar1;
  FUN_00403c5c(param_1 + 3);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


