
/* ==== FUN_0050f290 @ 0050f290 ==== 
 * signature: undefined __thiscall FUN_0050f290(void * this, int param_1, int param_2)
 * body: 0050f290-0050f7ea
 */

void __thiscall FUN_0050f290(void *this,int param_1,int param_2)

{
  void *this_00;
  void *this_01;
  void *this_02;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_220;
  float local_21c;
  float local_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_200 [4];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0 [4];
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0 [4];
  float local_190 [4];
  double local_180;
  float local_178 [4];
  float local_168 [4];
  float local_158 [4];
  float local_148 [4];
  float local_138 [4];
  float local_128 [4];
  float local_118 [4];
  double local_108 [16];
  undefined8 local_88 [16];
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x20) + 0xa0) + param_1 * 4);
  this_01 = *(void **)(*piVar1 + 0xa4);
  this_02 = *(void **)(**(int **)(*(int *)((int)this + 0x20) + 0x98) + 0xa4);
  puVar3 = (undefined4 *)((int)this_02 + 0x128);
  pdVar6 = local_108;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  FUN_004fa460((undefined4 *)((int)this_02 + 0x128),(double *)(piVar1 + 2),local_108);
  FUN_00402d00(local_88,0x20,3,FUN_0043e110);
  this_00 = (void *)((int)this_02 + 0x128);
  FUN_004fa5b0(this_00,local_108,local_88);
  local_200[0] = 0.0;
  local_200[1] = 0.0;
  local_200[2] = 0.0;
  local_200[param_2 % 3] = 1.0;
  FUN_004fae60(this_00,local_200,local_148);
  FUN_004fafa0(local_108,local_148,local_138);
  local_1c0 = -local_200[0];
  local_1bc = -local_200[1];
  local_1b8 = -local_200[2];
  FUN_004fae60(this_00,&local_1c0,local_168);
  FUN_004fafa0(local_108,local_168,local_118);
  local_1a0[0] = 0.0;
  local_1a0[1] = 0.0;
  local_1a0[2] = 0.0;
  FUN_004fac90(local_88,local_1a0,local_190);
  if (param_2 < 3) {
    FUN_004f42f0(this_01,local_1a0,local_138,local_148,&local_220,local_158);
    FUN_004fafa0(this_00,&local_220,&local_1e0);
    local_1f0 = 0.0;
    local_1ec = 0.0;
    local_1e8 = 0.0;
    FUN_004f42f0(this_02,local_190,&local_1c0,local_168,local_1d0,&local_210);
    FUN_004f3390(this_02,local_190,local_1d0,&local_210,local_178);
    FUN_004fafa0(this_00,local_178,&local_1b0);
  }
  else {
    FUN_004f4390((int)this_01,local_138,1.0,&local_220);
    FUN_004fae60(local_88,&local_220,&local_1f0);
    local_1e0 = 0.0;
    local_1dc = 0.0;
    local_1d8 = 0.0;
    FUN_004f4390((int)this_02,local_200,-1.0,&local_210);
    local_1d0[0] = 0.0;
    local_1d0[1] = 0.0;
    local_1d0[2] = 0.0;
    FUN_004f3390(this_02,local_190,local_1d0,&local_210,local_178);
    FUN_004fafa0(this_00,local_178,&local_1b0);
  }
  iVar2 = 0;
  if (0 < param_2) {
    piVar1 = (int *)(*(int *)((int)this + 0x20) + 0x28);
    do {
      if (*piVar1 == 0) {
        iVar2 = iVar2 + 1;
      }
      piVar1 = piVar1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  iVar5 = *(int *)((int)this + 0x20);
  iVar2 = *(int *)((int)this + 0x28) * param_1 + iVar2;
  iVar4 = 0;
  local_234 = 0;
  if (*(short *)(iVar5 + 0x9e) != 0) {
    do {
      if (local_234 == param_1) {
        local_230 = local_1e0 - local_1b0;
        local_22c = local_1dc - local_1ac;
        local_228 = local_1d8 - local_1a8;
        local_220 = local_1f0 - local_210;
        local_21c = local_1ec - local_20c;
        local_218 = local_1e8 - local_208;
      }
      else {
        FUN_004fab40((void *)((int)this_02 + 0x128),
                     (double *)
                     (*(int *)(**(int **)(*(int *)(iVar5 + 0xa0) + local_234 * 4) + 0xa4) + 0x188),
                     local_128);
        FUN_004f3390(this_02,local_128,local_1d0,&local_210,local_158);
        FUN_004fafa0((void *)((int)this_02 + 0x128),local_158,&local_230);
        local_22c = local_22c * -1.0;
        local_228 = local_228 * -1.0;
        local_180 = (double)local_228;
        local_230 = local_230 * -1.0;
        local_220 = -local_210;
        local_21c = -local_20c;
        local_218 = -local_208;
      }
      iVar5 = iVar4;
      if (*(int *)(*(int *)((int)this + 0x20) + 0x28) == 0) {
        iVar5 = iVar4 + 1;
        FUN_00543f50(this,(double)local_230,iVar2,iVar4);
      }
      iVar4 = iVar5;
      if (*(int *)(*(int *)((int)this + 0x20) + 0x2c) == 0) {
        iVar4 = iVar5 + 1;
        FUN_00543f50(this,(double)local_22c,iVar2,iVar5);
      }
      iVar5 = iVar4;
      if (*(int *)(*(int *)((int)this + 0x20) + 0x30) == 0) {
        iVar5 = iVar4 + 1;
        FUN_00543f50(this,(double)local_228,iVar2,iVar4);
      }
      iVar4 = iVar5;
      if (*(int *)(*(int *)((int)this + 0x20) + 0x34) == 0) {
        iVar4 = iVar5 + 1;
        FUN_00543f50(this,(double)local_220,iVar2,iVar5);
      }
      iVar5 = iVar4;
      if (*(int *)(*(int *)((int)this + 0x20) + 0x38) == 0) {
        iVar5 = iVar4 + 1;
        FUN_00543f50(this,(double)local_21c,iVar2,iVar4);
      }
      iVar4 = iVar5;
      if (*(int *)(*(int *)((int)this + 0x20) + 0x3c) == 0) {
        iVar4 = iVar5 + 1;
        FUN_00543f50(this,(double)local_218,iVar2,iVar5);
      }
      iVar5 = *(int *)((int)this + 0x20);
      local_234 = local_234 + 1;
    } while (local_234 < (int)(uint)*(ushort *)(iVar5 + 0x9e));
  }
  return;
}


