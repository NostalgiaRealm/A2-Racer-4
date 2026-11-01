
/* ==== FUN_00420dcc @ 00420dcc ==== 
 * signature: undefined __register FUN_00420dcc(void)
 * body: 00420dcc-00420f2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420dcc(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("comctl32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004ac730 = GetProcAddress(hModule,"InitializeFlatSB");
    _DAT_004ac734 = GetProcAddress(hModule,"UninitializeFlatSB");
    _DAT_004ac728 = GetProcAddress(hModule,"FlatSB_GetScrollProp");
    DAT_004ac72c = GetProcAddress(hModule,"FlatSB_SetScrollProp");
    _DAT_004ac704 = GetProcAddress(hModule,"FlatSB_EnableScrollBar");
    if (_DAT_004ac704 == (FARPROC)0x0) {
      _DAT_004ac704 = (FARPROC)&DAT_00406c50;
    }
    _DAT_004ac708 = GetProcAddress(hModule,"FlatSB_ShowScrollBar");
    if (_DAT_004ac708 == (FARPROC)0x0) {
      _DAT_004ac708 = (FARPROC)&DAT_00407010;
    }
    _DAT_004ac70c = GetProcAddress(hModule,"FlatSB_GetScrollRange");
    if (_DAT_004ac70c == (FARPROC)0x0) {
      _DAT_004ac70c = (FARPROC)&DAT_00406da0;
    }
    DAT_004ac710 = GetProcAddress(hModule,"FlatSB_GetScrollInfo");
    if (DAT_004ac710 == (FARPROC)0x0) {
      DAT_004ac710 = (FARPROC)&DAT_00406d90;
    }
    DAT_004ac714 = GetProcAddress(hModule,"FlatSB_GetScrollPos");
    if (DAT_004ac714 == (FARPROC)0x0) {
      DAT_004ac714 = (FARPROC)&DAT_00406d98;
    }
    DAT_004ac718 = GetProcAddress(hModule,"FlatSB_SetScrollPos");
    if (DAT_004ac718 == (FARPROC)0x0) {
      DAT_004ac718 = (FARPROC)&DAT_00406fb8;
    }
    DAT_004ac71c = GetProcAddress(hModule,"FlatSB_SetScrollInfo");
    if (DAT_004ac71c == (FARPROC)0x0) {
      DAT_004ac71c = (FARPROC)&DAT_00406fb0;
    }
    _DAT_004ac720 = GetProcAddress(hModule,"FlatSB_SetScrollRange");
    if (_DAT_004ac720 == (FARPROC)0x0) {
      _DAT_004ac720 = (FARPROC)&DAT_00406fc0;
    }
  }
  return;
}


