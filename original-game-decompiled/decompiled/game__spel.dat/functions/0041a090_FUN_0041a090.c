
/* ==== FUN_0041a090 @ 0041a090 ==== 
 * signature: undefined __cdecl FUN_0041a090(float * param_1, int param_2, int param_3)
 * body: 0041a090-0041a198
 */

void __cdecl FUN_0041a090(float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if ((&DAT_005ce9ec)[param_2 * 0xa5] == 0x16) {
    iVar6 = 6;
  }
  else {
    iVar6 = 7;
  }
  iVar6 = FUN_00423290(param_3,iVar6);
  if (iVar6 == -1) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return;
  }
  pfVar1 = (float *)(param_3 * 0x50 + 8 + DAT_00715eb8);
  pfVar2 = (float *)(iVar6 * 0x50 + 8 + DAT_00715eb8);
  fVar4 = pfVar1[2];
  fVar5 = pfVar2[2];
  fVar3 = *(float *)(&DAT_005cea50 + param_2 * 0x294);
  *param_1 = (*pfVar2 - *pfVar1) * fVar3 * 0.4;
  param_1[1] = 0.0;
  param_1[2] = (fVar5 - fVar4) * fVar3 * 0.4;
  return;
}


