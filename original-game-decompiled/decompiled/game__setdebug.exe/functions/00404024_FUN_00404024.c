
/* ==== FUN_00404024 @ 00404024 ==== 
 * signature: BSTR * __register FUN_00404024(BSTR * param_1, OLECHAR * param_2)
 * body: 00403fd0-00403fd6;00404024-00404047
 */

BSTR * FUN_00404024(BSTR *param_1,OLECHAR *param_2)

{
  BSTR bstrString;
  BSTR *ppOVar1;
  
  if ((param_2 != (OLECHAR *)0x0) && (*(uint *)(param_2 + -2) >> 1 != 0)) {
    ppOVar1 = (BSTR *)SysReAllocStringLen(param_1,param_2,*(uint *)(param_2 + -2) >> 1);
    if (ppOVar1 != (BSTR *)0x0) {
      return ppOVar1;
    }
    ppOVar1 = (BSTR *)FUN_00402744(1);
    return ppOVar1;
  }
  bstrString = *param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = (BSTR)0x0;
    SysFreeString(bstrString);
  }
  return param_1;
}


