
/* ==== FUN_004f9c90 @ 004f9c90 ==== 
 * signature: undefined __thiscall FUN_004f9c90(void * this, double * param_1, double * param_2, double * param_3)
 * body: 004f9c90-004f9d4a
 */

void __thiscall FUN_004f9c90(void *this,double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  dVar10 = (dVar8 - dVar2) * (dVar6 - dVar3) - (dVar9 - dVar3) * (dVar5 - dVar2);
  *(double *)this = dVar10;
  dVar6 = (dVar9 - dVar3) * (dVar4 - dVar1) - (dVar7 - dVar1) * (dVar6 - dVar3);
  *(double *)((int)this + 8) = dVar6;
  dVar4 = (dVar7 - dVar1) * (dVar5 - dVar2) - (dVar8 - dVar2) * (dVar4 - dVar1);
  *(double *)((int)this + 0x10) = dVar4;
  *(double *)((int)this + 0x18) = -(dVar10 * dVar1 + dVar6 * dVar2 + dVar4 * dVar3);
  return;
}


