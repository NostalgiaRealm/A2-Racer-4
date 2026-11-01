
/* ==== FUN_0046c424 @ 0046c424 ==== 
 * signature: undefined FUN_0046c424(void)
 * body: 0046c424-0046c433
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c424(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  HMODULE hModule;
  
  pcVar1 = (char *)(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(0x9c,(char)param_2 - *param_1))
                   + 0x71d3400);
  *pcVar1 = *pcVar1 + (char)((uint)param_3 >> 8);
  hModule = GetModuleHandleA("ole32.dll");
  if (hModule != (HMODULE)0x0) {
    _DAT_004ab070 = GetProcAddress(hModule,"CoCreateInstanceEx");
    DAT_004ab074 = GetProcAddress(hModule,"CoInitializeEx");
    _DAT_004ab078 = GetProcAddress(hModule,"CoAddRefServerProcess");
    _DAT_004ab07c = GetProcAddress(hModule,"CoReleaseServerProcess");
    _DAT_004ab080 = GetProcAddress(hModule,"CoResumeClassObjects");
    _DAT_004ab084 = GetProcAddress(hModule,"CoSuspendClassObjects");
  }
  return;
}


