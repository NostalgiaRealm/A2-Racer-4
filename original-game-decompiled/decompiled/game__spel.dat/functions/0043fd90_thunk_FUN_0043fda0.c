
/* ==== thunk_FUN_0043fda0 @ 0043fd90 ==== 
 * signature: undefined __stdcall thunk_FUN_0043fda0(void)
 * body: 0043fd90-0043fd94
 * thunk to: FUN_0043fda0
 */

void thunk_FUN_0043fda0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_006c9468;
  iVar2 = 10;
  do {
    FUN_00402d00(puVar1,0x20,0x22,FUN_0043e110);
    puVar1 = puVar1 + 0x110;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


