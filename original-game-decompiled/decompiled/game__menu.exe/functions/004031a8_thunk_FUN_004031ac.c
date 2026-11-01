
/* ==== thunk_FUN_004031ac @ 004031a8 ==== 
 * signature: undefined4 __register thunk_FUN_004031ac(int param_1, int param_2)
 * body: 004031a8-004031a9
 * thunk to: FUN_004031ac
 */

undefined4 thunk_FUN_004031ac(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x24);
  }
  return 0;
}


