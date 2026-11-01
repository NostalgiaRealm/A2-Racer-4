
/* ==== FUN_004b2ea0 @ 004b2ea0 ==== 
 * signature: undefined __fastcall FUN_004b2ea0(int param_1)
 * body: 004b2ea0-004b2eb4
 */

void __fastcall FUN_004b2ea0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  iVar2 = 2;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


