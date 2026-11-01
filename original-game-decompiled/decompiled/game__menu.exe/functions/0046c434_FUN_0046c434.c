
/* ==== FUN_0046c434 @ 0046c434 ==== 
 * signature: undefined __register FUN_0046c434(void)
 * body: 0046c434-0046c4a6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c434(void)

{
  HMODULE hModule;
  
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


