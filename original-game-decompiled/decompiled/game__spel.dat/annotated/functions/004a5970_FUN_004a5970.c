
/* ==== FUN_004a5970 @ 004a5970 ==== 
 * signature: undefined __cdecl FUN_004a5970(float * param_1, double * param_2)
 * body: 004a5970-004a5a34
 */

void __cdecl FUN_004a5970(float *param_1,double *param_2)

{
  int iVar1;
  float *pfVar2;
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
  
  local_40[3] = 0.0;
  local_40[0] = (float)*param_2;
  local_40[1] = -(float)param_2[4];
  local_24 = 0;
  local_14 = 0;
  local_40[2] = (float)param_2[8];
  local_40[4] = -(float)param_2[1];
  local_4 = 0x3f800000;
  local_2c = (float)param_2[5];
  local_28 = -(float)param_2[9];
  local_20 = (float)param_2[2];
  local_1c = -(float)param_2[6];
  local_18 = (float)param_2[10];
  local_10 = (float)param_2[0xc];
  local_c = (float)param_2[0xd];
  local_8 = (float)param_2[0xe];
  pfVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


