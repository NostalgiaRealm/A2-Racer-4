
/* ==== FUN_00438bc0 @ 00438bc0 ==== 
 * signature: undefined __register FUN_00438bc0(undefined4 param_1, HWND param_2)
 * body: 00438bc0-00438be4
 */

void FUN_00438bc0(undefined4 param_1,HWND param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)FUN_00438b44();
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


