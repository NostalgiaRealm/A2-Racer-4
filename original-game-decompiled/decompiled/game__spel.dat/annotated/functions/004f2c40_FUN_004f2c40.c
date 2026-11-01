
/* ==== FUN_004f2c40 @ 004f2c40 ==== 
 * signature: undefined __thiscall FUN_004f2c40(void * this, double param_1, double * param_2)
 * body: 004f2c40-004f2dcc
 */

void __thiscall FUN_004f2c40(void *this,double param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_28;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar5 = *(int *)((int)this + 0xa4);
  FUN_004f8d60(&local_28,(double *)(iVar5 + 0xe8),(double *)(iVar5 + 0x108),
               (param_1 - *(double *)(iVar5 + 0x68)) * (double)*(float *)(iVar5 + 0x70));
  dVar7 = param_1 - *(double *)(iVar5 + 0x68);
  fVar1 = *(float *)(iVar5 + 0xe0);
  dVar3 = *(double *)(iVar5 + 200);
  fVar2 = *(float *)(iVar5 + 0xd8);
  dVar4 = *(double *)(iVar5 + 0xb8);
  param_2[0xd] = (double)*(float *)(iVar5 + 0xdc) * dVar7 + *(double *)(iVar5 + 0xc0);
  param_2[0xc] = (double)fVar2 * dVar7 + dVar4;
  param_2[0xe] = (double)fVar1 * dVar7 + dVar3;
  FUN_004f8b00(&local_28,param_2);
  if ((*(uint *)((int)this + 0x80) & 0xc00) == 0) {
    FUN_004fadc0(param_2,(float *)((int)this + 0x30),param_2 + 0xc);
  }
  pdVar6 = *(double **)((int)this + 0x2c);
  if (pdVar6 != (double *)0x0) {
    dVar9 = local_28 * pdVar6[2];
    dVar8 = local_28 * pdVar6[1];
    dVar10 = (double)CONCAT44(local_10._4_4_,(undefined4)local_10);
    dVar7 = local_20 * *pdVar6;
    dVar4 = local_28 * *pdVar6;
    dVar3 = local_20 * pdVar6[1];
    local_28 = ((double)CONCAT44(local_10._4_4_,(undefined4)local_10) * *pdVar6 +
               local_20 * pdVar6[2] + local_28 * pdVar6[3]) -
               (double)CONCAT44(local_18._4_4_,(undefined4)local_18) * pdVar6[1];
    local_20 = ((double)CONCAT44(local_18._4_4_,(undefined4)local_18) * *pdVar6 +
               (double)CONCAT44(local_10._4_4_,(undefined4)local_10) * pdVar6[1] +
               local_20 * pdVar6[3]) - dVar9;
    local_10 = (((double)CONCAT44(local_10._4_4_,(undefined4)local_10) * pdVar6[3] - dVar4) - dVar3)
               - (double)CONCAT44(local_18._4_4_,(undefined4)local_18) * pdVar6[2];
    local_18 = (dVar10 * pdVar6[2] +
               dVar8 + (double)CONCAT44(local_18._4_4_,(undefined4)local_18) * pdVar6[3]) - dVar7;
    FUN_004f8b00(&local_28,param_2);
  }
  return;
}


