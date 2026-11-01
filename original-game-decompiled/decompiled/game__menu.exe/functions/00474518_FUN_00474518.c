
/* ==== FUN_00474518 @ 00474518 ==== 
 * signature: undefined __register FUN_00474518(int param_1, int * param_2)
 * body: 00474518-00474537
 */

void FUN_00474518(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (param_2[0x1f] == 0)) {
    FUN_00410448(*(int **)(param_1 + 4),(int)param_2);
    FUN_00402f9c(param_2);
  }
  return;
}


