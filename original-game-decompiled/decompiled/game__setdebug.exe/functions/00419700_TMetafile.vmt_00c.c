
/* ==== TMetafile.vmt_00c @ 00419700 ==== 
 * signature: undefined TMetafile.vmt_00c(void)
 * body: 00419700-00419745
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TMetafile_vmt_00c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
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
  TGraphic_vmt_00c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  (**(code **)(*param_1 + 8))(param_1,0);
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


