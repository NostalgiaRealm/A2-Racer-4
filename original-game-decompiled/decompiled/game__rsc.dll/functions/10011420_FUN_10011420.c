
/* ==== FUN_10011420 @ 10011420 ==== 
 * signature: undefined __stdcall FUN_10011420(void)
 * body: 10011420-10011493
 */

void FUN_10011420(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_100316b4);
  DAT_100316b0 = (uint)(sVar1 == 3);
  if (DAT_100316b0 == 0) {
    local_8 = _GetPrimaryLen(DAT_100316b4);
  }
  else {
    local_8 = 2;
  }
  DAT_100316ac = local_8;
  EnumSystemLocalesA(FUN_100114a0,1);
  if ((DAT_100316bc & 4) == 0) {
    DAT_100316bc = 0;
  }
  return;
}


