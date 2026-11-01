
/* ==== FUN_004114f0 @ 004114f0 ==== 
 * signature: undefined __register FUN_004114f0(int * param_1)
 * body: 004114f0-00411500
 */

void FUN_004114f0(int *param_1)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return;
}


