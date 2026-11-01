
/* ==== FUN_004f8b00 @ 004f8b00 ==== 
 * signature: undefined __thiscall FUN_004f8b00(void * this, double * param_1)
 * body: 004f8b00-004f8be7
 */

void __thiscall FUN_004f8b00(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar3 = *(double *)this + *(double *)this;
  dVar4 = *(double *)((int)this + 8) + *(double *)((int)this + 8);
  dVar5 = *(double *)((int)this + 0x10) + *(double *)((int)this + 0x10);
  dVar9 = dVar3 * *(double *)this;
  dVar1 = *(double *)this;
  dVar2 = *(double *)this;
  dVar10 = dVar4 * *(double *)((int)this + 8);
  dVar8 = dVar5 * *(double *)((int)this + 8);
  dVar7 = dVar5 * *(double *)((int)this + 0x10);
  dVar3 = dVar3 * *(double *)((int)this + 0x18);
  dVar11 = dVar4 * *(double *)((int)this + 0x18);
  dVar6 = dVar5 * *(double *)((int)this + 0x18);
  *param_1 = 1.0 - (dVar7 + dVar10);
  param_1[1] = dVar4 * dVar1 - dVar6;
  param_1[2] = dVar11 + dVar5 * dVar2;
  param_1[4] = dVar6 + dVar4 * dVar1;
  param_1[5] = 1.0 - (dVar7 + dVar9);
  param_1[6] = dVar8 - dVar3;
  param_1[8] = dVar5 * dVar2 - dVar11;
  param_1[9] = dVar3 + dVar8;
  param_1[10] = 1.0 - (dVar10 + dVar9);
  return;
}


