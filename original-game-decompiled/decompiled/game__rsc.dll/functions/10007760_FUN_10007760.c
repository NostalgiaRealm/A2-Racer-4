
/* ==== FUN_10007760 @ 10007760 ==== 
 * signature: undefined __stdcall FUN_10007760(void)
 * body: 10007760-10007788
 */

void FUN_10007760(void)

{
  FUN_10007350();
  if (DAT_1002ff5c != 0xffffffff) {
    TlsFree(DAT_1002ff5c);
    DAT_1002ff5c = 0xffffffff;
  }
  return;
}


