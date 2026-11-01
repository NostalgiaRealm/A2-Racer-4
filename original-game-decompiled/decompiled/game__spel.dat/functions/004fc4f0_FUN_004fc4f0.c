
/* ==== FUN_004fc4f0 @ 004fc4f0 ==== 
 * signature: undefined4 * __thiscall FUN_004fc4f0(void * this, undefined4 param_1, undefined4 * param_2)
 * body: 004fc4f0-004fcc1f
 */

undefined4 * __thiscall FUN_004fc4f0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 *local_428;
  undefined4 *local_424;
  ushort local_420;
  ushort local_41e;
  undefined2 uStack_41c;
  undefined2 uStack_41a;
  float local_418 [4];
  ushort local_408;
  ushort local_406;
  undefined2 uStack_404;
  undefined2 uStack_402;
  int local_400;
  int local_3fc;
  undefined1 *local_3f8;
  undefined1 *local_3f4;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  float local_3dc;
  undefined1 *local_3d8;
  int local_3d4;
  undefined1 *local_3d0;
  undefined1 *local_3cc;
  undefined4 local_3c8;
  void *local_3c0;
  int local_3bc;
  undefined1 *local_3b8;
  int local_3b4;
  float local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_384;
  undefined4 local_380;
  undefined1 local_37c [40];
  undefined1 local_354 [40];
  undefined1 local_32c [40];
  undefined1 local_304 [360];
  int local_19c [10];
  undefined1 local_174 [360];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057354f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3c0 = this;
  FUN_004fcff0(this);
  *(undefined ***)this = &PTR_FUN_00578568;
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2[6];
  iVar10 = 0;
  if (0 < *(int *)((int)this + 8)) {
    puVar6 = (undefined4 *)((int)this + 0xd8);
    puVar7 = param_2 + 0x25;
    do {
      iVar10 = iVar10 + 1;
      puVar6[-0x31] = puVar7[-0x1e];
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar10 < *(int *)((int)this + 8));
  }
  pvVar5 = operator_new(0xa8);
  local_4._0_1_ = 1;
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0050e460(pvVar5,param_2[2],param_2[3],param_2[4],param_2[5]);
  }
  *(undefined4 **)((int)this + 0x3c) = puVar6;
  local_408 = 0;
  local_406 = 0;
  uStack_404 = 0;
  uStack_402 = 0;
  local_420 = 0;
  local_41e = 0;
  uStack_41c = 0;
  uStack_41a = 0;
  iVar10 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0 < *(int *)((int)this + 8)) {
    local_428 = (undefined4 *)((int)this + 0x14);
    puVar6 = param_2 + 0x33;
    do {
      uVar1 = *local_428;
      if (local_408 <= local_406) {
        FUN_004f6060(&local_408);
      }
      *(undefined4 *)(CONCAT22(uStack_402,uStack_404) + (uint)local_406 * 4) = uVar1;
      local_406 = local_406 + 1;
      if (local_420 <= local_41e) {
        FUN_004f6060(&local_420);
      }
      *(undefined4 **)(CONCAT22(uStack_41a,uStack_41c) + (uint)local_41e * 4) = puVar6;
      local_41e = local_41e + 1;
      iVar10 = iVar10 + 1;
      local_428 = local_428 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar10 < *(int *)((int)this + 8));
  }
  FUN_0050e6f0(*(void **)((int)this + 0x3c),*(int *)((int)this + 4),*(void **)((int)this + 0x10),
               (int)&local_408,(int)&local_420);
  iVar10 = *(int *)((int)this + 0x3c);
  local_424 = (undefined4 *)0x0;
  if (0 < *(int *)((int)this + 8)) {
    puVar6 = param_2 + 0x65;
    piVar9 = (int *)((int)this + 0x14);
    piVar11 = param_2 + 0x35;
    local_400 = 0;
    do {
      FUN_0050d4a0(&local_3bc);
      local_3a4 = *puVar6;
      local_3a8 = puVar6[-10];
      local_3dc = (float)piVar11[-2];
      local_384 = puVar6[10];
      local_380 = puVar6[0x14];
      local_3d8 = (undefined1 *)piVar11[-1];
      local_3d4 = *piVar11;
      local_3ac = 0;
      local_3a0 = 0;
      local_3b0 = 500.0;
      (&local_3dc)[*(int *)(iVar10 + 0x84)] = (&local_3dc)[*(int *)(iVar10 + 0x84)] - 500.0;
      FUN_004fb1b0(local_32c + local_400,*(int *)((int)this + 0x10),&local_3dc);
      FUN_004fb220((int *)((int)local_19c + local_400),*piVar9,0.0,0.0,0.0);
      local_3b0 = local_3b0 - (float)puVar6[0x1e];
      local_3b8 = local_32c + local_400;
      local_3b4 = (int)local_19c + local_400;
      puVar7 = FUN_004f81b0(*(void **)((int)this + 4),&local_3bc);
      piVar9[0x16] = (int)puVar7;
      FUN_004fb110(&local_3fc);
      local_418[0] = 0.0;
      local_418[1] = 0.0;
      local_418[2] = 0.0;
      local_3e8 = param_2[((uint)local_424 >> 1 & 1) + 0x93];
      local_418[*(int *)(iVar10 + 0x80)] = (float)puVar6[-0x40];
      FUN_004fb1b0(local_354,*piVar9,local_418);
      iVar2 = *piVar9;
      local_418[*(int *)(iVar10 + 0x80)] = -(float)puVar6[-0x40];
      FUN_004fb1b0(local_37c,iVar2,local_418);
      local_3f4 = local_37c;
      local_3f8 = local_354;
      piVar8 = FUN_004f8040(*(void **)((int)this + 4),&local_3fc);
      piVar9[0xc] = (int)piVar8;
      piVar9[0x27] = 0;
      local_424 = (undefined4 *)((int)local_424 + 1);
      puVar6 = puVar6 + 1;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 4;
      local_400 = local_400 + 0x28;
    } while ((int)local_424 < *(int *)((int)this + 8));
  }
  iVar12 = 0;
  FUN_004fb110(&local_3fc);
  iVar2 = *(int *)((int)this + 0x10);
  local_418[0] = 0.0;
  local_418[1] = 0.0;
  local_418[2] = 0.0;
  local_3e8 = 0x439d1463;
  local_418[*(int *)(iVar10 + 0x80)] = 1.0;
  FUN_004fb1b0(local_37c,iVar2,local_418);
  iVar2 = *(int *)((int)this + 0x10);
  local_418[*(int *)(iVar10 + 0x80)] = -1.0;
  FUN_004fb1b0(local_354,iVar2,local_418);
  local_3f4 = local_354;
  local_3f8 = local_37c;
  local_3f0 = 0;
  piVar9 = FUN_004f8040(*(void **)((int)this + 4),&local_3fc);
  *(int **)((int)this + 0x40) = piVar9;
  *(undefined4 *)((int)this + 0x128) = param_2[0x2f];
  if (*(int *)((int)this + 8) != *(int *)((int)this + 0xc)) {
    local_428 = (undefined4 *)((int)this + 0x94);
    local_424 = param_2 + 0x8e;
    do {
      FUN_004fb130(&local_3dc);
      local_3d8 = local_32c + iVar12;
      local_3cc = local_174 + iVar12;
      local_3c8 = *local_424;
      local_3d4 = (int)local_19c + iVar12;
      local_3d0 = local_304 + iVar12;
      puVar6 = FUN_004f8220(*(void **)((int)this + 4),&local_3dc);
      iVar12 = iVar12 + 0x50;
      *local_428 = puVar6;
      local_424 = local_424 + 1;
      local_428 = local_428 + 1;
    } while (iVar12 < 0xa0);
  }
  iVar2 = *(int *)(*(int *)((int)this + 4) + 0x30);
  FUN_004fb150(&local_3fc);
  pvVar5 = *(void **)((int)this + 0x10);
  local_418[0] = 0.0;
  local_418[1] = 0.0;
  local_418[2] = 0.0;
  local_418[*(int *)(iVar10 + 0x84)] = (float)param_2[0x32] + local_418[*(int *)(iVar10 + 0x84)];
  FUN_004fb2a0(local_37c,pvVar5,local_418);
  iVar12 = *(int *)(iVar10 + 0x84);
  iVar3 = *(int *)((int)this + 4);
  local_418[iVar12] = 1e+08;
  if (0.0 < *(double *)(iVar3 + 0xd0 + iVar12 * 8)) {
    local_418[iVar12] = -1e+08;
  }
  FUN_004fb1b0(local_354,iVar2,local_418);
  local_3f8 = local_37c;
  local_3f4 = local_354;
  local_3e8 = 1;
  local_3e4 = 0;
  puVar6 = FUN_004f8100(*(void **)((int)this + 4),&local_3fc);
  *(undefined4 **)((int)this + 0xa8) = puVar6;
  local_3dc = 0.0;
  local_3d8 = (undefined1 *)0x0;
  local_3d4 = 0;
  FUN_004fb150(&local_3fc);
  (&local_3dc)[*(int *)(iVar10 + 0x84)] = (float)param_2[0x31];
  FUN_004fb2a0(local_37c,*(void **)((int)this + 0x10),&local_3dc);
  iVar10 = *(int *)(iVar10 + 0x84);
  iVar12 = *(int *)((int)this + 4);
  local_418[0] = 0.0;
  local_418[1] = 0.0;
  local_418[2] = 0.0;
  local_418[iVar10] = 1e+08;
  if (0.0 < *(double *)(iVar12 + 0xd0 + iVar10 * 8)) {
    local_418[iVar10] = -1e+08;
  }
  FUN_004fb1b0(local_354,iVar2,local_418);
  local_3f0 = param_2[0x30];
  local_3f8 = local_37c;
  local_3f4 = local_354;
  local_3e8 = 1;
  local_3e4 = 0;
  puVar6 = FUN_004f8100(*(void **)((int)this + 4),&local_3fc);
  *(undefined4 **)((int)this + 0xac) = puVar6;
  iVar10 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      FUN_004fc310(this,iVar10,0.0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x13c) = 0xbf800000;
  FUN_004fc3d0(this,0.0);
  pfVar4 = (float *)CONCAT22(uStack_41a,uStack_41c);
  if (pfVar4 != local_418) {
    if (pfVar4 != (float *)0x0) {
      FUN_00559d4e(pfVar4);
      uStack_41c = 0;
      uStack_41a = 0;
    }
    local_420 = 0;
  }
  piVar9 = (int *)CONCAT22(uStack_402,uStack_404);
  local_41e = 0;
  if ((piVar9 != &local_400) && (piVar9 != (int *)0x0)) {
    FUN_00559d4e(piVar9);
  }
  ExceptionList = local_c;
  return this;
}


