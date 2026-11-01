
/* ==== FUN_0054e9ee @ 0054e9ee ==== 
 * signature: int __cdecl FUN_0054e9ee(int param_1)
 * body: 0054e9ee-0054ea13
 */

int __cdecl FUN_0054e9ee(int param_1)

{
  DAT_0074db1c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x54ea14);
  return param_1;
}


