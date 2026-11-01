
/* ==== FUN_0044bdd4 @ 0044bdd4 ==== 
 * signature: undefined __register FUN_0044bdd4(void)
 * body: 0044bdd4-0044be2f
 */

void FUN_0044bdd4(void)

{
  DWORD DVar1;
  
  if (DAT_004ac7f0 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_004ac7f0);
  }
  DAT_004ac7f0 = (HHOOK)0x0;
  if (DAT_004ac7f4 != (HANDLE)0x0) {
    SetEvent(DAT_004ac7ec);
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_004ac7e8) {
      WaitForSingleObject(DAT_004ac7f4,0xffffffff);
    }
    CloseHandle(DAT_004ac7f4);
    DAT_004ac7f4 = (HANDLE)0x0;
  }
  return;
}


