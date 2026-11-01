
/* ==== FUN_00427170 @ 00427170 ==== 
 * signature: float10 __stdcall FUN_00427170(int param_1, int param_2, float * param_3, float * param_4)
 * body: 00427170-00427337
 */

float10 FUN_00427170(int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  fVar4 = (float10)0.0;
  if (param_1 != -1) {
    iVar3 = param_1 * 0xf0;
    pfVar2 = (float *)FUN_004aa060(local_c,(undefined4 *)
                                           (DAT_0073b0d0 +
                                            *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9 + 0x10),
                                   param_3);
    local_18 = *pfVar2;
    local_14 = pfVar2[1];
    local_10 = pfVar2[2];
    fVar1 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
    if ((param_2 == -1) ||
       (pfVar2 = (float *)(param_2 * 0xf0 + 0xb0 + DAT_00715e50),
       *(float *)(param_2 * 0xf0 + 0xb0 + DAT_00715e50) == 0.0)) {
      fVar1 = fVar1 / (*(float *)(iVar3 + 0xb0 + DAT_00715e50) * 2.0);
    }
    else if (0.0006 <= *pfVar2) {
      fVar1 = fVar1 / *pfVar2;
    }
    else {
      fVar1 = fVar1 / 0.0006;
    }
    if (param_2 == -1) {
      pfVar2 = (float *)FUN_004b4030(&local_18,
                                     DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9 +
                                     0x10);
      fVar4 = SQRT((float10)pfVar2[2] * (float10)pfVar2[2] +
                   (float10)pfVar2[1] * (float10)pfVar2[1] + (float10)*pfVar2 * (float10)*pfVar2);
      fVar5 = SQRT((float10)param_4[2] * (float10)param_4[2] +
                   (float10)param_4[1] * (float10)param_4[1] + (float10)*param_4 * (float10)*param_4
                  );
      return ((float10)1.0 -
             ABS((float10)(float)((float10)*param_4 / fVar5) *
                 (float10)(float)((float10)*pfVar2 / fVar4) +
                 (float10)(float)((float10)param_4[1] / fVar5) *
                 (float10)(float)((float10)pfVar2[1] / fVar4) +
                 ((float10)param_4[2] / fVar5) * ((float10)pfVar2[2] / fVar4))) * (float10)fVar1;
    }
    fVar4 = (float10)fVar1;
  }
  return fVar4;
}


