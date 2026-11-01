
/* ==== FUN_004fc030 @ 004fc030 ==== 
 * signature: undefined __thiscall FUN_004fc030(void * this, double * param_1)
 * body: 004fc030-004fc1e5
 */

void __thiscall FUN_004fc030(void *this,double *param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  double local_160;
  undefined8 local_154;
  float local_14c;
  undefined4 uStack_148;
  double *local_144;
  double local_140;
  float local_138 [12];
  double local_108 [16];
  double local_88 [16];
  
  piVar2 = (int *)((int)this + 0x14);
  iVar4 = 4;
  pfVar3 = local_138;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 0xc;
    iVar4 = iVar4 + -1;
    *pfVar3 = *(float *)(iVar1 + 0xa8);
    pfVar3 = pfVar3 + 1;
  } while (iVar4 != 0);
  local_144 = (double *)&local_154;
  pfVar5 = local_138;
  pfVar3 = (float *)((int)this + 0x28);
  iVar4 = 0;
  do {
    pfVar5 = pfVar5 + 4;
    local_140 = (double)CONCAT44(local_140._4_4_,*(undefined4 *)((int)pfVar3[7] + 0xa8));
    FUN_004fadc0((void *)(*(int *)((int)pfVar3[-5] + 0xa8) + 0x128),pfVar3,
                 (double *)((int)local_88 + iVar4));
    FUN_004fadc0((void *)(local_140._0_4_ + 0x128),pfVar3 + 0xc,(double *)((int)local_108 + iVar4));
    *pfVar5 = (float)((float10)*(double *)((int)local_88 + iVar4) -
                     (float10)*(double *)((int)local_108 + iVar4));
    pfVar5[1] = (float)((float10)*(double *)((int)local_88 + iVar4 + 8) -
                       (float10)*(double *)((int)local_108 + iVar4 + 8));
    pfVar5[2] = (float)((float10)*(double *)((int)local_88 + iVar4 + 0x10) -
                       (float10)*(double *)((int)local_108 + iVar4 + 0x10));
    fVar6 = FUN_004f9680(pfVar5);
    iVar4 = iVar4 + 0x20;
    pfVar3 = pfVar3 + 0x18;
    *local_144 = (double)fVar6;
    local_144 = local_144 + 1;
  } while (iVar4 < 0x40);
  pfVar3 = local_138 + 1;
  pfVar5 = local_138 + 6;
  iVar4 = 0;
  local_160 = ((double)CONCAT44(uStack_148,local_14c) -
              (double)CONCAT44(local_154._4_4_,(float)local_154)) *
              (double)*(float *)((int)this + 0xd4) * *param_1;
  do {
    local_154._0_4_ = pfVar5[-2] * (float)local_160;
    local_154._4_4_ = pfVar5[-1] * (float)local_160;
    local_14c = *pfVar5 * (float)local_160;
    if (*(int *)((int)*pfVar3 + 0x5c) * 0x1000000 < 0x8000000) {
      FUN_004f41b0((void *)*pfVar3,(double *)((int)local_108 + iVar4),(float *)&local_154);
    }
    if (*(int *)((int)pfVar3[-1] + 0x5c) * 0x1000000 < 0x8000000) {
      local_154._4_4_ = local_154._4_4_ * -1.0;
      local_14c = local_14c * -1.0;
      local_140 = (double)local_14c;
      local_154._0_4_ = (float)local_154 * -1.0;
      FUN_004f41b0((void *)pfVar3[-1],(double *)((int)local_88 + iVar4),(float *)&local_154);
    }
    local_160 = local_160 * -1.0;
    iVar4 = iVar4 + 0x20;
    pfVar5 = pfVar5 + 4;
    pfVar3 = pfVar3 + 2;
  } while (iVar4 < 0x40);
  return;
}


