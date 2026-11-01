
/* ==== FUN_0040c7b8 @ 0040c7b8 ==== 
 * signature: undefined __register FUN_0040c7b8(void)
 * body: 0040c7b8-0040c7ed
 */

void FUN_0040c7b8(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004aa13c = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
  }
  if (DAT_004aa13c == (FARPROC)0x0) {
    DAT_004aa13c = FUN_00408ab0;
  }
  return;
}


