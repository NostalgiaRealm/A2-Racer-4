
/* ==== FUN_00438c4c @ 00438c4c ==== 
 * signature: undefined __register FUN_00438c4c(void)
 * body: 00438c4c-00438db1;00438db9-00438dbc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438c4c(void)

{
  UINT uMode;
  HMODULE hModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  if (PTR_DAT_004aba14[8] != '\0') {
    uMode = SetErrorMode(0x8000);
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_004ac790 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("USER32");
      DAT_004ac790 = GetProcAddress(hModule,"WINNLSEnableIME");
    }
    if (DAT_004aa818 == (HMODULE)0x0) {
      DAT_004aa818 = LoadLibraryA("IMM32.DLL");
      if (DAT_004aa818 != (HMODULE)0x0) {
        DAT_004ac794 = GetProcAddress(DAT_004aa818,"ImmGetContext");
        DAT_004ac798 = GetProcAddress(DAT_004aa818,"ImmReleaseContext");
        DAT_004ac79c = GetProcAddress(DAT_004aa818,"ImmGetConversionStatus");
        DAT_004ac7a0 = GetProcAddress(DAT_004aa818,"ImmSetConversionStatus");
        DAT_004ac7a4 = GetProcAddress(DAT_004aa818,"ImmSetOpenStatus");
        _DAT_004ac7a8 = GetProcAddress(DAT_004aa818,"ImmSetCompositionWindow");
        _DAT_004ac7ac = GetProcAddress(DAT_004aa818,"ImmSetCompositionFontA");
        _DAT_004ac7b0 = GetProcAddress(DAT_004aa818,"ImmGetCompositionStringA");
        DAT_004ac7b4 = GetProcAddress(DAT_004aa818,"ImmIsIME");
        _DAT_004ac7b8 = GetProcAddress(DAT_004aa818,"ImmNotifyIME");
      }
    }
    *in_FS_OFFSET = uStack_18;
    uStack_18 = 0x438db1;
    SetErrorMode(uMode);
    return;
  }
  return;
}


