
/* ==== FUN_005578cb @ 005578cb ==== 
 * signature: int __cdecl FUN_005578cb(int param_1)
 * body: 005578cb-005578f0
 */

int __cdecl FUN_005578cb(int param_1)

{
  DAT_0074dc24 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557a7f);
  return param_1;
}


