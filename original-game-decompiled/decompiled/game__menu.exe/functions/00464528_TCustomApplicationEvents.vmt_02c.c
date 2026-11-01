
/* ==== TCustomApplicationEvents.vmt_02c @ 00464528 ==== 
 * signature: int * __register TCustomApplicationEvents.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00464528-00464568
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomApplicationEvents_vmt_02c(int *param_1,char param_2,int *param_3)

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
  TComponent_vmt_02c(param_1,'\0',param_3);
  FUN_00464698(DAT_004ab02c,(int)param_1);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


