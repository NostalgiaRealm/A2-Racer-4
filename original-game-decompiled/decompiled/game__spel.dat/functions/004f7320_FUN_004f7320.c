
/* ==== FUN_004f7320 @ 004f7320 ==== 
 * signature: int * __thiscall FUN_004f7320(void * this, int param_1, int * param_2, char * param_3, int param_4)
 * body: 004f7320-004f7ae6
 */

int * __thiscall FUN_004f7320(void *this,int param_1,int *param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  short sVar8;
  undefined4 *local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 *local_118;
  undefined4 local_114;
  void *local_108;
  undefined4 local_104 [24];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_84 [3];
  undefined4 local_78;
  undefined4 *local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_005731db;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  local_108 = this;
  FUN_004fd0e0((undefined4 *)((int)this + 0x38));
  FUN_004f7300((undefined4 *)((int)this + 0x98));
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined2 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined2 *)((int)this + 0xfc) = 0;
  *(undefined2 *)((int)this + 0xfe) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined2 *)((int)this + 0x104) = 0;
  *(undefined2 *)((int)this + 0x106) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined2 *)((int)this + 0x150) = 0;
  *(undefined2 *)((int)this + 0x152) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined2 *)((int)this + 0x158) = 0;
  *(undefined2 *)((int)this + 0x15a) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  local_c._0_1_ = 4;
  local_c._1_3_ = 0;
  puVar3 = this;
  for (iVar5 = 0x5c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_004f7310((undefined4 *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x144) = 5;
  *(void **)((int)this + 0x38) = this;
  iVar5 = param_2[3];
  *(int *)((int)this + 0xac) = iVar5;
  if (iVar5 == 0) {
    local_130 = operator_new(8);
    local_c._0_1_ = 5;
    if (local_130 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_004fd1b0(local_130,1);
    }
    local_c._0_1_ = 4;
    *(undefined4 *)((int)this + 0xac) = uVar1;
  }
  iVar5 = param_2[10];
  *(int *)((int)this + 0xa8) = iVar5;
  if (iVar5 == 0) {
    local_130 = operator_new(0x28);
    local_c._0_1_ = 6;
    if (local_130 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0050c740(local_130,1);
    }
    local_c._0_1_ = 4;
    *(int **)((int)this + 0xa8) = piVar2;
  }
  iVar5 = param_2[4];
  *(int *)((int)this + 0x18) = iVar5;
  if (iVar5 == 0) {
    local_130 = operator_new(8);
    local_c._0_1_ = 7;
    if (local_130 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_004fd0a0(local_130,1);
    }
    local_c._0_1_ = 4;
    *(undefined4 *)((int)this + 0x18) = uVar1;
  }
  iVar5 = param_2[7];
  *(int *)((int)this + 0x20) = iVar5;
  if (iVar5 == 0) {
    local_130 = operator_new(8);
    local_c._0_1_ = 8;
    if (local_130 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0050c3c0(local_130,1);
    }
    local_c._0_1_ = 4;
    *(undefined4 *)((int)this + 0x20) = uVar1;
  }
  iVar5 = param_2[8];
  *(int *)((int)this + 0x24) = iVar5;
  if (iVar5 == 0) {
    local_130 = operator_new(0x14);
    local_c._0_1_ = 9;
    if (local_130 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0050c340(local_130,1);
    }
    local_c._0_1_ = 4;
    *(undefined4 *)((int)this + 0x24) = uVar1;
  }
  local_130 = (undefined4 *)param_2[9];
  if (local_130 == (undefined4 *)0x0) {
    local_130 = operator_new(4);
    local_c._0_1_ = 10;
    if (local_130 == (undefined4 *)0x0) {
      local_130 = (undefined4 *)0x0;
    }
    else {
      local_130 = FUN_0050c2e0(local_130);
    }
    local_c._0_1_ = 4;
    if (*(ushort *)((int)this + 0x158) <= *(ushort *)((int)this + 0x15a)) {
      FUN_004f6060((ushort *)((int)this + 0x158));
    }
    *(undefined4 **)(*(int *)((int)this + 0x15c) + (uint)*(ushort *)((int)this + 0x15a) * 4) =
         local_130;
  }
  else {
    if (*(ushort *)((int)this + 0x158) <= *(ushort *)((int)this + 0x15a)) {
      FUN_004f6060((ushort *)((int)this + 0x158));
    }
    *(undefined4 **)(*(int *)((int)this + 0x15c) + (uint)*(ushort *)((int)this + 0x15a) * 4) =
         local_130;
  }
  *(short *)((int)this + 0x15a) = *(short *)((int)this + 0x15a) + 1;
  *(int *)((int)this + 0x2c) = param_2[5];
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_005783d0;
  }
  *(undefined4 **)this = puVar3;
  local_128 = 0;
  uStack_124 = 0;
  local_120 = 0xc0000000;
  uStack_11c = 0x4023a8f5;
  local_118 = (undefined4 *)0x0;
  local_114 = 0;
  FUN_004f7f30(this,(double *)&local_128);
  iVar5 = *(int *)this;
  *(float *)(iVar5 + 4) = (float)(double)CONCAT44(uStack_124,local_128);
  local_130 = local_118;
  *(float *)(iVar5 + 8) = (float)(double)CONCAT44(uStack_11c,local_120);
  uStack_12c = local_114;
  *(float *)(iVar5 + 0xc) = (float)(double)CONCAT44(local_114,local_118);
  if (*(ushort *)(param_1 + 4) <= *(ushort *)(param_1 + 6)) {
    FUN_004f6060((ushort *)(param_1 + 4));
  }
  *(void **)(*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 6) * 4) = this;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  puVar3 = operator_new(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = this;
  }
  *(undefined4 **)((int)this + 0xa0) = puVar3;
  FUN_004f7af0(this,0xf07c1f08,0x3f8f07c1);
  local_130 = operator_new(0x18);
  local_c._0_1_ = 0xb;
  if (local_130 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_004f60e0(local_130,this);
  }
  local_c._0_1_ = 4;
  *(undefined4 **)((int)this + 0xc) = puVar3;
  local_130 = operator_new(0x1b0);
  local_c._0_1_ = 0xc;
  if (local_130 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005004e0(local_130,this);
  }
  local_c._0_1_ = 4;
  *(undefined4 *)((int)this + 8) = uVar1;
  local_130 = operator_new(0x20);
  local_c._0_1_ = 0xd;
  if (local_130 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0050be20(local_130);
  }
  local_c._0_1_ = 4;
  *(undefined4 **)((int)this + 4) = puVar3;
  local_130 = operator_new(0x10);
  local_c._0_1_ = 0xe;
  if (local_130 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0053b9e0(local_130,this);
  }
  local_c._0_1_ = 4;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  local_130 = operator_new(0x2c0);
  local_c._0_1_ = 0xf;
  if (local_130 == (undefined4 *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0050adb0((int)local_130);
  }
  local_c._0_1_ = 4;
  *(int *)((int)this + 0x14) = iVar5;
  local_130 = operator_new(0x30);
  local_c._0_1_ = 0x10;
  if (local_130 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0050a910(local_130);
  }
  *(undefined4 *)((int)this + 0x9c) = uVar1;
  local_c._0_1_ = 4;
  *(int *)((int)this + 0x1c) = param_2[0xb];
  if (param_2[0xb] == 0) {
    local_130 = operator_new(0x60);
    local_c._0_1_ = 0x11;
    if (local_130 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0050a660(local_130,this,1);
    }
    *(undefined4 *)((int)this + 0x1c) = uVar1;
  }
  local_c._0_1_ = 4;
  puVar3 = (undefined4 *)param_2[6];
  if (puVar3 == (undefined4 *)0x0) {
    local_130 = operator_new(0xa8);
    local_c._0_1_ = 0x12;
    if (local_130 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0050a5a0(local_130);
    }
  }
  local_c._0_1_ = 4;
  *(undefined4 **)((int)this + 0x28) = puVar3;
  local_130 = operator_new(0xc);
  local_c._0_1_ = 0x13;
  if (local_130 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_004fe500(local_130,*param_2);
  }
  *(int **)((int)this + 0xa4) = piVar2;
  *(int *)((int)this + 0x118) = param_1;
  local_130 = *(undefined4 **)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0x120) = 0;
  uStack_12c = *(undefined4 *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 **)((int)this + 0x128) = local_130;
  local_c._0_1_ = 4;
  *(undefined4 *)((int)this + 0x138) = 1;
  *(undefined4 *)((int)this + 300) = uStack_12c;
  local_130 = operator_new(0x14);
  local_c._0_1_ = 0x14;
  if (local_130 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_004f5c30(local_130);
  }
  local_c._0_1_ = 4;
  *(undefined4 **)((int)this + 0xb0) = puVar3;
  local_130 = operator_new(0x14);
  local_c._0_1_ = 0x15;
  if (local_130 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_004f5c30(local_130);
  }
  *(undefined4 **)((int)this + 0xb4) = puVar3;
  iVar5 = param_2[2];
  local_c._0_1_ = 4;
  sVar8 = (short)(iVar5 >> 1);
  FUN_004f5b20(*(void **)((int)this + 0xb0),(undefined4 *)param_2[1],sVar8);
  FUN_004f5b20(*(void **)((int)this + 0xb4),(undefined4 *)((iVar5 >> 1) + param_2[1]),sVar8);
  *(undefined2 *)((int)this + 0x140) = 10;
  fVar6 = (float10)log2((float10)0.8999999761581421);
  fVar7 = (float10)1.4426950408889634 *
          (float10)0.6931471805599453 * fVar6 * (float10)*(double *)((int)this + 0xc0);
  fVar6 = ROUND(fVar7);
  fVar7 = (float10)f2xm1(fVar7 - fVar6);
  fVar6 = (float10)fscale((float10)1 + fVar7,fVar6);
  *(double *)((int)this + 0x148) = (double)fVar6;
  FUN_0053cbd0();
  FUN_00542c10();
  pcVar4 = FUN_00501030(param_3);
  *(int *)((int)this + 0x110) = param_4;
  *(char **)((int)this + 0x10c) = pcVar4;
  *(undefined4 *)((int)this + 0x114) = 10;
  local_130 = (undefined4 *)0x3f800000;
  FUN_004f54b0(local_84);
  local_c._0_1_ = 0x17;
  FUN_004f5480(local_84,s_static_object_005b8f04);
  local_78 = 1;
  FUN_004fa010(local_104);
  local_20 = local_104;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_128 = 0;
  uStack_124 = 0;
  local_120 = 0;
  uStack_11c = 0;
  local_118 = (undefined4 *)0x0;
  local_114 = 0;
  uVar1 = FUN_004f84d0(this,(float *)&local_130,local_84,(undefined4 *)0x0,(undefined8 *)&local_128)
  ;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  local_c = CONCAT31(local_c._1_3_,4);
  FUN_004f5510(local_84);
  *(undefined4 *)((int)this + 0x16c) = 0x1e240;
  ExceptionList = pvStack_14;
  return this;
}


