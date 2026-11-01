
/* ==== FUN_0050a140 @ 0050a140 ==== 
 * signature: float10 __cdecl FUN_0050a140(uint * param_1, uint * param_2, int * param_3, int * param_4)
 * body: 0050a140-0050a35e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0050a140(uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  float10 fVar1;
  uint **local_110;
  double *local_10c;
  double local_108;
  int local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  uint *local_e8;
  int local_e4;
  double local_e0 [4];
  undefined4 local_c0 [2];
  double local_b8 [4];
  double local_98 [18];
  
  FUN_00509670(local_c0,param_1,param_2,param_3,param_4);
  FUN_00509870(local_c0,&local_f8);
  if ((((uint)local_f0 | (uint)local_ec) & 0x80000000) != 0) {
    if ((((uint)local_f4 | (uint)local_f8) & 0x80000000) == 0) {
      if (local_f0 <= 0.0) {
        FUN_00509120(param_2,param_4,(int)param_3,local_e0);
        fVar1 = (float10)FUN_0050a080(local_e0,(int *)param_3[1],param_1);
        return fVar1;
      }
      if (local_ec <= 0.0) {
        FUN_00509120((uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2),
                     param_4,(int)param_3,local_e0);
        fVar1 = (float10)FUN_0050a080(local_e0,(int *)param_3[1],param_1);
        return fVar1;
      }
      _DAT_00000000 = 0;
    }
    local_10c = local_b8;
    local_e8 = param_2;
    local_108 = 1e+101;
    local_110 = &local_e8;
    local_e4 = *(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2;
    local_fc = 2;
    do {
      FUN_00509120(*local_110,param_4,(int)param_3,local_e0);
      fVar1 = (float10)FUN_0050a080(local_e0,(int *)param_3[1],param_1);
      if (fVar1 < (float10)local_108) {
        local_108 = (double)fVar1;
      }
      fVar1 = (float10)FUN_0050a080(local_10c,(int *)param_4[1],param_2);
      if (fVar1 < (float10)local_108) {
        local_108 = (double)fVar1;
      }
      local_110 = local_110 + 1;
      local_10c = local_10c + 4;
      local_fc = local_fc + -1;
    } while (local_fc != 0);
    return (float10)local_108;
  }
  if (local_f8 <= 0.0) {
    fVar1 = (float10)FUN_0050a080(local_b8,(int *)param_4[1],param_2);
    return fVar1;
  }
  if (0.0 < local_f4) {
    fVar1 = FUN_005097b0(local_c0);
    return fVar1;
  }
  fVar1 = (float10)FUN_0050a080(local_98,(int *)param_4[1],param_2);
  return fVar1;
}


