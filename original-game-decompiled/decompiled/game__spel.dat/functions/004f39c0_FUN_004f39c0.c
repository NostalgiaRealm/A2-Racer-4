
/* ==== FUN_004f39c0 @ 004f39c0 ==== 
 * signature: float10 __thiscall FUN_004f39c0(void * param_1, float * param_2, float * param_3, float * param_4)
 * body: 004f39c0-004f3a14
 */

float10 __thiscall FUN_004f39c0(void *param_1,float *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  float local_30 [4];
  float local_20 [4];
  float local_10 [4];
  
  FUN_004f42f0(param_1,param_2,param_3,param_4,local_20,local_30);
  FUN_004f3390(param_1,param_2,local_20,local_30,local_10);
  fVar1 = FUN_004f9440(local_10);
  return (float10)1.0 / fVar1;
}


