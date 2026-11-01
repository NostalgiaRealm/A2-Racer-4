
/* ==== FUN_004d6550 @ 004d6550 ==== 
 * signature: int __cdecl FUN_004d6550(int param_1)
 * body: 004d6550-004d6577
 */

int __cdecl FUN_004d6550(int param_1)

{
  DAT_0074b8a4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x4d6610);
  return param_1;
}


