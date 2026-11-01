
/* ==== FUN_005020a0 @ 005020a0 ==== 
 * signature: undefined __thiscall FUN_005020a0(void * this, undefined4 * param_1, double * param_2, int param_3)
 * body: 005020a0-005023e4
 */

void __thiscall FUN_005020a0(void *this,undefined4 *param_1,double *param_2,int param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  void *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  longlong lVar15;
  float local_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  double local_28;
  double local_20;
  double local_18;
  
  this_00 = *(void **)(*(int *)this + 0xc);
  uVar6 = *(undefined4 *)((int)this_00 + 0x124);
  uVar7 = *(undefined4 *)((int)this_00 + 0x120);
  dVar5 = *(double *)((int)this_00 + 0x120);
  FUN_004f83b0(this_00,uVar7,uVar6);
  fVar2 = (float)((float10)dVar5 - (float10)*(double *)(*(int *)this + 0x68));
  local_60 = (float)*(double *)((int)this_00 + 0xc0);
  if (fVar2 < local_60) {
    fVar3 = (float)*(double *)((int)this_00 + 200);
  }
  else {
    fVar3 = 1.0 / fVar2;
    local_60 = fVar2;
  }
  *(float *)(*(int *)this + 0x70) = fVar3;
  iVar10 = *(int *)this;
  *(undefined4 *)(iVar10 + 0x68) = uVar7;
  *(undefined4 *)(iVar10 + 0x6c) = uVar6;
  puVar12 = param_1;
  puVar13 = (undefined4 *)(*(int *)this + 0x108);
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  FUN_004f9130(&local_48,(double *)(*(int *)this + 0xe8),(double *)(*(int *)this + 0x108));
  puVar12 = param_1;
  puVar13 = (undefined4 *)(*(int *)this + 0xe8);
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar10 = *(int *)this;
  *(undefined4 *)(iVar10 + 0x68) = *(undefined4 *)((int)this_00 + 0x130);
  *(undefined4 *)(iVar10 + 0x6c) = *(undefined4 *)((int)this_00 + 0x134);
  iVar10 = *(int *)this;
  local_20 = param_2[1] - *(double *)(iVar10 + 0xc0);
  local_18 = param_2[2] - *(double *)(iVar10 + 200);
  local_28 = *param_2 - *(double *)(iVar10 + 0xb8);
  fVar14 = FUN_004f9470(&local_28);
  fVar2 = (float)fVar14;
  iVar10 = *(int *)this;
  uVar6 = *(undefined4 *)(param_2 + 2);
  dVar5 = param_2[1];
  uVar7 = *(undefined4 *)((int)param_2 + 0x14);
  *(double *)(iVar10 + 0xb8) = *param_2;
  *(undefined4 *)(iVar10 + 200) = uVar6;
  *(undefined4 *)(iVar10 + 0xcc) = uVar7;
  *(double *)(iVar10 + 0xc0) = dVar5;
  iVar10 = *(int *)this;
  *(undefined4 *)(iVar10 + 0xd8) = 0;
  *(undefined4 *)(iVar10 + 0xdc) = 0;
  *(undefined4 *)(iVar10 + 0xe0) = 0;
  iVar10 = *(int *)this;
  *(undefined4 *)(iVar10 + 0xa4) = 0;
  *(undefined4 *)(iVar10 + 0xa8) = 0;
  *(undefined4 *)(iVar10 + 0xac) = 0;
  iVar10 = *(int *)this;
  dVar5 = param_2[1];
  uVar6 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined4 *)((int)param_2 + 0x14);
  *(double *)(iVar10 + 0x188) = *param_2;
  *(undefined4 *)(iVar10 + 0x198) = uVar6;
  *(double *)(iVar10 + 400) = dVar5;
  *(undefined4 *)(iVar10 + 0x19c) = uVar7;
  FUN_004f8b00(param_1,(double *)(*(int *)this + 0x128));
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)this + 0x1b8) = 0;
    local_38 = 0;
    local_34 = 0;
    local_40 = 0;
    local_3c = 0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_30 = 0;
    local_2c = 0x3ff00000;
  }
  else {
    *(float *)(*(int *)this + 0x1b8) = fVar2 * *(float *)(*(int *)this + 0x70);
  }
  FUN_00501ec0(this,(double *)&local_48);
  iVar10 = *(int *)this;
  fVar3 = *(float *)(iVar10 + 0x1c0);
  fVar4 = *(float *)(iVar10 + 8);
  uVar11 = (uint)*(ushort *)(iVar10 + 0x4e);
  do {
    uVar11 = uVar11 - 1;
    if ((int)uVar11 < 0) {
      *(undefined4 *)(*(int *)this + 0x1b8) = 0;
      *(undefined4 *)(*(int *)this + 0x1bc) = 0;
      *(undefined4 *)(*(int *)this + 0x1c0) = 0;
      return;
    }
    uVar8 = *(uint *)(*(int *)(*(int *)this + 0x50) + uVar11 * 4);
    *(undefined4 *)(uVar8 + 0x50) = 0;
    *(undefined4 *)(uVar8 + 0x54) = 0;
    fVar9 = fVar3 * fVar4 * local_60 + fVar2 + *(float *)(uVar8 + 0x60);
    pdVar1 = (double *)(uVar8 + 0x48);
    *(float *)(uVar8 + 0x60) = fVar9;
    *(float *)(uVar8 + 0x58) = fVar9;
    *(float *)(uVar8 + 0x5c) = fVar2 + *(float *)(uVar8 + 0x5c);
    if (0x7ffffff < *(int *)(uVar8 + 0x80) * 0x1000000) {
      FUN_004fe450(uVar8);
      FUN_004f2890(uVar8);
      FUN_004f2840(uVar8);
    }
    if (param_3 == 0) {
      FUN_0053a580(*(void **)((int)this_00 + 0x10),uVar8);
    }
    fVar9 = *(float *)(uVar8 + 0x70) - *(float *)(uVar8 + 0x60);
    iVar10 = 100;
    while (fVar9 < 0.0) {
      (**(code **)(**(int **)((uint)*(ushort *)(uVar8 + 0x76) * 0x10 + 0xc + *(int *)(uVar8 + 0x6c))
                  + 4))(pdVar1,fVar9);
      if (iVar10 < 0) break;
      iVar10 = iVar10 + -1;
      fVar9 = *(float *)(uVar8 + 0x70) - *(float *)(uVar8 + 0x60);
    }
    if ((double)*(int *)(uVar8 + 100) < *pdVar1) {
      FUN_0053cd60((int)pdVar1);
      lVar15 = __ftol();
      *(int *)(uVar8 + 100) = (int)lVar15;
    }
  } while( true );
}


