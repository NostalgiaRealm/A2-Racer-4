
/* ==== thunk_FUN_0043d760 @ 0043d750 ==== 
 * signature: undefined __stdcall thunk_FUN_0043d760(void)
 * body: 0043d750-0043d754
 * thunk to: FUN_0043d760
 */

void thunk_FUN_0043d760(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_006c4248;
  iVar2 = 0x46;
  do {
    FUN_00402d00(puVar1,0x20,6,FUN_0043e110);
    puVar1 = puVar1 + 0x4b;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


