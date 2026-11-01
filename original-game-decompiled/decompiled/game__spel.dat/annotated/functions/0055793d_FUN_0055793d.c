
/* ==== FUN_0055793d @ 0055793d ==== 
 * signature: int __cdecl FUN_0055793d(int param_1)
 * body: 0055793d-00557962
 */

int __cdecl FUN_0055793d(int param_1)

{
  DAT_0074dc30 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557b60);
  return param_1;
}


