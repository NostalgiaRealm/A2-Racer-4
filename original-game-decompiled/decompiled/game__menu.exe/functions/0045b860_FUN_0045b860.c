
/* ==== FUN_0045b860 @ 0045b860 ==== 
 * signature: int * __register FUN_0045b860(int * param_1, char param_2, HGLOBAL param_3)
 * body: 0045b860-0045b8bf
 */

int * FUN_0045b860(int *param_1,char param_2,HGLOBAL param_3)

{
  SIZE_T SVar1;
  LPVOID pvVar2;
  HGLOBAL extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  param_1[5] = (int)param_3;
  SVar1 = GlobalSize(param_3);
  if ((int)SVar1 < 0) {
    SVar1 = thunk_FUN_00402808(SVar1);
  }
  pvVar2 = GlobalLock(param_3);
  FUN_0041298c((int)param_1,pvVar2,SVar1);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


