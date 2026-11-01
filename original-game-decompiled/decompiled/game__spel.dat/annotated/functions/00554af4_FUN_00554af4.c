
/* ==== FUN_00554af4 @ 00554af4 ==== 
 * signature: int __cdecl FUN_00554af4(int param_1)
 * body: 00554af4-00554b19
 */

int __cdecl FUN_00554af4(int param_1)

{
  DAT_0074dbdc = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554efd);
  return param_1;
}


