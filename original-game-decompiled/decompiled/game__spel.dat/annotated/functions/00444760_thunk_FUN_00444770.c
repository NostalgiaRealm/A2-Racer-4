
/* ==== thunk_FUN_00444770 @ 00444760 ==== 
 * signature: undefined __stdcall thunk_FUN_00444770(void)
 * body: 00444760-00444764
 * thunk to: FUN_00444770
 */

void thunk_FUN_00444770(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_006ce144;
  iVar2 = 0x14;
  do {
    FUN_00402d00(puVar1,0x20,200,FUN_0043e110);
    puVar1 = puVar1 + 0x1910;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


