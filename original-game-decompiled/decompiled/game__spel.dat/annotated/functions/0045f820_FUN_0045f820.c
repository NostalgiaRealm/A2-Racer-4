
/* ==== FUN_0045f820 @ 0045f820 ==== 
 * signature: undefined4 * __thiscall FUN_0045f820(void * this, int param_1, float param_2, float param_3, float param_4)
 * body: 0045f820-0045fc6f
 */

undefined4 * __thiscall
FUN_0045f820(void *this,int param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float *in_stack_00000054;
  float afStackY_70 [14];
  undefined4 uStackY_38;
  float fVar11;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pfVar1 = in_stack_00000054;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056aa89;
  local_c = ExceptionList;
  pfVar8 = &param_2;
  pfVar9 = afStackY_70;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00576908;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  uVar2 = FUN_004b7400(&DAT_00712130,s_S_SFX_PCX_005a5d0c);
  *(undefined4 *)((int)this + 0x9c) = uVar2;
  fVar10 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
  fStack00000048 = (float)fVar10;
  fStack0000004c = 0.0;
  fVar10 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
  fStack00000050 = (float)fVar10;
  fVar10 = FUN_004602e0(fStack00000048 * -15.0,fStack00000048 * 15.0);
  param_2 = (float)(fVar10 * (float10)*in_stack_00000054);
  fVar10 = FUN_004602e0(2.0,5.0);
  param_3 = (float)(fVar10 * (float10)in_stack_00000054[1]);
  fVar10 = FUN_004602e0(fStack00000050 * -15.0,fStack00000050 * 15.0);
  param_4 = (float)(fVar10 * (float10)in_stack_00000054[2]);
  pvVar3 = operator_new(0x74);
  local_4._0_1_ = 1;
  in_stack_00000054 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = &stack0x00000048;
    pfVar8 = &param_2;
    fVar10 = FUN_004602e0(0.5,2.0);
    fVar11 = (float)fVar10;
    uStackY_38 = 0x45f997;
    fVar10 = FUN_004602e0(0.0,1.0);
    puVar4 = FUN_0045ff20(pvVar3,(float)fVar10,fVar11,pfVar8,puVar4);
  }
  local_4._0_1_ = 0;
  *(undefined4 **)((int)this + 0xac) = puVar4;
  fStack00000048 = param_2 * 0.25 + fStack00000048;
  fStack0000004c = param_3 * 0.25 + fStack0000004c;
  fStack00000050 = param_4 * 0.25 + fStack00000050;
  fVar10 = FUN_00460220((int)puVar4);
  param_3 = (float)(fVar10 * (float10)0.25 + (float10)param_3);
  pvVar3 = operator_new(0x74);
  local_4._0_1_ = 2;
  in_stack_00000054 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = &stack0x00000048;
    pfVar8 = &param_2;
    fVar10 = FUN_004602e0(0.5,2.0);
    fVar11 = (float)fVar10;
    fVar10 = FUN_0045e0c0(*(int *)((int)this + 0xac));
    puVar5 = FUN_0045ff20(pvVar3,(float)fVar10,fVar11,pfVar8,puVar5);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045dff0(puVar4,(int)puVar5);
  pvVar3 = (void *)FUN_0045e0d0((int)puVar4);
  if (1 < param_1 / 2) {
    in_stack_00000054 = (float *)(param_1 / 2 + -1);
    do {
      fVar10 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      fStack00000048 = (float)fVar10;
      fStack0000004c = 0.0;
      fVar10 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      fStack00000050 = (float)fVar10;
      fVar10 = FUN_004602e0(fStack00000048 * -15.0,fStack00000048 * 15.0);
      param_2 = (float)(fVar10 * (float10)*pfVar1);
      fVar10 = FUN_004602e0(2.0,5.0);
      param_3 = (float)(fVar10 * (float10)pfVar1[1]);
      fVar10 = FUN_004602e0(fStack00000050 * -15.0,fStack00000050 * 15.0);
      param_4 = (float)(fVar10 * (float10)pfVar1[2]);
      pvVar6 = operator_new(0x74);
      local_4._0_1_ = 3;
      if (pvVar6 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = &stack0x00000048;
        pfVar8 = &param_2;
        fVar10 = FUN_004602e0(0.5,2.0);
        fVar11 = (float)fVar10;
        uStackY_38 = 0x45fb72;
        fVar10 = FUN_004602e0(0.0,1.0);
        puVar4 = FUN_0045ff20(pvVar6,(float)fVar10,fVar11,pfVar8,puVar4);
      }
      local_4._0_1_ = 0;
      FUN_0045dff0(pvVar3,(int)puVar4);
      pvVar3 = (void *)FUN_0045e0d0((int)pvVar3);
      fStack00000048 = param_2 * 0.25 + fStack00000048;
      fStack0000004c = param_3 * 0.25 + fStack0000004c;
      fStack00000050 = param_4 * 0.25 + fStack00000050;
      fVar10 = FUN_00460220((int)pvVar3);
      param_3 = (float)(fVar10 * (float10)0.25 + (float10)param_3);
      pvVar6 = operator_new(0x74);
      local_4._0_1_ = 4;
      if (pvVar6 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = &stack0x00000048;
        pfVar8 = &param_2;
        fVar10 = FUN_004602e0(0.5,2.0);
        fVar11 = (float)fVar10;
        fVar10 = FUN_0045e0c0((int)pvVar3);
        puVar4 = FUN_0045ff20(pvVar6,(float)fVar10,fVar11,pfVar8,puVar4);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045dff0(pvVar3,(int)puVar4);
      pvVar3 = (void *)FUN_0045e0d0((int)pvVar3);
      in_stack_00000054 = (float *)((int)in_stack_00000054 + -1);
    } while (in_stack_00000054 != (float *)0x0);
  }
  ExceptionList = local_c;
  return this;
}


