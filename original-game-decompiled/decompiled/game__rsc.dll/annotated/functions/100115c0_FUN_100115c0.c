
/* ==== FUN_100115c0 @ 100115c0 ==== 
 * signature: undefined __stdcall FUN_100115c0(void)
 * body: 100115c0-10011604
 */

void FUN_100115c0(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_100316b8);
  DAT_100316a8 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_10011610,1);
  if ((DAT_100316bc & 4) == 0) {
    DAT_100316bc = 0;
  }
  return;
}


