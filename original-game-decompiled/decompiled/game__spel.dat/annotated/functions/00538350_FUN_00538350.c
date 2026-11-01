
/* ==== FUN_00538350 @ 00538350 ==== 
 * signature: undefined __cdecl FUN_00538350(int param_1)
 * body: 00538350-0053838a
 */

void __cdecl FUN_00538350(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 4);
    piVar1 = *(int **)(param_1 + 4);
    while (piVar1 != (int *)0x0) {
      puVar2 = puVar2 + 1;
      if ((piVar1[5] & 0x10000000U) == 0) {
        FUN_005165b0(piVar1);
        FUN_00514ed0(piVar1);
      }
      piVar1 = (int *)*puVar2;
    }
  }
  return;
}


