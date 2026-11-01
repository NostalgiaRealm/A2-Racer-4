
/* ==== FUN_0042bcdc @ 0042bcdc ==== 
 * signature: HWND __register FUN_0042bcdc(void)
 * body: 0042bcdc-0042bd01
 */

HWND FUN_0042bcdc(void)

{
  HWND hWnd;
  HWND pHVar1;
  HWND pHVar2;
  int in_stack_00000004;
  
  pHVar2 = (HWND)FUN_004349e0(*(int **)(in_stack_00000004 + -4));
  pHVar1 = pHVar2;
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    pHVar1 = hWnd;
  }
  return pHVar1;
}


