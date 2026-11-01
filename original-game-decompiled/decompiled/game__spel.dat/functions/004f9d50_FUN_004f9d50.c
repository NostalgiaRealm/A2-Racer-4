
/* ==== FUN_004f9d50 @ 004f9d50 ==== 
 * signature: undefined __thiscall FUN_004f9d50(void * this, float * param_1, float * param_2, float * param_3)
 * body: 004f9d50-004f9e0a
 */

void __thiscall FUN_004f9d50(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = (fVar8 - fVar2) * (fVar6 - fVar3) - (fVar9 - fVar3) * (fVar5 - fVar2);
  *(double *)this = (double)fVar10;
  fVar6 = (fVar9 - fVar3) * (fVar4 - fVar1) - (fVar7 - fVar1) * (fVar6 - fVar3);
  *(double *)((int)this + 8) = (double)fVar6;
  fVar4 = (fVar7 - fVar1) * (fVar5 - fVar2) - (fVar8 - fVar2) * (fVar4 - fVar1);
  *(double *)((int)this + 0x10) = (double)fVar4;
  *(double *)((int)this + 0x18) = (double)-(fVar10 * fVar1 + fVar6 * fVar2 + fVar4 * fVar3);
  return;
}


