
/* ==== FUN_004597a0 @ 004597a0 ==== 
 * signature: void * __thiscall FUN_004597a0(void * this, int param_1, void * param_2)
 * body: 004597a0-004598f9;004598fd-004599f2;004599f6-00459a4b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004598fa-004598fc 004599f3-004599f5
 */

void * __thiscall FUN_004597a0(void *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *this_00;
  int iVar3;
  void **ppvVar4;
  float10 fVar5;
  longlong lVar6;
  undefined4 in_stack_0000003c;
  float fStack00000054;
  undefined4 auStackY_a4 [14];
  undefined4 uStackY_6c;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float afStack_18 [3];
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a83e;
  pvStack_c = ExceptionList;
  ppvVar4 = &param_2;
  puVar1 = auStackY_a4;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *ppvVar4;
    ppvVar4 = ppvVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  ExceptionList = &pvStack_c;
  FUN_0045e590(this);
  *(undefined ***)this = &PTR_FUN_00576868;
  local_4 = 0;
  iVar3 = FUN_004b75a0(&DAT_00712130,PTR_s_Par_Damage_005a513c);
  fStack00000054 = *(float *)(DAT_0073b168 + iVar3 * 9);
  local_20 = in_stack_0000003c;
  local_24 = 0;
  local_1c = 0;
  puVar1 = (undefined4 *)FUN_00459680((float *)&param_2,(float *)&stack0x00000048);
  local_30 = *puVar1;
  local_2c = puVar1[1];
  local_28 = puVar1[2];
  pvVar2 = operator_new(0x70);
  local_4._0_1_ = 1;
  param_2 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = &local_24;
    puVar8 = &local_30;
    uVar7 = 0x3f800000;
    uStackY_6c = 0x4598c5;
    fVar5 = FUN_004602e0(0.5,1.0);
    puVar1 = FUN_00459c00(pvVar2,(float)fVar5,uVar7,puVar8,puVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 **)((int)this + 0xac) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    pvVar2 = *(void **)((int)this + 0xac);
    fStack00000054 = (float)(int)fStack00000054 - 1.0;
    FUN_004602e0(0.0,fStack00000054);
    lVar6 = __ftol();
    param_2 = (void *)lVar6;
    FUN_0045e120(pvVar2,param_2);
    FUN_0045e110(pvVar2,iVar3);
    if (0 < param_1) {
      do {
        puVar1 = (undefined4 *)FUN_00459680(afStack_18,(float *)&stack0x00000048);
        local_30 = *puVar1;
        local_2c = puVar1[1];
        local_28 = puVar1[2];
        this_00 = operator_new(0x70);
        local_4._0_1_ = 2;
        if (this_00 == (void *)0x0) {
          puVar1 = (undefined4 *)0x0;
        }
        else {
          puVar1 = &local_24;
          puVar8 = &local_30;
          uVar7 = 0x3f800000;
          uStackY_6c = 0x4599c2;
          fVar5 = FUN_004602e0(0.5,1.0);
          puVar1 = FUN_00459c00(this_00,(float)fVar5,uVar7,puVar8,puVar1);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s___s___d_Not_enough_memory_to_cre_005a51dc);
        }
        FUN_0045dff0(pvVar2,(int)puVar1);
        FUN_004602e0(0.0,fStack00000054);
        FUN_0045e120(puVar1,param_2);
        FUN_0045e110(puVar1,iVar3);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    ExceptionList = pvStack_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Not_enough_memory_to_cre_005a5174);
}


