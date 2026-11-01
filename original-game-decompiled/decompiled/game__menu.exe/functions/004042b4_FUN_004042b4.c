
/* ==== FUN_004042b4 @ 004042b4 ==== 
 * signature: undefined4 * __register FUN_004042b4(undefined4 * param_1)
 * body: 004042b4-004042c8
 */

undefined4 * FUN_004042b4(undefined4 *param_1)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = 0;
    SysFreeString(bstrString);
  }
  return param_1;
}


