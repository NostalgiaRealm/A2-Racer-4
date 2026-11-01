
/* ==== FUN_0045a9f0 @ 0045a9f0 ==== 
 * signature: undefined4 * __thiscall FUN_0045a9f0(void * this, int param_1)
 * body: 0045a9f0-0045ac76
 */

undefined4 * __thiscall FUN_0045a9f0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  void *this_00;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  undefined4 in_stack_0000003c;
  float fStack00000048;
  undefined4 *puStack00000054;
  undefined4 auStackY_ac [14];
  undefined4 uStackY_74;
  undefined4 uVar12;
  float *pfVar13;
  float *pfVar14;
  float local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a8c8;
  local_c = ExceptionList;
  puVar6 = (undefined4 *)&stack0x00000008;
  puVar8 = auStackY_ac;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  ExceptionList = &local_c;
  FUN_0045e590(this);
  iVar9 = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00576898;
  iVar5 = FUN_004b75a0(&DAT_00712130,s_par_dirtpieces_005a5220);
  puStack00000054 = *(undefined4 **)(DAT_0073b168 + iVar5 * 9);
  *(undefined4 *)((int)this + 0x94) = 0x402ccccd;
  iVar7 = DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50;
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50);
  uVar2 = *(undefined4 *)(iVar7 + 4);
  fVar3 = *(float *)(iVar7 + 8);
  if (0 < param_1) {
    fStack00000048 = ABS(fVar3);
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    fVar4 = (float)(int)puStack00000054;
    do {
      fVar10 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_30 = (float)fVar10;
      local_2c = in_stack_0000003c;
      fVar10 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      local_28 = (float)fVar10;
      local_18 = local_30 * 4.0;
      fVar10 = FUN_004602e0(ABS(fVar3 * 0.4),fStack00000048);
      local_14 = (float)fVar10;
      local_10 = local_28 * 4.0;
      uStackY_74 = 0x45ab98;
      this_00 = operator_new(0x88);
      local_4._0_1_ = 1;
      if (this_00 == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        pfVar14 = &local_30;
        pfVar13 = &local_18;
        uVar12 = 0x3f800000;
        uStackY_74 = 0x45abc8;
        fVar10 = FUN_004602e0(2.0,8.0);
        puVar6 = FUN_0045af60(this_00,(float)fVar10,uVar12,pfVar13,pfVar14);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      puVar6[0x1c] = local_24;
      puVar6[0x1d] = local_20;
      puVar6[0x1e] = local_1c;
      puVar6[0x1f] = uVar1;
      puVar6[0x20] = uVar2;
      puVar6[0x21] = fVar3;
      if (iVar9 == 0) {
        *(undefined4 **)((int)this + 0xac) = puVar6;
        puStack00000054 = puVar6;
      }
      else {
        FUN_0045dff0(puStack00000054,(int)puVar6);
      }
      FUN_004602e0(0.0,fVar4 - 1.0);
      lVar11 = __ftol();
      FUN_0045e120(puVar6,(int)lVar11);
      FUN_0045e110(puVar6,iVar5);
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1);
  }
  ExceptionList = local_c;
  return this;
}


