
/* ==== FUN_00439d40 @ 00439d40 ==== 
 * signature: undefined __register FUN_00439d40(HWND param_1)
 * body: 00439d40-00439d65
 */

void FUN_00439d40(HWND param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)GetWindowLongA(param_1,-4);
  DestroyWindow(param_1);
  if (pcVar1 != DefWindowProcA) {
    FUN_00439c68((int)pcVar1);
  }
  return;
}


