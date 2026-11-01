
/* ==== FUN_100073f0 @ 100073f0 ==== 
 * signature: undefined __cdecl FUN_100073f0(int param_1)
 * body: 100073f0-10007486
 */

void __cdecl FUN_100073f0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_1002fe9c + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_10003710((void *)0x18,2,0x1002cb70,0xe1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100073f0(0x11);
    if (*(int *)(&DAT_1002fe9c + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_100041a0(lpCriticalSection,2);
    }
    FUN_10007490(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + param_1 * 4));
  return;
}


