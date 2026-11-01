
/* ==== FUN_00403fd8 @ 00403fd8 ==== 
 * signature: undefined __register FUN_00403fd8(undefined4 * param_1, undefined4 param_2)
 * body: 00403fd8-00403fe6
 */

void FUN_00403fd8(undefined4 *param_1,undefined4 param_2)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  *param_1 = param_2;
  if (bstrString != (BSTR)0x0) {
    SysFreeString(bstrString);
  }
  return;
}


