
/* ==== FUN_00554a36 @ 00554a36 ==== 
 * signature: int __cdecl FUN_00554a36(int param_1)
 * body: 00554a36-00554a5b
 */

int __cdecl FUN_00554a36(int param_1)

{
  DAT_0074dbc8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554d86);
  return param_1;
}


