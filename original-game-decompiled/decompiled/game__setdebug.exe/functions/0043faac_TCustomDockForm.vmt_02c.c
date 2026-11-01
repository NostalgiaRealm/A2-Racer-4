
/* ==== TCustomDockForm.vmt_02c @ 0043faac ==== 
 * signature: undefined TCustomDockForm.vmt_02c(void)
 * body: 0043faac-0043fb12
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomDockForm_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    cVar1 = extraout_DL;
  }
  (**(code **)(*param_1 + 0xcc))(param_1,0);
  TScrollBox_set_AutoScroll((int)param_1,'\0');
  TForm_set_BorderStyle((int)param_1,'\x05');
  TScrollBox_set_DockSite(param_1,'\x01',extraout_ECX);
  TForm_set_FormStyle(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),3),extraout_ECX_00);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = 0;
  }
  return param_1;
}


