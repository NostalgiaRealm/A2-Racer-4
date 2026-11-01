
/* ==== TDataModule.vmt_038 @ 0044a9e4 ==== 
 * signature: undefined TDataModule.vmt_038(void)
 * body: 0044a9e4-0044aa2a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDataModule_vmt_038(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  FUN_0044b270(DAT_004ac7d8,(int)param_1);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


