
/* ==== THintWindow.vmt_02c @ 0042ba54 ==== 
 * signature: int * __register THintWindow.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0042ba54-0042bab9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * THintWindow_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomControl_vmt_02c(param_1,'\0',param_3);
  TLabel_set_Color((int)param_1,0x80ffff);
  TCanvas_set_Font(param_1[0x7c]);
  TBrush_set_Style(*(int **)(param_1[0x7c] + 0x14),'\x01');
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


