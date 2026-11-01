
/* ==== FUN_004232c8 @ 004232c8 ==== 
 * signature: undefined __register FUN_004232c8(int * param_1, int param_2)
 * body: 004232c8-004232e6
 */

void FUN_004232c8(int *param_1,int param_2)

{
  FUN_0040f164((int *)*param_1,param_2);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00402d14((int *)*param_1);
    *param_1 = 0;
  }
  return;
}


