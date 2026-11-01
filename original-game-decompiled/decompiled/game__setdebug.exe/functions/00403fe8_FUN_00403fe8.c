
/* ==== FUN_00403fe8 @ 00403fe8 ==== 
 * signature: undefined4 * __register FUN_00403fe8(undefined4 * param_1)
 * body: 00403fe8-00403ffc
 */

undefined4 * FUN_00403fe8(undefined4 *param_1)

{
  BSTR bstrString;
  
  bstrString = (BSTR)*param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = 0;
    SysFreeString(bstrString);
  }
  return param_1;
}


