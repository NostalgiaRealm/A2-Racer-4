
/* ==== FUN_0041d2e0 @ 0041d2e0 ==== 
 * signature: undefined __stdcall FUN_0041d2e0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float * param_7)
 * body: 0041d2e0-0041d370
 */

void FUN_0041d2e0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7)

{
  *param_7 = param_1;
  param_7[1] = param_2;
  param_7[2] = param_3;
  param_7[3] = param_1 - param_4;
  param_7[6] = param_1 + param_5;
  param_7[4] = param_2;
  param_7[7] = param_2;
  param_7[5] = param_3 + param_6;
  param_7[8] = param_3 + param_6;
  return;
}


