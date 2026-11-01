
/* ==== FUN_005026e0 @ 005026e0 ==== 
 * signature: undefined __thiscall FUN_005026e0(void * this, double * param_1, double * param_2)
 * body: 005026e0-00502789
 */

void __thiscall FUN_005026e0(void *this,double *param_1,double *param_2)

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
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  dVar1 = param_1[3];
  dVar2 = param_2[1];
  dVar3 = param_2[3];
  dVar4 = param_1[1];
  dVar5 = param_1[2];
  dVar6 = *param_2;
  dVar7 = param_2[2];
  dVar8 = *param_1;
  dVar9 = param_1[3];
  dVar10 = param_2[3];
  dVar11 = *param_1;
  dVar12 = *param_2;
  dVar13 = param_1[1];
  dVar14 = param_2[1];
  dVar15 = param_1[2];
  dVar16 = param_2[2];
  dVar17 = *param_1;
  dVar18 = param_2[3];
  dVar19 = param_2[2];
  dVar20 = param_1[1];
  dVar21 = param_1[3];
  dVar22 = *param_2;
  dVar23 = param_1[2];
  dVar24 = param_2[1];
  *(double *)((int)this + 0x10) =
       (param_1[2] * param_2[3] + *param_1 * param_2[1] + param_1[3] * param_2[2]) -
       *param_2 * param_1[1];
  *(double *)((int)this + 0x18) =
       ((dVar9 * dVar10 - dVar11 * dVar12) - dVar13 * dVar14) - dVar15 * dVar16;
  *(double *)this = (dVar21 * dVar22 + dVar19 * dVar20 + dVar17 * dVar18) - dVar23 * dVar24;
  *(double *)((int)this + 8) = (dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2) - dVar7 * dVar8;
  return;
}


