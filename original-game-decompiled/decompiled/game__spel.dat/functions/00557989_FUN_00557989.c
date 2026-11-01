
/* ==== FUN_00557989 @ 00557989 ==== 
 * signature: int __cdecl FUN_00557989(int param_1)
 * body: 00557989-005579ae
 */

int __cdecl FUN_00557989(int param_1)

{
  DAT_0074dc38 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557bf6);
  return param_1;
}


