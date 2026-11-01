
/* ==== thunk_FUN_00417d90 @ 00417d80 ==== 
 * signature: undefined __stdcall thunk_FUN_00417d90(void)
 * body: 00417d80-00417d84
 * thunk to: FUN_00417d90
 */

void thunk_FUN_00417d90(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_005d2b70;
  iVar2 = 5;
  do {
    FUN_00417dd0(puVar1);
    puVar1 = puVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


