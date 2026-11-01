
/* ==== FUN_0040bac8 @ 0040bac8 ==== 
 * signature: undefined __register FUN_0040bac8(void)
 * body: 0040bac8-0040bafd
 */

void FUN_0040bac8(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_0044612c = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
  }
  if (DAT_0044612c == (FARPROC)0x0) {
    DAT_0044612c = FUN_00407fac;
  }
  return;
}


