
/* ==== FUN_0045bfe0 @ 0045bfe0 ==== 
 * signature: undefined4 * __thiscall FUN_0045bfe0(void * this, int param_1, float param_2)
 * body: 0045bfe0-0045c379
 */

undefined4 * __thiscall FUN_0045bfe0(void *this,int param_1,float param_2)

{
  float *pfVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  longlong lVar9;
  float in_stack_0000003c;
  uint uStack00000048;
  float *in_stack_00000054;
  float afStackY_90 [14];
  undefined4 uStackY_58;
  undefined4 uVar10;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pfVar1 = in_stack_00000054;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a913;
  local_c = ExceptionList;
  pfVar6 = &param_2;
  pfVar7 = afStackY_90;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005768bc;
  iVar4 = FUN_004b75a0(&DAT_00712130,s_par_Leaf_005a5308);
  uStack00000048 = *(int *)(DAT_0073b168 + iVar4 * 9);
  *in_stack_00000054 = -in_stack_00000054[2];
  in_stack_00000054[2] = -in_stack_00000054[2];
  fVar8 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
  local_24 = (float)fVar8;
  local_20 = in_stack_0000003c + 0.12;
  fVar8 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
  local_1c = (float)fVar8;
  local_18 = local_24 + local_24;
  fVar8 = FUN_004602e0(5.0,10.0);
  local_14 = (float)fVar8;
  local_10 = local_1c + local_1c;
  uStackY_58 = 0x45c101;
  pvVar2 = operator_new(0x70);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    in_stack_00000054 = (float *)0x0;
  }
  else {
    pfVar6 = &local_24;
    pfVar7 = &local_18;
    uVar10 = 0x3f800000;
    uStackY_58 = 0x45c134;
    in_stack_00000054 = pvVar2;
    fVar8 = FUN_004602e0(4.0,8.0);
    in_stack_00000054 = (float *)FUN_0045c630(pvVar2,(float)fVar8,uVar10,pfVar7,pfVar6);
  }
  puVar3 = in_stack_00000054;
  local_4 = (uint)local_4._1_3_ << 8;
  *(float **)((int)this + 0xac) = in_stack_00000054;
  param_2 = (float)(int)uStack00000048 - 1.0;
  FUN_004602e0(0.0,param_2);
  lVar9 = __ftol();
  FUN_0045e120(puVar3,(int)lVar9);
  FUN_0045e110(puVar3,iVar4);
  uStack00000048 = 1;
  if (1 < param_1) {
    do {
      fVar8 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_24 = (float)fVar8;
      local_20 = in_stack_0000003c + 0.12;
      fVar8 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_1c = (float)fVar8;
      uVar5 = uStack00000048 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar5 == 0) {
        fVar8 = FUN_004602e0(local_24 * 20.0,local_24 * 40.0);
        local_18 = (float)-(fVar8 * (float10)*pfVar1);
        fVar8 = FUN_004602e0(7.5,10.0);
        local_14 = (float)fVar8;
        fVar8 = FUN_004602e0(local_1c * 20.0,local_1c * 40.0);
        fVar8 = -(fVar8 * (float10)pfVar1[2]);
      }
      else {
        fVar8 = FUN_004602e0(local_24 * 20.0,local_24 * 40.0);
        local_18 = (float)(fVar8 * (float10)*pfVar1);
        fVar8 = FUN_004602e0(7.5,10.0);
        local_14 = (float)fVar8;
        fVar8 = FUN_004602e0(local_1c * 20.0,local_1c * 40.0);
        fVar8 = fVar8 * (float10)pfVar1[2];
      }
      local_10 = (float)fVar8;
      pvVar2 = operator_new(0x70);
      local_4._0_1_ = 2;
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        pfVar6 = &local_24;
        pfVar7 = &local_18;
        uVar10 = 0x3f800000;
        uStackY_58 = 0x45c2fe;
        fVar8 = FUN_004602e0(4.0,8.0);
        puVar3 = FUN_0045c630(pvVar2,(float)fVar8,uVar10,pfVar7,pfVar6);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045dff0(in_stack_00000054,(int)puVar3);
      FUN_004602e0(0.0,param_2);
      lVar9 = __ftol();
      FUN_0045e120(puVar3,(int)lVar9);
      FUN_0045e110(puVar3,iVar4);
      uStack00000048 = uStack00000048 + 1;
    } while ((int)uStack00000048 < param_1);
  }
  ExceptionList = local_c;
  return this;
}


