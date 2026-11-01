
/* ==== FUN_0040410c @ 0040410c ==== 
 * signature: undefined __register FUN_0040410c(UINT param_1)
 * body: 0040410c-00404120
 */

void FUN_0040410c(UINT param_1)

{
  BSTR pOVar1;
  
  if (param_1 != 0) {
    pOVar1 = SysAllocStringLen((OLECHAR *)0x0,param_1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402744(1);
      return;
    }
  }
  return;
}


