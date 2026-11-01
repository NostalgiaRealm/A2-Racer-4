
/* ==== FUN_00411434 @ 00411434 ==== 
 * signature: undefined __register FUN_00411434(int * param_1)
 * body: 00411434-0041144a
 */

void FUN_00411434(int *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}


