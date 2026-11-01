
/* ==== TCustomActionList.vmt_02c @ 004397b8 ==== 
 * signature: undefined TCustomActionList.vmt_02c(void)
 * body: 004397b8-0043981f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomActionList_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[9] = iVar1;
  iVar1 = FUN_00402f6c((int *)&DAT_0043a068,'\x01',extraout_ECX_01);
  param_1[10] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_0043991c;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


