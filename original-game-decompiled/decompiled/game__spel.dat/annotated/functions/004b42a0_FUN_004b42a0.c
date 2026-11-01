
/* ==== FUN_004b42a0 @ 004b42a0 ==== 
 * signature: undefined __cdecl FUN_004b42a0(float * param_1, float * param_2, int param_3)
 * body: 004b42a0-004b4308
 */

void __cdecl FUN_004b42a0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_c [3];
  
  pfVar6 = local_c;
  iVar7 = 3;
  do {
    *pfVar6 = 0.0;
    fVar1 = *pfVar6;
    pfVar4 = (float *)((param_3 - (int)local_c) + (int)pfVar6);
    iVar8 = 3;
    pfVar5 = param_2;
    do {
      fVar2 = *pfVar5;
      fVar3 = *pfVar4;
      pfVar4 = pfVar4 + 4;
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar8 + -1;
      fVar1 = fVar2 * fVar3 + fVar1;
    } while (iVar8 != 0);
    *pfVar6 = fVar1;
    pfVar6 = pfVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *param_1 = local_c[0];
  param_1[1] = local_c[1];
  param_1[2] = local_c[2];
  return;
}


