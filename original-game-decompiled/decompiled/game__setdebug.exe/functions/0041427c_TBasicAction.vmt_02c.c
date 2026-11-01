
/* ==== TBasicAction.vmt_02c @ 0041427c ==== 
 * signature: int * __register TBasicAction.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0041427c-004142bf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TBasicAction_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[0x10] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


