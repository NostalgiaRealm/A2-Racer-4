
/* ==== FUN_00411e3c @ 00411e3c ==== 
 * signature: undefined __register FUN_00411e3c(int param_1, int * param_2)
 * body: 00411e3c-00411e6c
 */

void FUN_00411e3c(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  }
  FUN_00405878((int *)(param_1 + 8),param_2);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),param_1);
  }
  return;
}


