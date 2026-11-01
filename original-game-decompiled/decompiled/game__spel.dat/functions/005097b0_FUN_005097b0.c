
/* ==== FUN_005097b0 @ 005097b0 ==== 
 * signature: float10 __fastcall FUN_005097b0(undefined4 * param_1)
 * body: 005097b0-00509863
 */

float10 __fastcall FUN_005097b0(undefined4 *param_1)

{
  float *pfVar1;
  uint *puVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar4 = (float10)*(double *)(param_1 + 0x2a) * (float10)*(double *)(param_1 + 0x2a) +
          (float10)*(double *)(param_1 + 0x28) * (float10)*(double *)(param_1 + 0x28) +
          (float10)*(double *)(param_1 + 0x26) * (float10)*(double *)(param_1 + 0x26);
  if ((float10)1e-24 < fVar4) {
    pfVar1 = (float *)*param_1;
    fVar3 = ((float10)*(double *)(param_1 + 2) * (float10)*(double *)(param_1 + 0x26) +
            (float10)*(double *)(param_1 + 4) * (float10)*(double *)(param_1 + 0x28) +
            (float10)*(double *)(param_1 + 6) * (float10)*(double *)(param_1 + 0x2a)) -
            ((float10)*pfVar1 * (float10)*(double *)(param_1 + 0x26) +
            (float10)pfVar1[1] * (float10)*(double *)(param_1 + 0x28) +
            (float10)pfVar1[2] * (float10)*(double *)(param_1 + 0x2a));
    return (fVar3 * fVar3) / fVar4;
  }
  puVar2 = (uint *)((uint)param_1[0x23] & 0xfffffff0);
  fVar4 = (float10)FUN_0050a080((double *)(param_1 + 2),
                                (int *)(puVar2 + (*puVar2 & 0xfff) * -4 + -4),(uint *)param_1[0x23])
  ;
  return fVar4;
}


