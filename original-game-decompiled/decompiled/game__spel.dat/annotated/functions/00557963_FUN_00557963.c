
/* ==== FUN_00557963 @ 00557963 ==== 
 * signature: int __cdecl FUN_00557963(int param_1)
 * body: 00557963-00557988
 */

int __cdecl FUN_00557963(int param_1)

{
  DAT_0074dc34 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557bab);
  return param_1;
}


