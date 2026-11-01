
/* ==== FUN_004f8bf0 @ 004f8bf0 ==== 
 * signature: undefined __thiscall FUN_004f8bf0(void * this, double * param_1)
 * body: 004f8bf0-004f8d5e
 */

void __thiscall FUN_004f8bf0(void *this,double *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  int local_34 [3];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  dVar3 = param_1[10] + *param_1 + param_1[5];
  if (0.0 < dVar3) {
    dVar3 = SQRT(dVar3 + 1.0);
    *(double *)((int)this + 0x18) = dVar3 * 0.5;
    dVar3 = 0.5 / dVar3;
    *(double *)this = (param_1[9] - param_1[6]) * dVar3;
    *(double *)((int)this + 8) = (param_1[2] - param_1[8]) * dVar3;
    *(double *)((int)this + 0x10) = (param_1[4] - param_1[1]) * dVar3;
    FUN_004f8f20(this);
    return;
  }
  local_34[0] = 1;
  local_34[1] = 2;
  local_34[2] = 0;
  uVar4 = (uint)(*param_1 < param_1[5]);
  if (param_1[uVar4 * 5] < param_1[10]) {
    uVar4 = 2;
  }
  iVar1 = local_34[uVar4];
  iVar2 = local_34[iVar1];
  dVar3 = SQRT((param_1[uVar4 * 5] - (param_1[iVar2 * 5] + param_1[iVar1 * 5])) + 1.0);
  (&local_28)[uVar4] = dVar3 * 0.5;
  if (dVar3 != 0.0) {
    dVar3 = 0.5 / dVar3;
  }
  local_10 = (param_1[iVar1 + iVar2 * 4] - param_1[iVar2 + iVar1 * 4]) * dVar3;
  (&local_28)[iVar1] = (param_1[uVar4 + iVar1 * 4] + param_1[iVar1 + uVar4 * 4]) * dVar3;
  (&local_28)[iVar2] = (param_1[uVar4 + iVar2 * 4] + param_1[iVar2 + uVar4 * 4]) * dVar3;
  *(undefined4 *)this = (undefined4)local_28;
  *(undefined4 *)((int)this + 4) = local_28._4_4_;
  *(undefined4 *)((int)this + 8) = local_20;
  *(undefined4 *)((int)this + 0xc) = uStack_1c;
  *(undefined4 *)((int)this + 0x10) = local_18;
  *(undefined4 *)((int)this + 0x14) = local_14;
  *(undefined4 *)((int)this + 0x18) = (undefined4)local_10;
  *(undefined4 *)((int)this + 0x1c) = local_10._4_4_;
  FUN_004f8f20(this);
  return;
}


