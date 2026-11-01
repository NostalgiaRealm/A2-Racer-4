
/* ==== FUN_00564cbf @ 00564cbf ==== 
 * signature: undefined __stdcall FUN_00564cbf(void)
 * body: 00564cbf-00564d45
 */

void FUN_00564cbf(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_0074dfc4);
  DAT_0074dfc0 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_0074dfc8);
  DAT_0074dfb8 = (uint)(sVar1 == 3);
  DAT_0074dfb4 = 0;
  if (DAT_0074dfc0 == 0) {
    DAT_0074dfbc = FUN_00565370(DAT_0074dfc4);
  }
  else {
    DAT_0074dfbc = 2;
  }
  EnumSystemLocalesA(FUN_00564d46,1);
  if ((((DAT_0074dfcc & 0x100) == 0) || ((DAT_0074dfcc & 0x200) == 0)) || ((DAT_0074dfcc & 7) == 0))
  {
    DAT_0074dfcc = 0;
  }
  return;
}


