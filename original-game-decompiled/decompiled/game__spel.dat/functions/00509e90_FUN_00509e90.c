
/* ==== FUN_00509e90 @ 00509e90 ==== 
 * signature: float10 __cdecl FUN_00509e90(int * param_1, int param_2, double * param_3)
 * body: 00509e90-0050a021
 */

float10 __cdecl FUN_00509e90(int *param_1,int param_2,double *param_3)

{
  float *pfVar1;
  uint *puVar2;
  float10 fVar3;
  float10 fVar4;
  int local_4c;
  double local_48;
  float local_40;
  float local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  double local_28;
  double local_20;
  double local_18;
  
  puVar2 = (uint *)(param_2 + 4);
  FUN_005094e0(param_1,(uint)puVar2,param_3,(int)&local_38);
  if (((local_34 | local_30 | local_38) & 0x80000000) == 0) {
    pfVar1 = (float *)((*puVar2 & 0xffff) * 0x10 + *param_1 + (int)param_1);
    FUN_00509c90(puVar2,param_1,&local_28);
    fVar3 = (float10)local_28;
    fVar4 = (fVar3 * (float10)*param_3 +
            (float10)local_18 * (float10)param_3[2] + (float10)local_20 * (float10)param_3[1]) -
            ((float10)*pfVar1 * fVar3 +
            (float10)pfVar1[2] * (float10)local_18 + (float10)pfVar1[1] * (float10)local_20);
    return ((float10)1.0 /
           ((float10)local_18 * (float10)local_18 +
           fVar3 * fVar3 + (float10)local_20 * (float10)local_20)) * fVar4 * fVar4;
  }
  local_48 = 1e+101;
  local_4c = 3;
  puVar2 = (uint *)(param_2 + 0xc);
  do {
    FUN_00509420(param_1,puVar2,param_3,&local_40);
    if (0.0 <= local_40) {
      if (0.0 <= local_3c) {
        fVar3 = FUN_00509d60(param_1,puVar2,param_3);
        goto LAB_00509ff2;
      }
    }
    else {
      pfVar1 = (float *)((*puVar2 & 0xffff) * 0x10 + *param_1 + (int)param_1);
      fVar3 = ((float10)*param_3 - (float10)*pfVar1) * ((float10)*param_3 - (float10)*pfVar1) +
              ((float10)param_3[1] - (float10)pfVar1[1]) *
              ((float10)param_3[1] - (float10)pfVar1[1]) +
              ((float10)param_3[2] - (float10)pfVar1[2]) *
              ((float10)param_3[2] - (float10)pfVar1[2]);
LAB_00509ff2:
      if (fVar3 < (float10)local_48) {
        local_48 = (double)fVar3;
      }
    }
    puVar2 = puVar2 + -1;
    local_4c = local_4c + -1;
    if (local_4c == 0) {
      return (float10)local_48;
    }
  } while( true );
}


