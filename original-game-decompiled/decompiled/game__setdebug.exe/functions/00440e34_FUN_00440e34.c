
/* ==== FUN_00440e34 @ 00440e34 ==== 
 * signature: undefined __register FUN_00440e34(void)
 * body: 00440e34-00440e8f
 */

void FUN_00440e34(void)

{
  DWORD DVar1;
  
  if (DAT_004477e0 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_004477e0);
  }
  DAT_004477e0 = (HHOOK)0x0;
  if (DAT_004477e4 != (HANDLE)0x0) {
    SetEvent(DAT_004477dc);
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_004477d8) {
      WaitForSingleObject(DAT_004477e4,0xffffffff);
    }
    CloseHandle(DAT_004477e4);
    DAT_004477e4 = (HANDLE)0x0;
  }
  return;
}


