
/* ==== FUN_004349bc @ 004349bc ==== 
 * signature: undefined __register FUN_004349bc(int * param_1)
 * body: 004349bc-004349df
 */

void FUN_004349bc(int *param_1)

{
  if (param_1[0x53] == 0) {
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_004349bc((int *)param_1[9]);
    }
    (**(code **)(*param_1 + 0x8c))();
  }
  return;
}


