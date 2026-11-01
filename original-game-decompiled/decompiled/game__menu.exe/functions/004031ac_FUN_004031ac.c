
/* ==== FUN_004031ac @ 004031ac ==== 
 * signature: undefined4 __register FUN_004031ac(int param_1, int param_2)
 * body: 004031aa-004031ba
 */

undefined4 FUN_004031ac(int param_1,int param_2)

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


