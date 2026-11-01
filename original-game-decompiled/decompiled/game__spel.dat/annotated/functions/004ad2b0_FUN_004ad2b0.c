
/* ==== FUN_004ad2b0 @ 004ad2b0 ==== 
 * signature: undefined4 __cdecl FUN_004ad2b0(float * param_1, int param_2)
 * body: 004ad2b0-004ad3c2
 */

undefined4 __cdecl FUN_004ad2b0(float *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_4;
  
  fVar1 = (*(float **)(param_2 + 8))[2];
  local_4 = 0;
  if (*param_1 < **(float **)(param_2 + 8)) {
    if (param_1[2] < fVar1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 3;
    }
  }
  else if (param_1[2] < fVar1) {
    uVar6 = 1;
  }
  else {
    uVar6 = 2;
  }
  iVar5 = 8;
  iVar7 = 0;
  do {
    pfVar2 = *(float **)(iVar7 + param_2);
    if (*param_1 < *pfVar2) {
      if (param_1[2] < pfVar2[2]) {
        uVar4 = 0;
      }
      else {
        uVar4 = 3;
      }
    }
    else if (param_1[2] < pfVar2[2]) {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
    if (uVar6 != uVar4) {
      if ((uVar6 + 1 & 3) == uVar4) {
        local_4 = local_4 + 1;
      }
      else if ((uVar4 + 1 & 3) == uVar6) {
        local_4 = local_4 + -1;
      }
      else {
        pfVar3 = *(float **)(param_2 + iVar5);
        if (0.0 < (param_1[2] - pfVar3[2]) * (*pfVar2 - *pfVar3) -
                  (*param_1 - *pfVar3) * (pfVar2[2] - pfVar3[2])) {
          local_4 = local_4 + 2;
        }
        else {
          local_4 = local_4 + -2;
        }
      }
    }
    iVar8 = iVar7 + 4;
    iVar5 = iVar7;
    uVar6 = uVar4;
    iVar7 = iVar8;
  } while (iVar8 < 0xc);
  return CONCAT31((int3)((uint)local_4 >> 8),local_4 != 0);
}


