
/* ==== FUN_004d6520 @ 004d6520 ==== 
 * signature: int __cdecl FUN_004d6520(int param_1)
 * body: 004d6520-004d6547
 */

int __cdecl FUN_004d6520(int param_1)

{
  DAT_0074b8a0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x4d65b0);
  return param_1;
}


