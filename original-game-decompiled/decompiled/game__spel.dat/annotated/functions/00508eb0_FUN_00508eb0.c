
/* ==== FUN_00508eb0 @ 00508eb0 ==== 
 * signature: undefined __cdecl FUN_00508eb0(int * param_1, double * param_2, double * param_3, double * param_4)
 * body: 00508eb0-00509054
 */

void __cdecl FUN_00508eb0(int *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int local_5c;
  double local_58;
  double local_50;
  double local_28;
  double local_20;
  double local_18;
  
  local_5c = (int)(short)param_1[3];
  local_58 = 0.0;
  local_50 = 0.0;
  if (-1 < local_5c + -1) {
    puVar7 = (uint *)(param_1 + 5);
    do {
      FUN_00509c90(puVar7,param_1,&local_28);
      iVar6 = 3;
      puVar8 = puVar7;
      do {
        pfVar5 = (float *)((*puVar8 & 0xffff) * 0x10 + *param_1 + (int)param_1);
        dVar1 = (double)(*pfVar5 - (float)*param_2);
        dVar2 = (double)(pfVar5[1] - (float)param_2[1]);
        dVar3 = (double)pfVar5[2] - param_2[2];
        dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
        if (local_58 < dVar4) {
          local_58 = dVar4;
        }
        dVar4 = local_18 * dVar2 - dVar3 * local_20;
        dVar3 = dVar3 * local_28 - local_18 * dVar1;
        dVar1 = local_20 * dVar1 - dVar2 * local_28;
        dVar1 = (dVar4 * dVar4 + dVar1 * dVar1 + dVar3 * dVar3) *
                (1.0 / (local_28 * local_28 + local_18 * local_18 + local_20 * local_20));
        if (local_50 < dVar1) {
          local_50 = dVar1;
        }
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar7 = puVar7 + 4;
      local_5c = local_5c + -1;
    } while (local_5c != 0);
  }
  if (*param_3 < SQRT(local_58)) {
    *param_3 = SQRT(local_58);
  }
  if ((param_4 != (double *)0x0) && (*param_4 < SQRT(local_50))) {
    *param_4 = SQRT(local_50);
    return;
  }
  return;
}


