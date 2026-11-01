
/* ==== FUN_004b3e40 @ 004b3e40 ==== 
 * signature: undefined __cdecl FUN_004b3e40(float * param_1, float param_2)
 * body: 004b3e40-004b3e95
 */

void __cdecl FUN_004b3e40(float *param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float local_40 [4];
  float local_30;
  float local_2c;
  
  fVar4 = (float10)fcos((float10)param_2);
  pfVar2 = (float *)&DAT_0073b538;
  pfVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  iVar1 = 0x10;
  fVar5 = (float10)fsin((float10)param_2);
  local_40[0] = (float)fVar4;
  local_2c = (float)fVar4;
  local_30 = (float)fVar5;
  local_40[1] = -(float)fVar5;
  pfVar2 = local_40;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


