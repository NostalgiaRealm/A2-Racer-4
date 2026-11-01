
/* ==== FUN_00554a5c @ 00554a5c ==== 
 * signature: int __cdecl FUN_00554a5c(int param_1)
 * body: 00554a5c-00554a81
 */

int __cdecl FUN_00554a5c(int param_1)

{
  DAT_0074dbcc = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554dd1);
  return param_1;
}


