
/* ==== thunk_FUN_00446370 @ 00446360 ==== 
 * signature: undefined __stdcall thunk_FUN_00446370(void)
 * body: 00446360-00446364
 * thunk to: FUN_00446370
 */

void thunk_FUN_00446370(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_006f50d0;
  iVar2 = 0x46;
  do {
    FUN_00402d00(puVar1,0x20,6,FUN_0043e110);
    puVar1 = puVar1 + 300;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


