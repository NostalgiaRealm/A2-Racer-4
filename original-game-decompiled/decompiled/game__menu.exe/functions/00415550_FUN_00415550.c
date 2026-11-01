
/* ==== FUN_00415550 @ 00415550 ==== 
 * signature: undefined __register FUN_00415550(void)
 * body: 00415550-0041556b
 */

void FUN_00415550(void)

{
  if (DAT_004ac64c != (HWND)0x0) {
    DestroyWindow(DAT_004ac64c);
    DAT_004ac64c = (HWND)0x0;
  }
  return;
}


