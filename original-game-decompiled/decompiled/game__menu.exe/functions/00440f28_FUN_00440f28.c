
/* ==== FUN_00440f28 @ 00440f28 ==== 
 * signature: undefined __register FUN_00440f28(int param_1, int param_2)
 * body: 00440f28-00440f42
 */

void FUN_00440f28(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0043d584(*(int **)(param_1 + 0x28),*(int *)(param_2 + 0x28));
    return;
  }
  FUN_0043d584(*(int **)(param_1 + 0x28),0);
  return;
}


