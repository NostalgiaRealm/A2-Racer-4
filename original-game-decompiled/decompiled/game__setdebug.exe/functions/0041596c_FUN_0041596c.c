
/* ==== FUN_0041596c @ 0041596c ==== 
 * signature: int * __register FUN_0041596c(int * param_1, char param_2, undefined4 param_3)
 * body: 0041596c-004159a4
 */

int * FUN_0041596c(int *param_1,char param_2,undefined4 param_3)

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
  *(short *)(param_1 + 8) = (short)param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (cVar1 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


