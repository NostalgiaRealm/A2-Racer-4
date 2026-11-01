
/* ==== FUN_004014ac @ 004014ac ==== 
 * signature: undefined __register FUN_004014ac(int param_1)
 * body: 004014ac-004014b1
 */

void FUN_004014ac(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}


