
/* ==== FUN_00458f50 @ 00458f50 ==== 
 * signature: undefined4 * __thiscall FUN_00458f50(void * this, int param_1)
 * body: 00458f50-0045919f
 */

undefined4 * __thiscall FUN_00458f50(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float in_stack_0000003c;
  float fStack00000048;
  void *pvStack00000054;
  undefined4 auStackY_88 [14];
  undefined4 uStackY_50;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a7f3;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)&stack0x00000008;
  puVar3 = auStackY_88;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00576838;
  *(undefined4 *)((int)this + 0x94) = 0x41a00000;
  fVar5 = FUN_004602e0(-20.0,20.0);
  local_24 = (float)fVar5;
  fStack00000048 = in_stack_0000003c + 0.12;
  local_20 = fStack00000048;
  fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
  local_1c = (float)fVar5;
  local_18 = local_24 * 4.0;
  fVar5 = FUN_004602e0(20.0,30.0);
  local_14 = (float)fVar5;
  local_10 = local_1c * 4.0;
  uStackY_50 = 0x459044;
  pvVar1 = operator_new(0x78);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pfVar8 = &local_24;
    pfVar7 = &local_18;
    uVar6 = 0x3f800000;
    uStackY_50 = 0x459077;
    pvStack00000054 = pvVar1;
    fVar5 = FUN_004602e0(4.0,8.0);
    puVar2 = FUN_004593e0(pvVar1,(float)fVar5,uVar6,pfVar7,pfVar8);
  }
  local_4._0_1_ = 0;
  *(undefined4 **)((int)this + 0xac) = puVar2;
  if (1 < param_1) {
    pvStack00000054 = (void *)(param_1 + -1);
    do {
      fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_24 = (float)fVar5;
      local_20 = fStack00000048;
      fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_1c = (float)fVar5;
      local_18 = local_24 * 4.0;
      fVar5 = FUN_004602e0(20.0,30.0);
      local_14 = (float)fVar5;
      local_10 = local_1c * 4.0;
      uStackY_50 = 0x459126;
      pvVar1 = operator_new(0x78);
      local_4._0_1_ = 2;
      if (pvVar1 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        pfVar8 = &local_24;
        pfVar7 = &local_18;
        uVar6 = 0x3f800000;
        uStackY_50 = 0x459156;
        fVar5 = FUN_004602e0(4.0,8.0);
        puVar3 = FUN_004593e0(pvVar1,(float)fVar5,uVar6,pfVar7,pfVar8);
      }
      local_4._0_1_ = 0;
      FUN_0045dff0(puVar2,(int)puVar3);
      pvStack00000054 = (void *)((int)pvStack00000054 + -1);
    } while (pvStack00000054 != (void *)0x0);
  }
  ExceptionList = local_c;
  return this;
}


