
/* ==== TDaviTimer.vmt_02c @ 0045af48 ==== 
 * signature: int * __register TDaviTimer.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0045af48-0045af95
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviTimer_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
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
  TDaviTimer_set_Interval((int)param_1,1000,extraout_ECX_00);
  TDaviTimer_set_Enabled((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_01);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


