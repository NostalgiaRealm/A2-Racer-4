
/* ==== FUN_00508cf0 @ 00508cf0 ==== 
 * signature: undefined __cdecl FUN_00508cf0(int * param_1, double * param_2, double * param_3)
 * body: 00508cf0-00508e36
 */

void __cdecl FUN_00508cf0(int *param_1,double *param_2,double *param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  
  piVar3 = param_1;
  iVar2 = *param_1;
  puVar7 = (uint *)(param_1 + 5);
  pfVar4 = (float *)((param_1[5] & 0xffffU) * 0x10 + iVar2 + (int)param_1);
  local_20 = *pfVar4;
  local_1c = pfVar4[1];
  fVar1 = pfVar4[2];
  param_1 = (int *)(int)(short)param_1[3];
  local_18 = fVar1;
  local_10 = local_20;
  local_c = local_1c;
  if (-1 < (int)param_1 + -1) {
    do {
      iVar6 = 3;
      puVar5 = puVar7;
      do {
        pfVar4 = (float *)((*puVar5 & 0xffff) * 0x10 + iVar2 + (int)piVar3);
        if (local_20 <= *pfVar4) {
          if (local_10 < *pfVar4) {
            local_10 = *pfVar4;
          }
        }
        else {
          local_20 = *pfVar4;
        }
        if (local_1c <= pfVar4[1]) {
          if (local_c < pfVar4[1]) {
            local_c = pfVar4[1];
          }
        }
        else {
          local_1c = pfVar4[1];
        }
        if (local_18 <= pfVar4[2]) {
          if (fVar1 < pfVar4[2]) {
            fVar1 = pfVar4[2];
          }
        }
        else {
          local_18 = pfVar4[2];
        }
        puVar5 = (uint *)((int)puVar5 + *(int *)(&DAT_005b99bc + ((uint)puVar5 & 0xc)));
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar7 = puVar7 + 4;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  *param_2 = (double)local_20;
  param_2[1] = (double)local_1c;
  param_2[2] = (double)local_18;
  *param_3 = (double)local_10;
  param_3[1] = (double)local_c;
  param_3[2] = (double)fVar1;
  return;
}


