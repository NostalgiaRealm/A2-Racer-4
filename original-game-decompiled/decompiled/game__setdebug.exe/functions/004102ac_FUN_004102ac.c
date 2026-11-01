
/* ==== FUN_004102ac @ 004102ac ==== 
 * signature: undefined __register FUN_004102ac(int param_1, int * param_2)
 * body: 004102ac-004102dc
 */

void FUN_004102ac(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  }
  FUN_00405308((int *)(param_1 + 8),param_2);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),param_1);
  }
  return;
}


