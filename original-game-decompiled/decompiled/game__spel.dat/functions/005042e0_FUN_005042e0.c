
/* ==== FUN_005042e0 @ 005042e0 ==== 
 * signature: float10 __fastcall FUN_005042e0(void * param_1)
 * body: 005042e0-0050432c
 */

float10 __fastcall FUN_005042e0(void *param_1)

{
  float *pfVar1;
  float10 fVar2;
  
  FUN_005041f0(param_1,*(float **)((int)param_1 + 0x11c));
  pfVar1 = *(float **)((int)param_1 + 0x11c);
  fVar2 = -((float10)*pfVar1 * (float10)*(float *)((int)param_1 + 0xb8) +
           (float10)pfVar1[1] * (float10)*(float *)((int)param_1 + 0xbc) +
           (float10)pfVar1[2] * (float10)*(float *)((int)param_1 + 0xc0)) *
          (float10)*(double *)((int)param_1 + 0x10);
  return ((float10)1.0 /
         ((float10)*(double *)((int)param_1 + 8) + (float10)*(double *)((int)param_1 + 0x10))) *
         (fVar2 + fVar2) * (float10)*(double *)((int)param_1 + 8);
}


