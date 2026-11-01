
/* ==== FUN_00557917 @ 00557917 ==== 
 * signature: int __cdecl FUN_00557917(int param_1)
 * body: 00557917-0055793c
 */

int __cdecl FUN_00557917(int param_1)

{
  DAT_0074dc2c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x557b15);
  return param_1;
}


