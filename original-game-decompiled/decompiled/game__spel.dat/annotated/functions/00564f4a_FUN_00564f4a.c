
/* ==== FUN_00564f4a @ 00564f4a ==== 
 * signature: undefined __stdcall FUN_00564f4a(void)
 * body: 00564f4a-00564f9f
 */

void FUN_00564f4a(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_0074dfc4);
  DAT_0074dfc0 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_0074dfbc = 2;
  }
  else {
    DAT_0074dfbc = FUN_00565370(DAT_0074dfc4);
  }
  EnumSystemLocalesA(FUN_00564fa0,1);
  if ((DAT_0074dfcc & 4) == 0) {
    DAT_0074dfcc = 0;
  }
  return;
}


