
/* ==== TCustomPanel.vmt_02c @ 00450648 ==== 
 * signature: int * __register TCustomPanel.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00450648-004506db
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomPanel_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  TCustomControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = 0x8eb;
  TControl_set_Width(param_1,0xb9);
  TControl_set_Height(param_1,0x29);
  *(undefined1 *)((int)param_1 + 0x207) = 2;
  TPanel_set_BevelOuter(param_1,2);
  TPanel_set_BevelWidth(param_1,1);
  *(undefined1 *)(param_1 + 0x81) = 0;
  TGroupBox_set_Color((int)param_1,-0x7ffffff1);
  *(undefined1 *)((int)param_1 + 0x205) = 1;
  TForm_set_UseDockManager(param_1,1,extraout_ECX_00);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


