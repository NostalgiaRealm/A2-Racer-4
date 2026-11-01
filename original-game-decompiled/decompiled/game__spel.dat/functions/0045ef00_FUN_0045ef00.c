
/* ==== FUN_0045ef00 @ 0045ef00 ==== 
 * signature: undefined4 * __thiscall FUN_0045ef00(void * this, int param_1, void * param_2)
 * body: 0045ef00-0045f1c7
 */

undefined4 * __thiscall FUN_0045ef00(void *this,int param_1,void *param_2)

{
  void *pvVar1;
  undefined4 *this_00;
  int iVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  float10 fVar5;
  longlong lVar6;
  float in_stack_0000003c;
  float fStack00000048;
  float fStack00000054;
  undefined4 auStackY_88 [14];
  undefined4 uStackY_50;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056aa23;
  local_c = ExceptionList;
  ppvVar4 = &param_2;
  puVar3 = auStackY_88;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *ppvVar4;
    ppvVar4 = ppvVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  puVar3 = (undefined4 *)0x0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_005768f8;
  iVar2 = FUN_004b75a0(&DAT_00712130,s_par_paper_005a5c34);
  fStack00000054 = *(float *)(DAT_0073b168 + iVar2 * 9);
  fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
  local_24 = (float)fVar5;
  fStack00000048 = in_stack_0000003c + 0.12;
  local_20 = fStack00000048;
  fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
  local_1c = (float)fVar5;
  local_18 = local_24 * 4.0;
  fVar5 = FUN_004602e0(20.0,30.0);
  local_14 = (float)fVar5;
  local_10 = local_1c * 4.0;
  uStackY_50 = 0x45f016;
  pvVar1 = operator_new(0x70);
  local_4._0_1_ = 1;
  param_2 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    pfVar9 = &local_24;
    pfVar8 = &local_18;
    uVar7 = 0x3f800000;
    uStackY_50 = 0x45f046;
    fVar5 = FUN_004602e0(4.0,8.0);
    puVar3 = FUN_0045f480(pvVar1,(float)fVar5,uVar7,pfVar8,pfVar9);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 **)((int)this + 0xac) = puVar3;
  fStack00000054 = (float)(int)fStack00000054 - 1.0;
  FUN_004602e0(0.0,fStack00000054);
  lVar6 = __ftol();
  FUN_0045e120(puVar3,(int)lVar6);
  FUN_0045e110(puVar3,iVar2);
  if (1 < param_1) {
    param_1 = param_1 + -1;
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
      uStackY_50 = 0x45f12a;
      pvVar1 = operator_new(0x70);
      local_4._0_1_ = 2;
      param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        pfVar9 = &local_24;
        pfVar8 = &local_18;
        uVar7 = 0x3f800000;
        uStackY_50 = 0x45f15a;
        fVar5 = FUN_004602e0(4.0,8.0);
        this_00 = FUN_0045f480(pvVar1,(float)fVar5,uVar7,pfVar8,pfVar9);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045dff0(puVar3,(int)this_00);
      FUN_004602e0(0.0,fStack00000054);
      lVar6 = __ftol();
      FUN_0045e120(this_00,(int)lVar6);
      FUN_0045e110(this_00,iVar2);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  ExceptionList = local_c;
  return this;
}


