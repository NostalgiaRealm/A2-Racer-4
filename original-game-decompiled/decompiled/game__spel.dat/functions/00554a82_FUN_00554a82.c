
/* ==== FUN_00554a82 @ 00554a82 ==== 
 * signature: int __cdecl FUN_00554a82(int param_1)
 * body: 00554a82-00554aa7
 */

int __cdecl FUN_00554a82(int param_1)

{
  DAT_0074dbd0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554e1c);
  return param_1;
}


