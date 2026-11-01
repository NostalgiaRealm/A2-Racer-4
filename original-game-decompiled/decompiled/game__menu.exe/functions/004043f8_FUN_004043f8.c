
/* ==== FUN_004043f8 @ 004043f8 ==== 
 * signature: undefined __register FUN_004043f8(BSTR param_1, LPCSTR param_2)
 * body: 004043f8-00404405
 */

void FUN_004043f8(BSTR param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (LPCSTR)0x0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_00404314(param_1,param_2,iVar1);
  return;
}


