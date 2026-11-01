
/* ==== FUN_0043b065 @ 0043b065 ==== 
 * signature: undefined __cdecl FUN_0043b065(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 0043b065-0043b0ae
 */

void __cdecl FUN_0043b065(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_2 + 2);
  iVar2 = 0x100;
  do {
    puVar1[-2] = (char)param_3;
    puVar1[-1] = (char)((uint)param_3 >> 8);
    *puVar1 = (char)((uint)param_3 >> 0x10);
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


