
/* ==== FUN_004b3f80 @ 004b3f80 ==== 
 * signature: undefined __cdecl FUN_004b3f80(float * param_1, uint param_2)
 * body: 004b3f80-004b3fed
 */

void __cdecl FUN_004b3f80(float *param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_40 [4];
  float local_30;
  float local_2c;
  
  pfVar2 = (float *)&DAT_0073b538;
  pfVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if (param_2 != 0) {
    iVar1 = (DAT_005b23bc & param_2) * 4;
    local_40[0] = *(float *)(iVar1 + DAT_0073b578);
    local_30 = *(float *)(iVar1 + DAT_0073b530);
    local_2c = local_40[0];
    local_40[1] = -local_30;
  }
  pfVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


