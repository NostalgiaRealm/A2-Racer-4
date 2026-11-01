
/* ==== FUN_00445900 @ 00445900 ==== 
 * signature: undefined __stdcall FUN_00445900(void)
 * body: 00445900-00445926
 */

void FUN_00445900(void)

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


