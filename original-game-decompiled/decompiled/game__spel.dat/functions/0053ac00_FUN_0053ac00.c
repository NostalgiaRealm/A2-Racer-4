
/* ==== FUN_0053ac00 @ 0053ac00 ==== 
 * signature: undefined __thiscall FUN_0053ac00(void * this, int param_1, int param_2)
 * body: 0053ac00-0053b076
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053ac00(void *this,int param_1,int param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  void *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint uStack_18;
  undefined8 uStack_10;
  
  iVar3 = *(int *)(*(int *)((int)this + (*(uint *)((int)this + 0x14) >> 8 & 3) * 0x1c + 0x28) + 0xa4
                  );
  iVar4 = *(int *)(*(int *)((int)this +
                           ((*(uint *)((int)this + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x28) + 0xa4);
  iVar5 = *(int *)(*(int *)((int)this + 0x28) + 0x18);
  fVar1 = *(float *)(iVar3 + 0x1c0) + *(float *)(iVar4 + 0x1c0);
  local_50 = (double)fVar1;
  local_38 = (double)(*(float *)(iVar4 + 0x1b8) + *(float *)(iVar3 + 0x1b8) + fVar1);
  if (*(int *)((int)this + 4) != 0xffff) {
    FUN_0050bf70(*(void **)(iVar5 + 4),(int)this);
    *(undefined4 *)((int)this + 4) = 0xffff;
  }
  uVar9 = *(uint *)((int)this + 0x14);
  uVar8 = uVar9 >> 0x16 & 0xff;
  fVar1 = *(float *)(&DAT_0074d528 + uVar8 * 4);
  if (*(double *)(iVar5 + 0xc0) * local_38 * 2.0999999046325684 + (double)fVar1 <
      (double)*(float *)((int)this + 0x54)) {
    if (param_1 == 0) {
      return;
    }
    FUN_0053b570(*(void **)(iVar5 + 0x10),(int)this);
    FUN_0053b780((int)this,*(float *)((int)this + 0x54) - fVar1);
    return;
  }
  local_48 = ((double)*(float *)((int)this + 0x68) * (double)*(float *)(iVar4 + 0xa4) +
             (double)*(float *)((int)this + 0x6c) * (double)*(float *)(iVar4 + 0xa8) +
             (double)*(float *)((int)this + 0x70) * (double)*(float *)(iVar4 + 0xac)) -
             ((double)*(float *)((int)this + 0x68) * (double)*(float *)(iVar3 + 0xa4) +
             (double)*(float *)((int)this + 0x6c) * (double)*(float *)(iVar3 + 0xa8) +
             (double)*(float *)((int)this + 0x70) * (double)*(float *)(iVar3 + 0xac));
  dVar2 = (double)*(float *)(iVar3 + 0x1a8) * (double)*(float *)((int)this + 0x68) +
          (double)*(float *)(iVar3 + 0x1ac) * (double)*(float *)((int)this + 0x6c) +
          (double)*(float *)(iVar3 + 0x1b0) * (double)*(float *)((int)this + 0x70);
  dVar7 = (double)*(float *)(iVar4 + 0x1a8) * (double)*(float *)((int)this + 0x68) +
          (double)*(float *)(iVar4 + 0x1ac) * (double)*(float *)((int)this + 0x6c) +
          (double)*(float *)(iVar4 + 0x1b0) * (double)*(float *)((int)this + 0x70);
  local_40 = SQRT(1.0010000467300415 - dVar7 * dVar7) * (double)*(float *)(iVar4 + 0x1c0) +
             SQRT(1.0010000467300415 - dVar2 * dVar2) * (double)*(float *)(iVar3 + 0x1c0) + local_48
  ;
  local_28 = *(undefined4 *)(iVar5 + 0x120);
  fVar1 = *(float *)((int)this + 0x54);
  uStack_24 = *(undefined4 *)(iVar5 + 0x124);
  local_20 = *(undefined4 *)(iVar5 + 0x128);
  local_1c = *(undefined4 *)(iVar5 + 300);
  if ((local_40 < (double)_DAT_0074d634) && (local_40 < 1e-19)) {
    return;
  }
  if ((*(double *)(iVar5 + 0x128) - *(double *)(iVar5 + 0x120)) * local_40 +
      (double)*(float *)(&DAT_0074d528 + uVar8 * 4) <= (double)fVar1) {
    return;
  }
  if ((uVar9 & 0x3000) == 0x1000) {
    return;
  }
  if (((uVar9 & 0x3fc00000) != 0) &&
     (bVar6 = 2 < DAT_0074d64c, DAT_0074d64c = DAT_0074d64c + 1, bVar6)) {
    uVar9 = *(uint *)((int)this + 0x14);
    *(uint *)((int)this + 0x14) = ((uVar9 & 0xffc00000) - 1 ^ uVar9) & 0x3fc00000 ^ uVar9;
    DAT_0074d64c = 0;
  }
  local_30 = this;
  local_2c = iVar5;
  (*(code *)(&DAT_0074d694)
            [(int)*(short *)((int)this +
                            ((*(uint *)((int)this + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x32) +
             *(short *)((int)this + (*(uint *)((int)this + 0x14) >> 8 & 3) * 0x1c + 0x32) * 4])
            (&local_50);
  if (uStack_18 == 0) {
    return;
  }
  if (9.999999974752427e-07 <=
      (double)CONCAT44(uStack_10._4_4_,(undefined4)uStack_10) - (double)CONCAT44(uStack_24,local_28)
     ) goto LAB_0053b028;
  if (param_2 == 0) {
    uStack_10 = (double)CONCAT44(uStack_24,local_28);
    goto LAB_0053b028;
  }
  fVar1 = fVar1 - _DAT_0074d520;
  if ((param_2 == 2) || ((uStack_18 & 0xf) != 0)) {
    if (fVar1 < 1e-12) {
      dVar2 = *(double *)(iVar5 + 0xc0) * 0.0010000000474974513 + *(double *)(iVar5 + 0x120);
      local_58 = SUB84(dVar2,0);
      uStack_54 = (undefined4)((ulonglong)dVar2 >> 0x20);
      uStack_10._0_4_ = local_58;
      goto LAB_0053b009;
    }
    uStack_10 = (double)((float)*(double *)(iVar5 + 0xc0) * 0.0001 +
                        fVar1 / (float)local_38 + (float)*(double *)(iVar5 + 0x120));
  }
  else if (fVar1 < 1e-12) {
    uStack_10 = *(double *)(iVar5 + 0xc0) * 9.999999747378752e-06 + *(double *)(iVar5 + 0x120);
  }
  else {
    dVar2 = (double)((float)*(double *)(iVar5 + 0xc0) * 1e-07 +
                    (fVar1 * 0.1) / (float)local_38 + (float)*(double *)(iVar5 + 0x120));
    local_58 = SUB84(dVar2,0);
    uStack_54 = (undefined4)((ulonglong)dVar2 >> 0x20);
    uStack_10._0_4_ = local_58;
LAB_0053b009:
    uStack_10 = (double)CONCAT44(uStack_54,(undefined4)uStack_10);
  }
  if (0.0 <= uStack_10 - *(double *)(iVar5 + 0x128)) {
    return;
  }
LAB_0053b028:
  uVar9 = FUN_0050dfd0(*(void **)(*(int *)(iVar5 + 4) + 8),(int)this,
                       (float)((float10)uStack_10 - (float10)*(double *)(*(int *)(iVar5 + 4) + 0x18)
                              ));
  *(uint *)((int)this + 4) = uVar9;
  *(uint *)((int)this + 0x14) =
       (*(uint *)((int)this + 0x14) ^ uStack_18) & 0xff ^ *(uint *)((int)this + 0x14);
  return;
}


