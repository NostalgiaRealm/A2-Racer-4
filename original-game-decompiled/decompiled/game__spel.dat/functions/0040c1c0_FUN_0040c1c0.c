
/* ==== FUN_0040c1c0 @ 0040c1c0 ==== 
 * signature: undefined __stdcall FUN_0040c1c0(void)
 * body: 0040c1c0-0040c1db
 */

void FUN_0040c1c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)&DAT_005ce5e8;
  iVar2 = 0x40;
  do {
    FUN_0040d3d0(puVar1);
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


