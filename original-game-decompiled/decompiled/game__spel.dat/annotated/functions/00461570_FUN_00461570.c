
/* ==== FUN_00461570 @ 00461570 ==== 
 * signature: undefined4 * __thiscall FUN_00461570(void * this, int param_1)
 * body: 00461570-00461794
 */

undefined4 * __thiscall FUN_00461570(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  undefined4 in_stack_0000003c;
  float fStack00000048;
  undefined4 *puStack00000054;
  undefined4 auStackY_98 [14];
  undefined4 uStackY_60;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ab28;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)&stack0x00000008;
  puVar3 = auStackY_98;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  iVar4 = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_0057692c;
  iVar2 = FUN_004b75a0(&DAT_00712130,s_par_water_005a5fd0);
  puStack00000054 = *(undefined4 **)(DAT_0073b168 + iVar2 * 9);
  *(undefined4 *)((int)this + 0x94) = 0x3f333333;
  if (0 < param_1) {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    fStack00000048 = (float)(int)puStack00000054 - 1.0;
    do {
      fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_30 = (float)fVar5;
      local_2c = in_stack_0000003c;
      fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_28 = (float)fVar5;
      local_18 = local_30 + local_30;
      fVar5 = FUN_004602e0(1.0,2.0);
      local_14 = (float)fVar5;
      local_10 = local_28 + local_28;
      uStackY_60 = 0x4616b4;
      this_00 = operator_new(0x7c);
      local_4._0_1_ = 1;
      if (this_00 == (void *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        pfVar9 = &local_30;
        pfVar8 = &local_18;
        uVar7 = 0x3f800000;
        uStackY_60 = 0x4616e4;
        fVar5 = FUN_004602e0(1.0,2.0);
        puVar1 = FUN_004619f0(this_00,(float)fVar5,uVar7,pfVar8,pfVar9);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      fVar5 = FUN_004602e0(3.0,4.0);
      local_1c = (float)fVar5;
      puVar1[0x1c] = local_24;
      puVar1[0x1d] = local_20;
      puVar1[0x1e] = local_1c;
      if (iVar4 == 0) {
        *(undefined4 **)((int)this + 0xac) = puVar1;
        puStack00000054 = puVar1;
      }
      else {
        FUN_0045dff0(puStack00000054,(int)puVar1);
      }
      FUN_004602e0(0.0,fStack00000048);
      lVar6 = __ftol();
      FUN_0045e120(puVar1,(int)lVar6);
      FUN_0045e110(puVar1,iVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  ExceptionList = local_c;
  return this;
}


