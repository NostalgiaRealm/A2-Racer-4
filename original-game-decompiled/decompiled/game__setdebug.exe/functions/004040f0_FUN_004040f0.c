
/* ==== FUN_004040f0 @ 004040f0 ==== 
 * signature: undefined __register FUN_004040f0(BSTR param_1, LPCSTR param_2)
 * body: 004040f0-004040fd
 */

void FUN_004040f0(BSTR param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (LPCSTR)0x0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_00404048(param_1,param_2,iVar1);
  return;
}


