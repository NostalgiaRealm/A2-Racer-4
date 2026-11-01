
/* ==== FUN_004042cc @ 004042cc ==== 
 * signature: undefined __register FUN_004042cc(undefined4 * param_1, int param_2)
 * body: 004042cc-004042ec
 */

void FUN_004042cc(undefined4 *param_1,int param_2)

{
  BSTR bstrString;
  
  do {
    bstrString = (BSTR)*param_1;
    if (bstrString != (BSTR)0x0) {
      *param_1 = 0;
      SysFreeString(bstrString);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


