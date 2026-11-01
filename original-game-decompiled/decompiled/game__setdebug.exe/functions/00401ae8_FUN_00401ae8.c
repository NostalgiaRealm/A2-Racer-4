
/* ==== FUN_00401ae8 @ 00401ae8 ==== 
 * signature: undefined __register FUN_00401ae8(void)
 * body: 00401ae8-00401bbd;00401bc5-00401bc7
 */

void FUN_00401ae8(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  
  if (DAT_00447428 == '\0') {
    return;
  }
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (DAT_00447041 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  DAT_00447428 = 0;
  LocalFree(DAT_00447488);
  DAT_00447488 = (HLOCAL)0x0;
  for (puVar1 = DAT_00447450; (undefined4 **)puVar1 != &DAT_00447450; puVar1 = (undefined4 *)*puVar1
      ) {
    VirtualFree((LPVOID)puVar1[2],0,0x8000);
  }
  FUN_004013e8(0x447450);
  FUN_004013e8(0x447460);
  FUN_004013e8(0x44748c);
  puVar1 = DAT_00447448;
  while (puVar1 != (undefined4 *)0x0) {
    DAT_00447448 = (undefined4 *)*puVar1;
    LocalFree(puVar1);
    puVar1 = DAT_00447448;
  }
  DAT_00447448 = puVar1;
  *in_FS_OFFSET = uStack_14;
  if (DAT_00447041 != '\0') {
    uStack_14 = 0x401bb3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  uStack_14 = 0x401bbd;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  return;
}


