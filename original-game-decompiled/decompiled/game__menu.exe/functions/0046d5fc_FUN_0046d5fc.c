
/* ==== FUN_0046d5fc @ 0046d5fc ==== 
 * signature: int * __register FUN_0046d5fc(int * param_1, char param_2, undefined4 param_3)
 * body: 0046d5fc-0046d64f
 */

int * FUN_0046d5fc(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  piVar1 = FUN_0046d73c((int *)&DAT_0046d0e0,'\x01',(int)param_1);
  if (piVar1 != (int *)0x0) {
    piVar1 = piVar1 + 2;
  }
  FUN_00405878(param_1 + 5,piVar1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


