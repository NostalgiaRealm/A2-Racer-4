
/* ==== entry @ 00559715 ==== 
 * signature: undefined __stdcall entry(void)
 * body: 00559715-005597ff
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  HMODULE pHVar5;
  UINT UVar6;
  undefined4 uVar7;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *local_18;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00579618;
  pcStack_10 = FUN_0055e3b4;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_0074dc78 = DVar1 >> 8 & 0xff;
  _DAT_0074dc74 = DVar1 & 0xff;
  _DAT_0074dc70 = _DAT_0074dc74 * 0x100 + _DAT_0074dc78;
  _DAT_0074dc6c = DVar1 >> 0x10;
  iVar2 = FUN_00561a56(0);
  if (iVar2 == 0) {
    FUN_00559830(0x1c);
  }
  local_8 = 0;
  FUN_005618ab();
  DAT_00751404 = GetCommandLineA();
  DAT_0074dc50 = FUN_00561779();
  FUN_0056152c();
  FUN_00561473();
  FUN_00559c4c();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  pbVar3 = FUN_0056141b();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar7 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  UVar6 = FUN_00458270(pHVar5,uVar7,pbVar3,uVar4);
  FUN_00559c79(UVar6);
  FUN_00561297(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


