
/* ==== FUN_00427e60 @ 00427e60 ==== 
 * signature: float10 __cdecl FUN_00427e60(int param_1, int param_2, float param_3)
 * body: 00427e60-00428036
 */

float10 __cdecl FUN_00427e60(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  float local_20 [4];
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_38 = 0.0;
  local_34 = 0;
  local_30 = 0;
  local_20[0] = 0.0;
  local_20[2] = 0.0;
  local_20[1] = 0.1;
  if (param_2 < 2) {
    iVar3 = param_1 * 0xf0;
    FUN_004f3f20(*(void **)(*(int *)(*(int *)(iVar3 + 0x10 + DAT_00715e50) + 8) + 0xa4),local_20,
                 &local_10);
    local_34 = local_c;
    local_38 = local_10;
    local_30 = local_8;
    pfVar1 = (float *)FUN_004aa060(local_2c,(undefined4 *)
                                            (DAT_0073b0d0 +
                                             *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9 + 0x10),
                                   &local_38);
    pfVar2 = (float *)(iVar3 + 0xc4 + DAT_00715e50);
    if (*pfVar2 == 0.0) {
      fVar4 = (float10)0.0;
    }
    else {
      fVar4 = (float10)fpatan((float10)*pfVar1 / (float10)*pfVar2,(float10)1);
      fVar4 = (float10)param_3 * (float10)0.004 - fVar4;
    }
  }
  else {
    iVar3 = param_1 * 0xf0;
    FUN_004f3f20(*(void **)(*(int *)(*(int *)(iVar3 + 0x10 + DAT_00715e50) + 8) + 0xa4),local_20,
                 &local_10);
    local_38 = local_10;
    local_34 = local_c;
    local_30 = local_8;
    pfVar1 = (float *)FUN_004aa060(local_2c,(undefined4 *)
                                            (DAT_0073b0d0 +
                                             *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9 + 0x10),
                                   &local_38);
    pfVar2 = (float *)(iVar3 + 0xc4 + DAT_00715e50);
    if (*(float *)(iVar3 + 0xc4 + DAT_00715e50) == 0.0) {
      fVar4 = (float10)0.0;
    }
    else {
      fVar4 = (float10)fpatan((float10)*pfVar1 / (float10)*pfVar2,(float10)1);
      fVar4 = -fVar4;
    }
  }
  if (*pfVar2 < 0.0) {
    fVar4 = -fVar4;
  }
  return fVar4;
}


