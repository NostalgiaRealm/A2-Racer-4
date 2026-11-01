
/* ==== TCustomComboBox.vmt_02c @ 0042772c ==== 
 * signature: undefined TCustomComboBox.vmt_02c(void)
 * body: 0042772c-0042781f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomComboBox_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TWinControl_vmt_02c(param_1,'\0',param_3);
  if (*PTR_DAT_004ab7d4 == '\0') {
    param_1[0x10] = 0x42b2;
  }
  else {
    param_1[0x10] = 0x42a2;
  }
  TControl_set_Width(param_1,0x91);
  TControl_set_Height(param_1,0x19);
  TGroupBox_set_TabStop((int)param_1,'\x01');
  TGroupBox_set_ParentColor((int)param_1,'\0');
  iVar1 = FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_004259e4,'\x01',extraout_ECX_00);
  param_1[0x7c] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  piVar2 = FUN_00418b34((int *)&PTR_TPersistent_vmt_000_00429cb8,'\x01',extraout_ECX_01);
  param_1[0x7d] = (int)piVar2;
  param_1[0x7f] = 0x10;
  *(undefined1 *)((int)param_1 + 0x1fa) = 0;
  puVar3 = FUN_00444580();
  param_1[0x84] = (int)puVar3;
  puVar3 = FUN_00444580();
  param_1[0x85] = (int)puVar3;
  param_1[0x81] = 8;
  param_1[0x8a] = -1;
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


