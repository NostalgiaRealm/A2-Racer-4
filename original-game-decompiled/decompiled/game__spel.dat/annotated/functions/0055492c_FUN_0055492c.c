
/* ==== FUN_0055492c @ 0055492c ==== 
 * signature: int __cdecl FUN_0055492c(int param_1)
 * body: 0055492c-00554951
 */

int __cdecl FUN_0055492c(int param_1)

{
  DAT_0074dbac = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554b79);
  return param_1;
}


