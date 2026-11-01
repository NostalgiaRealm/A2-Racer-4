
/* ==== FUN_00421d9c @ 00421d9c ==== 
 * signature: HWND __register FUN_00421d9c(void)
 * body: 00421d9c-00421dc1
 */

HWND FUN_00421d9c(void)

{
  HWND hWnd;
  HWND pHVar1;
  HWND pHVar2;
  int in_stack_00000004;
  
  pHVar2 = (HWND)FUN_0042a8b4(*(int **)(in_stack_00000004 + -4));
  pHVar1 = pHVar2;
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    pHVar1 = hWnd;
  }
  return pHVar1;
}


