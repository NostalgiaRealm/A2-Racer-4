
/* ==== thunk_FUN_004404d6 @ 004404d0 ==== 
 * signature: undefined __register thunk_FUN_004404d6(int param_1, int param_2)
 * body: 004404d0-004404d1
 * thunk to: FUN_004404d6
 */

void thunk_FUN_004404d6(int param_1,int param_2)

{
  for (; (0 < param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0x58)) {
    param_2 = param_2 + -1;
  }
  return;
}


