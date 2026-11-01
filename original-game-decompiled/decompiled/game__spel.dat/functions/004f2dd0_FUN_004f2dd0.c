
/* ==== FUN_004f2dd0 @ 004f2dd0 ==== 
 * signature: undefined __thiscall FUN_004f2dd0(void * this, int param_1, int param_2)
 * body: 004f2dd0-004f30f1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f2dd0(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  uint *this_00;
  float fVar5;
  double dVar6;
  float *pfVar7;
  int iVar8;
  float unaff_EBX;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  double local_124;
  double dStack_11c;
  int iStack_114;
  undefined1 auStack_10c [100];
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 auStack_8c [136];
  
  FUN_00402d00(auStack_10c + 4,0x20,3,FUN_0043e110);
  local_164 = *(undefined4 *)((int)this + 4);
  local_130 = 0;
  local_12c = 0;
  iVar8 = *(int *)(param_2 + 100);
  local_138 = 0;
  local_134 = 0;
  local_140 = 0;
  local_13c = 0;
  local_128 = 0;
  local_124 = (double)CONCAT44(local_124._4_4_,0x3ff00000);
  if (iVar8 == 0) {
    (**(code **)(**(int **)((int)this + 0x8c) + 4))(&local_160);
  }
  else {
    local_15c = (float)*(double *)(iVar8 + 0x68);
    uStack_16c = *(undefined4 *)(iVar8 + 0x74);
    local_160 = (float)*(double *)(iVar8 + 0x60);
    local_158 = (float)*(double *)(iVar8 + 0x70);
  }
  FUN_004f8b00(&local_140,(double *)(auStack_10c + 4));
  local_a8 = (double)local_160;
  local_a0 = (double)local_15c;
  local_98 = (double)local_158;
  (**(code **)(*(int *)this + 8))(auStack_10c + 4);
  this_00 = *(uint **)((int)this + 0xa4);
  if (iStack_168 == 2) {
    (**(code **)(**(int **)((int)this + 0x8c) + 8))(&local_164,&stack0xfffffe88,&uStack_16c);
  }
  else if (iStack_168 == 3) {
    unaff_EBX = 0.0;
    uStack_16c = 0;
  }
  else {
    _DAT_00000000 = 0;
  }
  fVar1 = *(float *)((int)this + 0xa0) + unaff_EBX;
  FUN_004f3c00(this_00,fVar1,uStack_16c);
  dVar4 = *(double *)(param_2 + 0x18);
  fVar5 = (float)dVar4;
  if (*(double *)(param_2 + 0x18) < 1e-08) {
    fVar5 = 1.0;
    dVar4 = 1.0;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar3 = *(uint *)(param_2 + 0x28);
    fVar1 = *(float *)(param_2 + 0x2c);
    this_00[5] = *(uint *)(param_2 + 0x24);
    this_00[6] = uVar3;
  }
  else {
    if (iStack_168 == 2) {
      (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(&fStack_154);
      fVar5 = (float)dVar4;
    }
    else if (iStack_168 == 3) {
      fStack_154 = fVar1 * fVar1 * 0.4;
      fStack_150 = fStack_154;
      fStack_14c = fStack_154;
    }
    else {
      _DAT_00000000 = 0;
    }
    fVar1 = *(float *)(param_2 + 0x28);
    fVar2 = *(float *)(param_2 + 0x2c);
    this_00[5] = (uint)(fStack_154 * *(float *)(param_2 + 0x24) * fVar5);
    this_00[6] = (uint)(fStack_150 * fVar1 * fVar5);
    fVar1 = fStack_14c * fVar2 * fVar5;
  }
  pfVar7 = (float *)(this_00 + 5);
  this_00[7] = (uint)fVar1;
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar8 = 3;
    fVar1 = (float)this_00[1] * fVar5 * 0.002;
    do {
      if (*pfVar7 < fVar1) {
        *pfVar7 = fVar1;
      }
      pfVar7 = pfVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  this_00[8] = (uint)fVar5;
  this_00[0x11] = (uint)(float)*(double *)(param_2 + 0x38);
  dVar4 = *(double *)(param_2 + 0x48);
  dVar6 = *(double *)(param_2 + 0x50);
  this_00[9] = (uint)(float)*(double *)(param_2 + 0x40);
  this_00[10] = (uint)(float)dVar4;
  this_00[0xb] = (uint)(float)dVar6;
  FUN_00402d00(auStack_8c,0x20,3,FUN_0043e110);
  FUN_004faa90(auStack_8c,(undefined8 *)auStack_10c);
  this_00[0x25] = 0;
  this_00[0x26] = 0;
  this_00[0x27] = 0;
  this_00[0x29] = 0;
  this_00[0x2a] = 0;
  this_00[0x2b] = 0;
  FUN_004f4a60(this_00);
  FUN_004f4b30(this_00,(double *)auStack_10c);
  iStack_114 = param_1;
  local_124 = *(double *)(param_1 + 0x128) - *(double *)(param_1 + 0x120);
  if (local_124 <= 1.000000013351432e-10) {
    dStack_11c = 9999999866.485682;
  }
  else {
    dStack_11c = 1.0 / local_124;
  }
  FUN_004f4560(this_00,(int)&local_124);
  return;
}


