
/* ==== FUN_005613d8 @ 005613d8 ==== 
 * signature: int * __cdecl FUN_005613d8(int param_1)
 * body: 005613d8-0056141a
 */

int * __cdecl FUN_005613d8(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_005c8a40;
  if (DAT_005c8a40 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_005c8a40 + DAT_005c8ac0 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_005c8a40 + DAT_005c8ac0 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


