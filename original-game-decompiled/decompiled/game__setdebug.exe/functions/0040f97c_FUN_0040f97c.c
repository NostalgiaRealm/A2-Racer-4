
/* ==== FUN_0040f97c @ 0040f97c ==== 
 * signature: undefined __register FUN_0040f97c(int * param_1)
 * body: 0040f97c-0040f992
 */

void FUN_0040f97c(int *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}


