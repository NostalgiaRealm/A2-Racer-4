
/* ==== TCustomTabControl.vmt_02c @ 004847f4 ==== 
 * signature: int * __register TCustomTabControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004847f4-004848ac
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomTabControl_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TWinControl_vmt_02c(param_1,'\0',param_3);
  TControl_set_Width(param_1,0x121);
  TControl_set_Height(param_1,0xc1);
  TGroupBox_set_TabStop((int)param_1,'\x01');
  param_1[0x10] = 0x81;
  iVar1 = FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_004841d4,'\x01',extraout_ECX_00);
  param_1[0x84] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  piVar2 = FUN_00418b34((int *)&PTR_TPersistent_vmt_000_00429cb8,'\x01',extraout_ECX_01);
  param_1[0x7c] = (int)piVar2;
  FUN_0042d4c8(piVar2,(int)param_1);
  iVar1 = FUN_00402f6c((int *)&DAT_0043a068,'\x01',extraout_ECX_02);
  param_1[0x7e] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_00484c58;
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


