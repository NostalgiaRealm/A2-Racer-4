
/* ==== FUN_004b3180 @ 004b3180 ==== 
 * signature: undefined __fastcall FUN_004b3180(int param_1)
 * body: 004b3180-004b319f
 */

void __fastcall FUN_004b3180(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = (undefined4 *)(param_1 + 0x10);
  do {
    puVar1[1] = 0;
    *puVar1 = 0xffffff;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


