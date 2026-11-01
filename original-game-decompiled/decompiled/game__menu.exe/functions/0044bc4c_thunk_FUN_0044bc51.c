
/* ==== thunk_FUN_0044bc51 @ 0044bc4c ==== 
 * signature: int __register thunk_FUN_0044bc51(int param_1)
 * body: 0044bc4c-0044bc4d
 * thunk to: FUN_0044bc51
 */

int thunk_FUN_0044bc51(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x89) == '\0')); param_1 = *(int *)(param_1 + 0x24))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}


