
/* ==== FUN_00529580 @ 00529580 ==== 
 * signature: undefined __cdecl FUN_00529580(int param_1, double * param_2, double * param_3, double * param_4)
 * body: 00529580-005295c3
 */

void __cdecl FUN_00529580(int param_1,double *param_2,double *param_3,double *param_4)

{
  if (param_1 == 3) {
    *param_4 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
    param_4[1] = -(param_3[2] * *param_2 - param_2[2] * *param_3);
    param_4[2] = param_3[1] * *param_2 - param_2[1] * *param_3;
  }
  return;
}


