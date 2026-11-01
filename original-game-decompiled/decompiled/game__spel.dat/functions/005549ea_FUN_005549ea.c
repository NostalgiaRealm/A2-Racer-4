
/* ==== FUN_005549ea @ 005549ea ==== 
 * signature: int __cdecl FUN_005549ea(int param_1)
 * body: 005549ea-00554a0f
 */

int __cdecl FUN_005549ea(int param_1)

{
  DAT_0074dbc0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554cf0);
  return param_1;
}


