
/* ==== FUN_004042a4 @ 004042a4 ==== 
 * signature: undefined __register FUN_004042a4(undefined4 * param_1, undefined4 param_2)
 * body: 004042a4-004042b2
 */

void FUN_004042a4(undefined4 *param_1,undefined4 param_2)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  *param_1 = param_2;
  if (bstrString != (BSTR)0x0) {
    SysFreeString(bstrString);
  }
  return;
}


