
/* ==== FUN_005578f1 @ 005578f1 ==== 
 * signature: int __cdecl FUN_005578f1(int param_1)
 * body: 005578f1-00557916
 */

int __cdecl FUN_005578f1(int param_1)

{
  DAT_0074dc28 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557aca);
  return param_1;
}


