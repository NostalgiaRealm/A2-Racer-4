
/* ==== FUN_00410fa8 @ 00410fa8 ==== 
 * signature: int * __register FUN_00410fa8(int * param_1, char param_2, HMODULE param_3, LPCSTR param_4, undefined * param_5)
 * body: 00410fa8-00410ffd
 */

int * FUN_00410fa8(int *param_1,char param_2,HMODULE param_3,LPCSTR param_4,undefined *param_5)

{
  LPCSTR pCVar1;
  HMODULE extraout_ECX;
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
  FUN_00402ce4(param_1,'\0',param_3);
  pCVar1 = FUN_00403dfc(param_5);
  FUN_00411070((int)param_1,param_3,pCVar1,param_4);
  if (cVar2 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


