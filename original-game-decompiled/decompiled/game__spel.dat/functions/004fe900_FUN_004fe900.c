
/* ==== FUN_004fe900 @ 004fe900 ==== 
 * signature: undefined __thiscall FUN_004fe900(void * this, double * param_1, double * param_2)
 * body: 004fe900-004fe969
 */

void __thiscall FUN_004fe900(void *this,double *param_1,double *param_2)

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
  double dVar12;
  
  dVar1 = *(double *)((int)this + 0x38);
  dVar2 = *param_1;
  dVar3 = *(double *)((int)this + 0x78);
  dVar4 = param_1[2];
  dVar5 = *(double *)((int)this + 0x58);
  dVar6 = param_1[1];
  dVar7 = *(double *)((int)this + 0x70);
  dVar8 = param_1[2];
  dVar9 = *(double *)((int)this + 0x50);
  dVar10 = param_1[1];
  dVar11 = *(double *)((int)this + 0x30);
  dVar12 = *param_1;
  param_2[2] = *(double *)((int)this + 0x60) * param_1[1] +
               *(double *)((int)this + 0x80) * param_1[2] + *(double *)((int)this + 0x40) * *param_1
  ;
  *param_2 = dVar11 * dVar12 + dVar9 * dVar10 + dVar7 * dVar8;
  param_2[1] = dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2;
  return;
}


