
/* ==== thunk_FUN_00440cb1 @ 00440cac ==== 
 * signature: int __register thunk_FUN_00440cb1(int param_1)
 * body: 00440cac-00440cad
 * thunk to: FUN_00440cb1
 */

int thunk_FUN_00440cb1(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x89) == '\0')); param_1 = *(int *)(param_1 + 0x24))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}


