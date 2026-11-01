
/* ==== FUN_004b4110 @ 004b4110 ==== 
 * signature: undefined __cdecl FUN_004b4110(float * param_1, float * param_2, float * param_3)
 * body: 004b4110-004b429d
 */

void __cdecl FUN_004b4110(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_40 [5];
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  fVar1 = param_2[8];
  pfVar3 = (float *)&DAT_0073b580;
  pfVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  local_40[3] = 0.0;
  local_24 = 0;
  local_40[0] = *param_2 * *param_3 + param_3[1] * param_2[4] + fVar1 * param_3[2];
  local_40[1] = param_2[1] * *param_3 + param_2[5] * param_3[1] + param_2[9] * param_3[2];
  local_40[2] = param_3[1] * param_2[6] + param_2[10] * param_3[2] + param_2[2] * *param_3;
  local_40[4] = param_3[4] * *param_2 + param_3[5] * param_2[4] + param_3[6] * param_2[8];
  local_2c = param_3[4] * param_2[1] + param_3[6] * param_2[9] + param_3[5] * param_2[5];
  local_28 = param_3[5] * param_2[6] + param_3[4] * param_2[2] + param_3[6] * param_2[10];
  local_20 = *param_2 * param_3[8] + param_2[8] * param_3[10] + param_3[9] * param_2[4];
  local_1c = param_2[1] * param_3[8] + param_3[9] * param_2[5] + param_2[9] * param_3[10];
  local_14 = 0;
  local_4 = 0x3f800000;
  local_18 = param_3[9] * param_2[6] + param_2[2] * param_3[8] + param_2[10] * param_3[10];
  local_10 = param_3[0xd] * param_2[4] + param_2[8] * param_3[0xe] + param_3[0xc] * *param_2 +
             param_2[0xc];
  local_c = param_2[1] * param_3[0xc] + param_2[9] * param_3[0xe] + param_2[5] * param_3[0xd] +
            param_2[0xd];
  local_8 = param_2[2] * param_3[0xc] + param_2[10] * param_3[0xe] + param_2[6] * param_3[0xd] +
            param_2[0xe];
  pfVar3 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


