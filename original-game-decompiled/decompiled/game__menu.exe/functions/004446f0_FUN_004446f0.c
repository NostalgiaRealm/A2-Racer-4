
/* ==== FUN_004446f0 @ 004446f0 ==== 
 * signature: undefined __register FUN_004446f0(HWND param_1)
 * body: 004446f0-00444715
 */

void FUN_004446f0(HWND param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)GetWindowLongA(param_1,-4);
  DestroyWindow(param_1);
  if (pcVar1 != DefWindowProcA) {
    FUN_00444618((int)pcVar1);
  }
  return;
}


