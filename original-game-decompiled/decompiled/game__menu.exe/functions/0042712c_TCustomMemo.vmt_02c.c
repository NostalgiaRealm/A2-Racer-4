
/* ==== TCustomMemo.vmt_02c @ 0042712c ==== 
 * signature: undefined TCustomMemo.vmt_02c(void)
 * body: 0042712c-004271af
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomMemo_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
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
  TCustomEdit_vmt_02c(param_1,'\0',param_3);
  TControl_set_Width(param_1,0xb9);
  TControl_set_Height(param_1,0x59);
  TEdit_set_AutoSize(param_1,'\0');
  *(undefined1 *)((int)param_1 + 0x20e) = 1;
  *(undefined1 *)((int)param_1 + 0x20f) = 1;
  iVar1 = FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_004258f0,'\x01',extraout_ECX_00);
  param_1[0x82] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


