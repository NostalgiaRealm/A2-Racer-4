
/* ==== thunk_FUN_00445900 @ 004458f0 ==== 
 * signature: undefined __stdcall thunk_FUN_00445900(void)
 * body: 004458f0-004458f4
 * thunk to: FUN_00445900
 */

void thunk_FUN_00445900(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_006ed740;
  iVar2 = 100;
  do {
    FUN_00402d00(puVar1,0x20,6,FUN_0043e110);
    puVar1 = puVar1 + 0x134;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


