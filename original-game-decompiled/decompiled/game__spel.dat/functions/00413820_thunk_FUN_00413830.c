
/* ==== thunk_FUN_00413830 @ 00413820 ==== 
 * signature: undefined __stdcall thunk_FUN_00413830(void)
 * body: 00413820-00413824
 * thunk to: FUN_00413830
 */

void thunk_FUN_00413830(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)&DAT_005d29b8;
  iVar2 = 0xf;
  do {
    FUN_0040d3d0(puVar1);
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


