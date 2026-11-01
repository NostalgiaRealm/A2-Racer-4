
/* ==== FUN_004b9fa0 @ 004b9fa0 ==== 
 * signature: undefined4 __thiscall FUN_004b9fa0(void * this, char * param_1, undefined4 param_2)
 * body: 004b9fa0-004ba079;004ba07d-004ba0a1;004ba0ab-004ba0ce;004ba0d8-004ba113;004ba11d-004ba13b;004ba145-004ba168;004ba172-004ba1ae;004ba1b8-004ba1d6;004ba1e0-004ba202;004ba20c-004ba248;004ba252-004ba270;004ba274-004ba297;004ba29b-004ba31d;004ba321-004ba344;004ba348-004ba36b;004ba36f-004ba3af;004ba3b3-004ba415;004ba419-004ba45e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ba07a-004ba07c 004ba0a2-004ba0aa 004ba0cf-004ba0d7 004ba114-004ba11c 004ba13c-004ba144 004ba169-004ba171 004ba1af-004ba1b7 004ba1d7-004ba1df 004ba203-004ba20b 004ba249-004ba251 004ba271-004ba273 004ba298-004ba29a 004ba31e-004ba320 004ba345-004ba347 004ba36c-004ba36e 004ba3b0-004ba3b2 004ba416-004ba418
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b9fa0(void *this,char *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 in_stack_ffffff8c;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 in_stack_ffffffa8;
  uint uVar10;
  undefined4 in_stack_ffffffac;
  undefined4 in_stack_ffffffb0;
  undefined4 in_stack_ffffffb4;
  uint in_stack_ffffffb8;
  uint in_stack_ffffffbc;
  uint uVar11;
  uint uVar12;
  uint local_28;
  uint local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar11 = 0x4b9fb6;
  FUN_004c1ae0((void *)((int)this + 0x14),param_1);
  *(undefined4 *)((int)this + 0x2c) = param_2;
  uVar12 = 0x4b9fc2;
  puVar2 = (undefined4 *)FUN_004c2a50();
  puVar5 = (undefined4 *)&stack0xffffffa8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004c8690(in_stack_ffffffa8,(byte)in_stack_ffffffac,in_stack_ffffffb0,in_stack_ffffffb4,
               in_stack_ffffffb8,in_stack_ffffffbc,uVar11,uVar12);
  puVar2 = (undefined4 *)FUN_004c2a50();
  puVar8 = &local_28;
  puVar3 = FUN_004b96c0(param_1,puVar8,&local_24,(int *)0x1800,puVar2);
  *(uint **)((int)this + 4) = puVar3;
  uVar7 = 0x4b9ff8;
  puVar2 = (undefined4 *)FUN_004c2a50();
  puVar5 = (undefined4 *)&stack0xffffffa8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004c8690(in_stack_ffffffa8,(byte)in_stack_ffffffac,in_stack_ffffffb0,in_stack_ffffffb4,
               in_stack_ffffffb8,in_stack_ffffffbc,uVar11,uVar12);
  *(uint *)((int)this + 0x24) = local_28;
  *(uint *)((int)this + 0x28) = local_24;
  *(float *)((int)this + 0x34) = DAT_0073b1f8;
  *(float *)((int)this + 0x3c) = _DAT_0073b200 + DAT_0073b1f8;
  *(float *)((int)this + 0x38) = DAT_0073b1fc;
  *(float *)((int)this + 0x40) = _DAT_0073b204 + DAT_0073b1fc;
  iVar4 = DAT_0073b1b4;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if (DAT_0073b1b4 < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*DAT_0073b1c0 == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  lVar6 = __ftol();
  uStack_20 = (undefined4)lVar6;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*DAT_0073b1c0 == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  lVar6 = __ftol();
  uStack_18 = (undefined4)lVar6;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*DAT_0073b1c0 == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  lVar6 = __ftol();
  uStack_1c = (undefined4)lVar6;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*DAT_0073b1c0 == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  lVar6 = __ftol();
  uStack_14 = (undefined4)lVar6;
  FUN_004c3fa0((byte *)s_dest__d__d___d__d_005b1b64);
  uStack_4 = *(undefined4 *)((int)this + 0x28);
  uStack_8 = *(undefined4 *)((int)this + 0x24);
  uVar12 = 0;
  pcVar9 = s_src__d__d___d__d_005b1b50;
  uStack_10 = 0;
  uStack_c = 0;
  uVar11 = 0x4ba2ed;
  FUN_004c3fa0((byte *)s_src__d__d___d__d_005b1b50);
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if (DAT_0073b1b4 < 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*DAT_0073b1c0 == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar4 = (**(code **)(**(int **)(DAT_0073b1b0 + 4) + 0x14))();
  if (iVar4 != 0) {
    hardware(iVar4);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____blt_surf_2_surf_blittin_005b1b20);
  }
  uVar10 = 0x4ba3bc;
  (**(code **)(**(int **)((int)this + 4) + 8))();
  *(undefined4 *)((int)this + 4) = 0;
  DAT_0073b1f8 = _DAT_0073b200 + DAT_0073b1f8;
  if (1.0 <= DAT_0073b1f8) {
    DAT_0073b1fc = _DAT_0073b204 + DAT_0073b1fc;
    if (1.0 <= DAT_0073b1fc) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_main_texture_spa_005b1ae0);
    }
    DAT_0073b1f8 = 0.0;
  }
  puVar2 = &DAT_00740968;
  puVar5 = (undefined4 *)&stack0xffffff8c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004c8690(in_stack_ffffff8c,(byte)uVar7,param_1,puVar8,uVar11,(uint)pcVar9,uVar12,uVar10);
  bVar1 = FUN_004c1030(0x73b258);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_004ba4c0(0);
  }
  return 0;
}


