
/* ==== FUN_004517a8 @ 004517a8 ==== 
 * signature: undefined __register FUN_004517a8(void)
 * body: 004517a8-00451808
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004517a8(void)

{
  byte *lpString;
  undefined4 uVar1;
  byte local_30 [32];
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  undefined1 local_4;
  
  _DAT_004ac824 = RegisterWindowMessageA("commdlg_help");
  _DAT_004ac828 = RegisterWindowMessageA("commdlg_FindReplace");
  uVar1 = 1;
  local_10 = DAT_004ac4dc;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  lpString = FUN_004091ec(local_30,(byte *)"WndProcPtr%.8X%.8X",&local_10,uVar1);
  DAT_004aaa80 = GlobalAddAtomA((LPCSTR)lpString);
  return;
}


