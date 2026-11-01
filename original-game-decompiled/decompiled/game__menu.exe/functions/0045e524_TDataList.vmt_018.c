
/* ==== TDataList.vmt_018 @ 0045e524 ==== 
 * signature: int * __register TDataList.vmt_018(int * param_1, char param_2, int param_3)
 * body: 0045e524-0045e572
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDataList_vmt_018(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
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
  TDataObject_vmt_004(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[3] = iVar1;
  param_1[2] = param_3;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


