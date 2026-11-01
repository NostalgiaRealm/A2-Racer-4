
/* ==== FUN_00504640 @ 00504640 ==== 
 * signature: undefined __stdcall FUN_00504640(float param_1, float param_2, float * param_3, float * param_4)
 * body: 00504640-0050468a
 */

void FUN_00504640(float param_1,float param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (SQRT((float10)param_2) + (float10)1.0) * (float10)param_1;
  fVar2 = (float10)fpatan(fVar1,(float10)1);
  fVar2 = fVar2 * fVar2;
  fVar2 = fVar2 * fVar2 * (float10)0.041666668 + ((float10)1.0 - fVar2 * (float10)0.5);
  *param_3 = (float)fVar2;
  *param_4 = (float)(fVar2 * fVar1);
  return;
}


