
/* ==== FUN_0056505d @ 0056505d ==== 
 * signature: undefined __stdcall FUN_0056505d(void)
 * body: 0056505d-00565093
 */

void FUN_0056505d(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_0074dfc8);
  DAT_0074dfb8 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_00565094,1);
  if ((DAT_0074dfcc & 4) == 0) {
    DAT_0074dfcc = 0;
  }
  return;
}


