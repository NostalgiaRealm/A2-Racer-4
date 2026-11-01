
/* ==== TDaviButton.vmt_02c @ 004761f4 ==== 
 * signature: undefined TDaviButton.vmt_02c(void)
 * body: 004761f4-004762aa
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviButton_vmt_02c(int *param_1,char param_2,int *param_3)

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
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TButton_vmt_02c(param_1,'\0',param_3);
  piVar2 = FUN_00474544((int *)&DAT_00474300,'\x01',extraout_ECX_00);
  param_1[0x81] = (int)piVar2;
  iVar1 = param_1[0x81];
  *(int **)(iVar1 + 0x2c) = param_1;
  *(code **)(iVar1 + 0x28) = FUN_004766f8;
  piVar2 = FUN_00418b34((int *)&PTR_TPersistent_vmt_000_00416dc0,'\x01',extraout_ECX_01);
  param_1[0x80] = (int)piVar2;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0x209) = 0;
  TFont_set_Color((int *)param_1[0x16],-0x7fffffee,extraout_ECX_02);
  param_1[0x85] = 4;
  param_1[0x83] = 4;
  TControl_set_Width(param_1,0x68);
  TControl_set_Height(param_1,0x18);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


