
/* ==== thunk_FUN_0040c160 @ 0040c150 ==== 
 * signature: undefined __stdcall thunk_FUN_0040c160(void)
 * body: 0040c150-0040c154
 * thunk to: FUN_0040c160
 */

void thunk_FUN_0040c160(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)&DAT_005ce1e8;
  iVar2 = 0x40;
  do {
    FUN_0040d3d0(puVar1);
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


