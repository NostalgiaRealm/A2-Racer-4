
/* ==== TCustomEdit.vmt_02c @ 004263e8 ==== 
 * signature: int * __register TCustomEdit.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004263e8-00426485
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomEdit_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TWinControl_vmt_02c(param_1,'\0',param_3);
  if (*PTR_DAT_004ab7d4 == '\0') {
    param_1[0x10] = 0x2b8;
  }
  else {
    param_1[0x10] = 0x2a8;
  }
  TControl_set_Width(param_1,0x79);
  TControl_set_Height(param_1,0x19);
  TGroupBox_set_TabStop((int)param_1,'\x01');
  TGroupBox_set_ParentColor((int)param_1,'\0');
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)((int)param_1 + 0x1f7) = 1;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  *(undefined1 *)((int)param_1 + 0x1f9) = 1;
  FUN_00426af8(param_1);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


