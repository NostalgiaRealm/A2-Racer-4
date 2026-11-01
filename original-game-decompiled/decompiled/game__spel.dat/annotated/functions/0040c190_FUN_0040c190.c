
/* ==== FUN_0040c190 @ 0040c190 ==== 
 * signature: undefined __stdcall FUN_0040c190(void)
 * body: 0040c190-0040c1ab
 */

void FUN_0040c190(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)&DAT_005cdde0;
  iVar2 = 0x40;
  do {
    FUN_0040d3d0(puVar1);
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


