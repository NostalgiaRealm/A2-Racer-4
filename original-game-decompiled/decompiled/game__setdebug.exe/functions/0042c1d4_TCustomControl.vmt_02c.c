
/* ==== TCustomControl.vmt_02c @ 0042c1d4 ==== 
 * signature: int * __register TCustomControl.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0042c1d4-0042c22e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomControl_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TWinControl_vmt_02c(param_1,'\0',param_3);
  piVar1 = FUN_00416eac((int *)&PTR_TPersistent_vmt_000_00420138,'\x01',extraout_ECX_00);
  param_1[0x7c] = (int)piVar1;
  FUN_00423588(piVar1,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


