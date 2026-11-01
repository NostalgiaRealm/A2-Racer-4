
/* ==== FUN_004013e8 @ 004013e8 ==== 
 * signature: undefined __register FUN_004013e8(int param_1)
 * body: 004013e8-004013ed
 */

void FUN_004013e8(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}


