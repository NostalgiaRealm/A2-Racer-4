
/* ==== FUN_0042ea0c @ 0042ea0c ==== 
 * signature: undefined __register FUN_0042ea0c(undefined4 param_1, HWND param_2)
 * body: 0042ea0c-0042ea30
 */

void FUN_0042ea0c(undefined4 param_1,HWND param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)FUN_0042e990();
  if (param_2 != pHVar1) {
    if (param_2 == (HWND)0x0) {
      ReleaseCapture();
    }
    else {
      SetCapture(param_2);
    }
  }
  return;
}


