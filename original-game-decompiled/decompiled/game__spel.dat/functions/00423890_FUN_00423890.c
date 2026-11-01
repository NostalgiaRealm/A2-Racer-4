
/* ==== FUN_00423890 @ 00423890 ==== 
 * signature: undefined __stdcall FUN_00423890(void)
 * body: 00423890-004238ab
 */

void FUN_00423890(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005d33ec;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  DAT_005d3440 = 1;
  return;
}


