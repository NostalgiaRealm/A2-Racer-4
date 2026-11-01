
/* ==== FUN_00404424 @ 00404424 ==== 
 * signature: undefined __register FUN_00404424(UINT param_1)
 * body: 00404424-00404438
 */

void FUN_00404424(UINT param_1)

{
  BSTR pOVar1;
  
  if (param_1 != 0) {
    pOVar1 = SysAllocStringLen((OLECHAR *)0x0,param_1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402808(1);
      return;
    }
  }
  return;
}


