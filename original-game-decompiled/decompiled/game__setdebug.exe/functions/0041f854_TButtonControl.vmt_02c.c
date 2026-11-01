
/* ==== TButtonControl.vmt_02c @ 0041f854 ==== 
 * signature: int * __register TButtonControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0041f854-0041f8a4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TButtonControl_vmt_02c(int *param_1,char param_2,int *param_3)

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
  TWinControl_vmt_02c(param_1,'\0',param_3);
  if ((PTR_DAT_00446da0[8] != '\0') && (*(int *)PTR_DAT_00446d9c == 2)) {
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


