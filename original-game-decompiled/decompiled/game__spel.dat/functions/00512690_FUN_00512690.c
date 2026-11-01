
/* ==== FUN_00512690 @ 00512690 ==== 
 * signature: undefined __stdcall FUN_00512690(int param_1, float * param_2, float * param_3)
 * body: 00512690-005127da
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512690(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  *param_2 = 1e+06;
  param_2[1] = 1e+06;
  param_2[2] = 1e+06;
  iVar6 = 0;
  *param_3 = -1e+06;
  param_3[1] = -1e+06;
  param_3[2] = -1e+06;
  if (*(short *)(param_1 + 2) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar6 * 4);
      fVar7 = (float10)_DAT_005b9e80 * (float10)*(double *)(iVar1 + 0x28);
      fVar8 = (float10)*(byte *)(iVar1 + 0x30) * fVar7;
      fVar4 = (float)((float10)*(double *)(iVar1 + 8) - fVar8);
      fVar9 = (float10)*(byte *)(iVar1 + 0x31) * fVar7;
      fVar5 = (float)((float10)*(double *)(iVar1 + 0x10) - fVar9);
      fVar7 = (float10)*(byte *)(iVar1 + 0x32) * fVar7;
      fVar10 = (float10)*(double *)(iVar1 + 0x18) - fVar7;
      fVar8 = (float10)(double)fVar8 + (float10)*(double *)(iVar1 + 8);
      dVar2 = (double)fVar9 + *(double *)(iVar1 + 0x10);
      dVar3 = (double)fVar7 + *(double *)(iVar1 + 0x18);
      if (fVar4 < *param_2) {
        *param_2 = fVar4;
      }
      if ((float10)*param_3 < fVar8) {
        *param_3 = (float)fVar8;
      }
      if (fVar5 < param_2[1]) {
        param_2[1] = fVar5;
      }
      if (param_3[1] < (float)dVar2) {
        param_3[1] = (float)dVar2;
      }
      if (fVar10 < (float10)param_2[2]) {
        param_2[2] = (float)fVar10;
      }
      if (param_3[2] < (float)dVar3) {
        param_3[2] = (float)dVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  return;
}


