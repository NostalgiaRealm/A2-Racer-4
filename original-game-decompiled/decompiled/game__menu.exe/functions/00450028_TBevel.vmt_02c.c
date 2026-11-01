
/* ==== TBevel.vmt_02c @ 00450028 ==== 
 * signature: undefined TBevel.vmt_02c(void)
 * body: 00450028-0045008d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TBevel_vmt_02c(int *param_1,char param_2,int *param_3)

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
  TGraphicControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x800;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x129) = 0;
  TControl_set_Width(param_1,0x32);
  TControl_set_Height(param_1,0x32);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


