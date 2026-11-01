
/* ==== TDaviCustomLinkLabel.vmt_02c @ 004771d0 ==== 
 * signature: int * __register TDaviCustomLinkLabel.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004771d0-00477273
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviCustomLinkLabel_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
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
  TCustomLabel_vmt_02c(param_1,'\0',param_3);
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_00);
  param_1[0x4e] = (int)piVar1;
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_01);
  param_1[0x4f] = (int)piVar1;
  TControl_set_Cursor((int)param_1,-0x15);
  TFont_set_Style((int *)param_1[0x16],4);
  TFont_set_Color((int *)param_1[0x16],0xff0000,extraout_ECX_02);
  TFont_set_Style((int *)param_1[0x4e],4);
  TFont_set_Color((int *)param_1[0x4e],0xff,extraout_ECX_03);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


