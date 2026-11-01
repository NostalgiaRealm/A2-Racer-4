
/* ==== FUN_004fad20 @ 004fad20 ==== 
 * signature: undefined __thiscall FUN_004fad20(void * this, double * param_1, double * param_2)
 * body: 004fad20-004fadba
 */

void __thiscall FUN_004fad20(void *this,double *param_1,double *param_2)

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
  
  dVar1 = *param_1;
  dVar2 = *(double *)this;
  dVar3 = *(double *)((int)this + 0x40);
  dVar4 = param_1[1];
  dVar5 = *(double *)((int)this + 8);
  dVar6 = *(double *)((int)this + 0x48);
  dVar7 = param_1[2];
  dVar8 = *(double *)((int)this + 0x10);
  dVar9 = *(double *)((int)this + 0x50);
  dVar10 = *(double *)((int)this + 0x70);
  dVar11 = *(double *)((int)this + 0x60);
  param_2[1] = *(double *)((int)this + 0x30) * dVar7 +
               *(double *)((int)this + 0x28) * dVar4 + *(double *)((int)this + 0x20) * dVar1 +
               *(double *)((int)this + 0x68);
  *param_2 = dVar8 * dVar7 + dVar5 * dVar4 + dVar2 * dVar1 + dVar11;
  param_2[2] = dVar9 * dVar7 + dVar6 * dVar4 + dVar1 * dVar3 + dVar10;
  return;
}


