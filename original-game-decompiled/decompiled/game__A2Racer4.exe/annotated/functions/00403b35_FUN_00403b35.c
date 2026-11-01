
/* ==== FUN_00403b35 @ 00403b35 ==== 
 * signature: undefined4 __stdcall FUN_00403b35(void)
 * body: 00403b35-00403b72
 */

undefined4 FUN_00403b35(void)

{
  DAT_00408104 = HeapAlloc(DAT_00409344,0,0x140);
  if (DAT_00408104 == (LPVOID)0x0) {
    return 0;
  }
  DAT_004080fc = 0;
  DAT_00408100 = 0;
  DAT_004080f8 = DAT_00408104;
  DAT_004080f0 = 0x10;
  return 1;
}


