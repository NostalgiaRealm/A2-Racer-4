
/* ==== FUN_005579af @ 005579af ==== 
 * signature: int __cdecl FUN_005579af(int param_1)
 * body: 005579af-005579d4
 */

int __cdecl FUN_005579af(int param_1)

{
  DAT_0074dc3c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557c41);
  return param_1;
}


