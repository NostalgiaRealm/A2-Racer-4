
/* ==== FUN_0056201c @ 0056201c ==== 
 * signature: undefined4 __stdcall FUN_0056201c(void)
 * body: 0056201c-00562059
 */

undefined4 FUN_0056201c(void)

{
  DAT_00750088 = HeapAlloc(DAT_0075008c,0,0x140);
  if (DAT_00750088 == (LPVOID)0x0) {
    return 0;
  }
  DAT_00750080 = 0;
  DAT_00750084 = 0;
  DAT_0075007c = DAT_00750088;
  DAT_00750074 = 0x10;
  return 1;
}


