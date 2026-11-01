
/* ==== FUN_004ff750 @ 004ff750 ==== 
 * signature: float * __thiscall FUN_004ff750(void * this, float param_1, int * param_2)
 * body: 004ff750-004ff885
 */

float * __thiscall FUN_004ff750(void *this,float param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  
  *(int **)((int)this + 0x18) = param_2;
  *(float *)((int)this + 0x14) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  piVar8 = param_2;
  fVar9 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar3 = *piVar8;
      fVar9 = (float)((int)fVar9 + -1);
      fVar1 = *(float *)(iVar3 + 0x4c);
      fVar2 = *(float *)(iVar3 + 0x50);
      *(float *)this = *(float *)this + *(float *)(iVar3 + 0x48);
      *(float *)((int)this + 4) = fVar1 + *(float *)((int)this + 4);
      *(float *)((int)this + 8) = fVar2 + *(float *)((int)this + 8);
      piVar8 = piVar8 + 1;
    } while (fVar9 != 0.0);
  }
  fVar9 = 1.0 / (float)(int)param_1;
  fVar1 = *(float *)this * fVar9;
  fVar2 = *(float *)((int)this + 4) * fVar9;
  *(float *)this = fVar1;
  fVar9 = *(float *)((int)this + 8) * fVar9;
  *(float *)((int)this + 4) = fVar2;
  fVar5 = 0.0;
  *(float *)((int)this + 8) = fVar9;
  if (0 < (int)param_1) {
    do {
      iVar3 = *param_2;
      fVar4 = (float)*(double *)(iVar3 + 8) - fVar1;
      fVar7 = (float)*(double *)(iVar3 + 0x10) - fVar2;
      fVar6 = (float)*(double *)(iVar3 + 0x18) - fVar9;
      fVar4 = fVar4 * fVar4 + fVar7 * fVar7 + fVar6 * fVar6;
      if (fVar5 < fVar4) {
        fVar5 = fVar4;
      }
      fVar7 = (float)*(double *)(iVar3 + 0x28) - fVar1;
      fVar6 = (float)*(double *)(iVar3 + 0x30) - fVar2;
      fVar4 = (float)*(double *)(iVar3 + 0x38) - fVar9;
      fVar4 = fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4;
      if (fVar5 < fVar4) {
        fVar5 = fVar4;
      }
      param_2 = param_2 + 1;
      param_1 = (float)((int)param_1 + -1);
    } while (param_1 != 0.0);
  }
  *(float *)((int)this + 0x10) = SQRT(fVar5);
  return this;
}


