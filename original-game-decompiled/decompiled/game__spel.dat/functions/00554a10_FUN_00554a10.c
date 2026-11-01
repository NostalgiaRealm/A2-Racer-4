
/* ==== FUN_00554a10 @ 00554a10 ==== 
 * signature: int __cdecl FUN_00554a10(int param_1)
 * body: 00554a10-00554a35
 */

int __cdecl FUN_00554a10(int param_1)

{
  DAT_0074dbc4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554d3b);
  return param_1;
}


