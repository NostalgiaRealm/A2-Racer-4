
/* ==== FUN_0044bd60 @ 0044bd60 ==== 
 * signature: undefined __register FUN_0044bd60(undefined4 param_1, undefined4 param_2, DWORD param_3)
 * body: 0044bd60-0044bdd2
 */

void FUN_0044bd60(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  DWORD dwThreadId;
  DWORD DStack_4;
  
  if (*(char *)(DAT_004ac7d4 + 0x95) == '\0') {
    DStack_4 = param_3;
    if (DAT_004ac7f0 == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_004ac7f0 = SetWindowsHookExA(3,FUN_0044bd1c,(HINSTANCE)0x0,dwThreadId);
    }
    if (DAT_004ac7ec == (HANDLE)0x0) {
      DAT_004ac7ec = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    }
    if (DAT_004ac7f4 == (HANDLE)0x0) {
      DAT_004ac7f4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,1000,FUN_0044bcc0,(LPVOID)0x0,0,
                                  &DStack_4);
    }
  }
  return;
}


