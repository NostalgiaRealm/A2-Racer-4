
/* ==== FUN_0041debc @ 0041debc ==== 
 * signature: undefined __register FUN_0041debc(void)
 * body: 0041debc-0041e01c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041debc(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("comctl32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_00447720 = GetProcAddress(hModule,"InitializeFlatSB");
    _DAT_00447724 = GetProcAddress(hModule,"UninitializeFlatSB");
    _DAT_00447718 = GetProcAddress(hModule,"FlatSB_GetScrollProp");
    DAT_0044771c = GetProcAddress(hModule,"FlatSB_SetScrollProp");
    _DAT_004476f4 = GetProcAddress(hModule,"FlatSB_EnableScrollBar");
    if (_DAT_004476f4 == (FARPROC)0x0) {
      _DAT_004476f4 = (FARPROC)&DAT_004065a0;
    }
    _DAT_004476f8 = GetProcAddress(hModule,"FlatSB_ShowScrollBar");
    if (_DAT_004476f8 == (FARPROC)0x0) {
      _DAT_004476f8 = (FARPROC)&DAT_00406910;
    }
    _DAT_004476fc = GetProcAddress(hModule,"FlatSB_GetScrollRange");
    if (_DAT_004476fc == (FARPROC)0x0) {
      _DAT_004476fc = (FARPROC)&DAT_004066d8;
    }
    DAT_00447700 = GetProcAddress(hModule,"FlatSB_GetScrollInfo");
    if (DAT_00447700 == (FARPROC)0x0) {
      DAT_00447700 = (FARPROC)&DAT_004066c8;
    }
    DAT_00447704 = GetProcAddress(hModule,"FlatSB_GetScrollPos");
    if (DAT_00447704 == (FARPROC)0x0) {
      DAT_00447704 = (FARPROC)&DAT_004066d0;
    }
    DAT_00447708 = GetProcAddress(hModule,"FlatSB_SetScrollPos");
    if (DAT_00447708 == (FARPROC)0x0) {
      DAT_00447708 = (FARPROC)&DAT_004068c8;
    }
    DAT_0044770c = GetProcAddress(hModule,"FlatSB_SetScrollInfo");
    if (DAT_0044770c == (FARPROC)0x0) {
      DAT_0044770c = (FARPROC)&DAT_004068c0;
    }
    _DAT_00447710 = GetProcAddress(hModule,"FlatSB_SetScrollRange");
    if (_DAT_00447710 == (FARPROC)0x0) {
      _DAT_00447710 = (FARPROC)&DAT_004068d0;
    }
  }
  return;
}


