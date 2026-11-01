
/* ==== entry @ 0040173e ==== 
 * signature: undefined __stdcall entry(void)
 * body: 0040173e-00401828
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
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *local_18;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00406118;
  pcStack_10 = FUN_00402a90;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_00407f5c = DVar1 >> 8 & 0xff;
  _DAT_00407f58 = DVar1 & 0xff;
  _DAT_00407f54 = _DAT_00407f58 * 0x100 + _DAT_00407f5c;
  _DAT_00407f50 = DVar1 >> 0x10;
  iVar2 = FUN_0040295b(0);
  if (iVar2 == 0) {
    FUN_00401859(0x1c);
  }
  local_8 = 0;
  FUN_004027b0();
  DAT_00409464 = GetCommandLineA();
  DAT_00407f90 = FUN_0040267e();
  FUN_00402431();
  FUN_00402378();
  FUN_00401532();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  pbVar3 = FUN_00402320();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  iVar2 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  UVar6 = FUN_00401250(pHVar5,iVar2,pbVar3,uVar4);
  FUN_0040155f(UVar6);
  FUN_0040219c(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


