
/* ==== TDIB.vmt_00c @ 00455fa4 ==== 
 * signature: int * __register TDIB.vmt_00c(int * param_1, char param_2, undefined4 param_3)
 * body: 00455fa4-00455fea
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDIB_vmt_00c(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar1 = TGraphic_vmt_00c(param_1,'\0',param_3);
  piVar1 = FUN_00455f74(piVar1,extraout_EDX,extraout_ECX_00);
  FUN_00457048((int)param_1,(int)piVar1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


