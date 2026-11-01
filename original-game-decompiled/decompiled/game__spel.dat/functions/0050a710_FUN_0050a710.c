
/* ==== FUN_0050a710 @ 0050a710 ==== 
 * signature: undefined __thiscall FUN_0050a710(void * this, int param_1, int param_2, double * param_3, double * param_4)
 * body: 0050a710-0050a829
 */

void __thiscall FUN_0050a710(void *this,int param_1,int param_2,double *param_3,double *param_4)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar3 = *(int *)(param_1 + 0xa4);
  iVar4 = *(int *)(param_2 + 0xa4);
  dVar5 = (double)*(float *)(iVar3 + 0x1c0) + (double)*(float *)(iVar3 + 0x1b8) + 1e-19;
  dVar7 = (double)*(float *)(iVar4 + 0x1c0) + (double)*(float *)(iVar4 + 0x1b8) + 1e-19;
  dVar6 = dVar7 + dVar5;
  if (*(float *)(iVar4 + 4) <= *(float *)(iVar3 + 4)) {
    fVar1 = *(float *)(iVar4 + 4);
  }
  else {
    fVar1 = *(float *)(iVar3 + 4);
  }
  dVar2 = dVar6 * *(double *)((int)this + 0x10);
  dVar8 = (double)fVar1 * *(double *)((int)this + 0x18);
  if (dVar8 < dVar2) {
    dVar2 = dVar8;
  }
  if (dVar2 < *(double *)((int)this + 0x20)) {
    dVar2 = *(double *)((int)this + 0x20);
  }
  if (*(double *)((int)this + 0x28) < dVar2) {
    dVar2 = *(double *)((int)this + 0x28);
  }
  dVar2 = dVar2 - *(double *)(*(int *)((int)this + 0xc) + 0xc0) * dVar6;
  dVar6 = dVar6 * *(double *)((int)this + 0x30);
  if (dVar2 < dVar6) {
    dVar2 = dVar6;
  }
  dVar5 = dVar7 * 0.20000000298023224 + dVar5;
  dVar7 = dVar5 * 0.18000000715255737 + dVar7;
  dVar2 = (1.0 / (dVar7 + dVar5)) * dVar2;
  *param_3 = dVar2 * dVar5;
  *param_4 = dVar2 * dVar7;
  return;
}


