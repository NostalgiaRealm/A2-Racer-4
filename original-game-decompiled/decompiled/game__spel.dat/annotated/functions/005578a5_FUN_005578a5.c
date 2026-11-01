
/* ==== FUN_005578a5 @ 005578a5 ==== 
 * signature: int __cdecl FUN_005578a5(int param_1)
 * body: 005578a5-005578ca
 */

int __cdecl FUN_005578a5(int param_1)

{
  DAT_0074dc20 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557a34);
  return param_1;
}


