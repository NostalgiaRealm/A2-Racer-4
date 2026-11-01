
/* ==== FUN_005549c4 @ 005549c4 ==== 
 * signature: int __cdecl FUN_005549c4(int param_1)
 * body: 005549c4-005549e9
 */

int __cdecl FUN_005549c4(int param_1)

{
  DAT_0074dbbc = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554ca5);
  return param_1;
}


