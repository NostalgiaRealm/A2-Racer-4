
/* ==== thunk_FUN_004066f0 @ 004066e0 ==== 
 * signature: undefined __stdcall thunk_FUN_004066f0(void)
 * body: 004066e0-004066e4
 * thunk to: FUN_004066f0
 */

void thunk_FUN_004066f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_005c9b10;
  iVar2 = 600;
  do {
    FUN_004072f0(puVar1);
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


