
/* ==== FUN_00440dc0 @ 00440dc0 ==== 
 * signature: undefined __register FUN_00440dc0(undefined4 param_1, undefined4 param_2, DWORD param_3)
 * body: 00440dc0-00440e32
 */

void FUN_00440dc0(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  DWORD dwThreadId;
  DWORD DStack_4;
  
  if (*(char *)(DAT_004477c4 + 0x95) == '\0') {
    DStack_4 = param_3;
    if (DAT_004477e0 == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_004477e0 = SetWindowsHookExA(3,FUN_00440d7c,(HINSTANCE)0x0,dwThreadId);
    }
    if (DAT_004477dc == (HANDLE)0x0) {
      DAT_004477dc = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    }
    if (DAT_004477e4 == (HANDLE)0x0) {
      DAT_004477e4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,1000,FUN_00440d20,(LPVOID)0x0,0,
                                  &DStack_4);
    }
  }
  return;
}


