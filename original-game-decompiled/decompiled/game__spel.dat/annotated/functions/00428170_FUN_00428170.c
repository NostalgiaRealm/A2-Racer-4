
/* ==== FUN_00428170 @ 00428170 ==== 
 * signature: undefined __cdecl FUN_00428170(float * param_1, int param_2, float param_3, int param_4, float param_5, char param_6)
 * body: 00428170-0042824f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00428170(float *param_1,int param_2,float param_3,int param_4,float param_5,char param_6)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_14;
  float local_10;
  
  if ((param_4 == 0) || (param_4 == 1)) {
    local_10 = *(float *)(&DAT_006b2b90 + DAT_006fbb44 * 4);
    local_14 = *(float *)(&DAT_006b2b9c + DAT_006fbb44 * 4);
    fVar1 = *(float *)(&DAT_006b2ba8 + DAT_006fbb44 * 4);
  }
  else {
    local_10 = *(float *)(&DAT_006b2b6c + DAT_006fbb44 * 4);
    local_14 = *(float *)(&DAT_006b2b78 + DAT_006fbb44 * 4);
    fVar1 = *(float *)(&DAT_006b2b84 + DAT_006fbb44 * 4);
  }
  fVar2 = _DAT_006b2aec * param_5;
  fVar3 = FUN_00428120(param_4,param_2,param_6);
  fVar4 = (float10)fsin((float10)fVar1 * (float10)param_3);
  fVar5 = (float10)fcos((float10)(fVar2 * 0.01));
  *param_1 = (float)(fVar5 * ((float10)local_10 * (float10)param_3 + fVar4 * (float10)local_14) *
                             fVar3 * (float10)0.25);
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}


