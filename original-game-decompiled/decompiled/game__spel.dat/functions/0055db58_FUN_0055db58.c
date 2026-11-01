
/* ==== FUN_0055db58 @ 0055db58 ==== 
 * signature: undefined __stdcall FUN_0055db58(void)
 * body: 0055db58-0055db80
 */

void FUN_0055db58(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_0055db1a();
  return;
}


