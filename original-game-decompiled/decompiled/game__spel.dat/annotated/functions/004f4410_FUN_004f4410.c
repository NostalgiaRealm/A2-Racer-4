
/* ==== FUN_004f4410 @ 004f4410 ==== 
 * signature: undefined __thiscall FUN_004f4410(int param_1, float * param_2, double param_3)
 * body: 004f4410-004f445b
 */

void __thiscall FUN_004f4410(int param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *(float *)(param_1 + 0x74) =
       *(float *)(param_1 + 0x34) * *param_2 * (float)param_3 + *(float *)(param_1 + 0x74);
  *(float *)(param_1 + 0x78) =
       *(float *)(param_1 + 0x38) * fVar1 * (float)param_3 + *(float *)(param_1 + 0x78);
  *(float *)(param_1 + 0x7c) =
       *(float *)(param_1 + 0x3c) * fVar2 * (float)param_3 + *(float *)(param_1 + 0x7c);
  return;
}


