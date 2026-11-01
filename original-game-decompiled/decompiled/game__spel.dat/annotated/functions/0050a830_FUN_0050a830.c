
/* ==== FUN_0050a830 @ 0050a830 ==== 
 * signature: float10 __thiscall FUN_0050a830(int param_1, int param_2)
 * body: 0050a830-0050a8ce
 */

float10 __thiscall FUN_0050a830(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_2 + 0xa4);
  fVar3 = (float10)*(float *)(iVar1 + 0x1c0) + (float10)*(float *)(iVar1 + 0x1b8) + (float10)1e-19;
  fVar4 = fVar3 * (float10)*(double *)(param_1 + 0x38);
  fVar5 = (float10)*(float *)(iVar1 + 4) * (float10)*(double *)(param_1 + 0x40);
  if (fVar5 < fVar4) {
    fVar4 = (float10)(double)fVar5;
  }
  if (fVar4 < (float10)*(double *)(param_1 + 0x48)) {
    fVar4 = (float10)*(double *)(param_1 + 0x48);
  }
  if ((float10)*(double *)(param_1 + 0x50) < fVar4) {
    fVar4 = (float10)*(double *)(param_1 + 0x50);
  }
  fVar4 = fVar4 - (float10)*(double *)(*(int *)(param_1 + 0xc) + 0xc0) * fVar3;
  dVar2 = (double)fVar3 * *(double *)(param_1 + 0x58) + (double)*(float *)(iVar1 + 4);
  if (fVar4 < (float10)dVar2) {
    fVar4 = (float10)dVar2;
  }
  return fVar4;
}


