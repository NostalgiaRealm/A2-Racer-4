
/* ==== FUN_00420248 @ 00420248 ==== 
 * signature: undefined __register FUN_00420248(void)
 * body: 00420248-0042027e
 */

void FUN_00420248(void)

{
  if (DAT_004ac6b8 == (HMODULE)0x0) {
    DAT_004ac6b8 = GetModuleHandleA("comctl32.dll");
    if (DAT_004ac6b8 != (HMODULE)0x0) {
      DAT_004ac6bc = GetProcAddress(DAT_004ac6b8,"InitCommonControlsEx");
    }
  }
  return;
}


