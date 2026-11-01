
/* ==== FUN_0042ea98 @ 0042ea98 ==== 
 * signature: undefined __register FUN_0042ea98(void)
 * body: 0042ea98-0042ebfd;0042ec05-0042ec08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ea98(void)

{
  UINT uMode;
  HMODULE hModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  if (PTR_DAT_00446da0[8] != '\0') {
    uMode = SetErrorMode(0x8000);
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_00447780 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("USER32");
      DAT_00447780 = GetProcAddress(hModule,"WINNLSEnableIME");
    }
    if (DAT_00446744 == (HMODULE)0x0) {
      DAT_00446744 = LoadLibraryA("IMM32.DLL");
      if (DAT_00446744 != (HMODULE)0x0) {
        DAT_00447784 = GetProcAddress(DAT_00446744,"ImmGetContext");
        DAT_00447788 = GetProcAddress(DAT_00446744,"ImmReleaseContext");
        DAT_0044778c = GetProcAddress(DAT_00446744,"ImmGetConversionStatus");
        DAT_00447790 = GetProcAddress(DAT_00446744,"ImmSetConversionStatus");
        DAT_00447794 = GetProcAddress(DAT_00446744,"ImmSetOpenStatus");
        _DAT_00447798 = GetProcAddress(DAT_00446744,"ImmSetCompositionWindow");
        _DAT_0044779c = GetProcAddress(DAT_00446744,"ImmSetCompositionFontA");
        _DAT_004477a0 = GetProcAddress(DAT_00446744,"ImmGetCompositionStringA");
        DAT_004477a4 = GetProcAddress(DAT_00446744,"ImmIsIME");
        _DAT_004477a8 = GetProcAddress(DAT_00446744,"ImmNotifyIME");
      }
    }
    *in_FS_OFFSET = uStack_18;
    uStack_18 = 0x42ebfd;
    SetErrorMode(uMode);
    return;
  }
  return;
}


