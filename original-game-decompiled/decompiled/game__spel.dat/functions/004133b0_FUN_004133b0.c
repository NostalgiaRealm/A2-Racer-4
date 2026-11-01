
/* ==== FUN_004133b0 @ 004133b0 ==== 
 * signature: undefined __stdcall FUN_004133b0(void)
 * body: 004133b0-004134d4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004133b0(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  if (0 < DAT_005d2ab0) {
    puVar2 = &DAT_005ceab8;
    do {
      FUN_0040d410(puVar2 + -0x34,0);
      FUN_00417e20(puVar2 + -0x14,iVar3);
      *puVar2 = 0;
      puVar2[-1] = &DAT_005ce1e8;
      FUN_0040e340(puVar2[-0x34],&local_8,&local_4);
      FUN_00412270(iVar3,local_8);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0xa5;
    } while (iVar3 < DAT_005d2ab0);
  }
  FUN_00419a30();
  iVar3 = 6;
  puVar2 = &DAT_005cf960;
  do {
    FUN_0040d410(puVar2,0);
    *puVar2 = 0xffffffff;
    FUN_00417e20(puVar2 + 0x20,iVar3);
    puVar2[0x34] = 1;
    puVar2[0x33] = &DAT_005cdde0;
    puVar2 = puVar2 + 0xa5;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x5d15bd);
  FUN_004079a0();
  FUN_00407810();
  FUN_0040d410(&DAT_005d1850,0x1d);
  DAT_005d1850 = 0xffffffff;
  FUN_00417e20(&DAT_005d18d0,0x12);
  DAT_005d1920 = 2;
  _DAT_005d191c = &DAT_005ce5e8;
  DAT_005d1924 = 0xffffffff;
  puVar1 = FUN_0040ebe0();
  FUN_0040f000(puVar1);
  FUN_00413000();
  FUN_00413250();
  FUN_0041e910();
  FUN_004225a0();
  return;
}


