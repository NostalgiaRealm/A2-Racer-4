
/* ==== FUN_100098d0 @ 100098d0 ==== 
 * signature: bool __stdcall FUN_100098d0(void)
 * body: 100098d0-10009928
 */

bool FUN_100098d0(void)

{
  DAT_10031a88 = HeapAlloc(DAT_10031a8c,0,0x140);
  if (DAT_10031a88 != (LPVOID)0x0) {
    DAT_10031a80 = 0;
    DAT_10031a84 = 0;
    DAT_10031a68 = 0x10;
    DAT_10031a7c = DAT_10031a88;
  }
  return DAT_10031a88 != (LPVOID)0x0;
}


