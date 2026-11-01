
/* ==== FUN_00444924 @ 00444924 ==== 
 * signature: undefined __register FUN_00444924(void)
 * body: 00444924-00444984
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444924(void)

{
  byte *lpString;
  undefined4 uVar1;
  byte local_30 [32];
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  undefined1 local_4;
  
  _DAT_0044780c = RegisterWindowMessageA("commdlg_help");
  _DAT_00447810 = RegisterWindowMessageA("commdlg_FindReplace");
  uVar1 = 1;
  local_10 = DAT_004474d4;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  lpString = FUN_004086d4(local_30,(byte *)"WndProcPtr%.8X%.8X",&local_10,uVar1);
  DAT_00446998 = GlobalAddAtomA((LPCSTR)lpString);
  return;
}


