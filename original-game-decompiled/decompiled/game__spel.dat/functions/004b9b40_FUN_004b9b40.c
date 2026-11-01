
/* ==== FUN_004b9b40 @ 004b9b40 ==== 
 * signature: undefined4 __thiscall FUN_004b9b40(void * this, char * param_1, undefined4 param_2, int * param_3)
 * body: 004b9b40-004b9c34;004b9c38-004b9c6b;004b9c6f-004b9ccc;004b9cd0-004b9d5b;004b9d5f-004b9d89;004b9d8d-004b9df5;004b9df9-004b9e27;004b9e2b-004b9e5a;004b9e5e-004b9e98;004b9e9c-004b9ed3;004b9ed7-004b9f42;004b9f48-004b9f77;004b9f7b-004b9f9f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b9c35-004b9c37 004b9c6c-004b9c6e 004b9ccd-004b9ccf 004b9d5c-004b9d5e 004b9d8a-004b9d8c 004b9df6-004b9df8 004b9e28-004b9e2a 004b9e5b-004b9e5d 004b9e99-004b9e9b 004b9ed4-004b9ed6 004b9f43-004b9f47 004b9f78-004b9f7a
 */

undefined4 __thiscall FUN_004b9b40(void *this,char *param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar5;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar6;
  undefined4 in_stack_ffffffa4;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 in_stack_ffffffc0;
  void *pvVar11;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  int *local_10;
  int *local_c;
  int iStack_8;
  
  pcVar13 = s_Now_load_texture__s_with_dimensi_005b1ab8;
  uVar12 = 0x4b9b5d;
  FUN_004c3fa0((byte *)s_Now_load_texture__s_with_dimensi_005b1ab8);
  FUN_004c1ae0((void *)((int)this + 0x14),param_1);
  pcVar15 = s_Loading_temp_texture_005b1aa0;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  FUN_004c3fa0((byte *)s_Loading_temp_texture_005b1aa0);
  uVar14 = 0x4b9b7f;
  puVar3 = (undefined4 *)FUN_004c2a50();
  puVar6 = (undefined4 *)&stack0xffffffc0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004c8690(in_stack_ffffffc0,(byte)in_stack_ffffffc4,in_stack_ffffffc8,in_stack_ffffffcc,uVar12,
               (uint)pcVar13,uVar14,(uint)pcVar15);
  puVar3 = (undefined4 *)FUN_004c2a50();
  puVar4 = FUN_004b96c0(param_1,(uint *)&local_c,(uint *)&local_10,(int *)0x1800,puVar3);
  uVar7 = 0x4b9bb4;
  puVar3 = (undefined4 *)FUN_004c2a50();
  puVar6 = (undefined4 *)&stack0xffffffc0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004c8690(in_stack_ffffffc0,(byte)in_stack_ffffffc4,in_stack_ffffffc8,in_stack_ffffffcc,uVar12,
               (uint)pcVar13,uVar14,(uint)pcVar15);
  pcVar15 = s_The_source_texture_dimensions_ar_005b1a74;
  piVar9 = local_c;
  piVar10 = local_10;
  FUN_004c3fa0((byte *)s_The_source_texture_dimensions_ar_005b1a74);
  pcVar13 = s_Check_if_load_dimension_is_valid_005b1a50;
  uVar8 = 0x4b9be5;
  FUN_004c3fa0((byte *)s_Check_if_load_dimension_is_valid_005b1a50);
  if ((param_3 == (int *)0xffffffff) || ((int)local_10 < (int)param_3)) {
    FUN_004c3fa0((byte *)s_Illegal_dimension_specified__cor_005b1a20);
    param_3 = local_10;
  }
  if ((local_c == local_10) && (param_3 != local_c)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Could_not_load_texture___005b19bc);
  }
  FUN_004c3fa0((byte *)s_Final_load_dimension__d_005b19a0);
  if ((int)param_3 < DAT_0073b4f4) {
    (**(code **)(*puVar4 + 8))();
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Requested_texture_dimens_005b1950);
  }
  *(int **)((int)this + 0x24) = param_3;
  *(int **)((int)this + 0x28) = param_3;
  FUN_004c3fa0((byte *)s_Now_creating_the_memory_texture_c_005b1928);
  puVar1 = (uint *)((int)this + 4);
  FUN_004b9890(puVar1,puVar4,(int)local_c,(int)local_10,(int)param_3);
  (**(code **)(*puVar4 + 8))();
  iVar5 = (*(code *)**(undefined4 **)*puVar1)();
  if (iVar5 != 0) {
    FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Could_not_query_texture_i_005b18f0);
  }
  bVar2 = FUN_004c1030(0x73b258);
  if ((CONCAT31(extraout_var,bVar2) != 0) && (iStack_8 != 4)) {
    FUN_004c3fa0((byte *)s_Now_creating_the_video_texture_c_005b18c8);
    piVar10 = (int *)((int)this + 8);
    piVar9 = (int *)0x4b9d03;
    FUN_004b9ab0(piVar10,unaff_ESI,unaff_EDI,(int)param_3);
  }
  FUN_004c3fa0((byte *)s_Now_do_the_default_3D_code_005b18ac);
  bVar2 = FUN_004c1030(0x73b258);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    FUN_004c3fa0((byte *)s________________NO_HAL____________005b184c);
    *(int **)((int)this + 8) = (int *)*puVar1;
    (**(code **)(*(int *)*puVar1 + 4))();
    iVar5 = FUN_004c2af0();
    if (iVar5 == 2) {
      FUN_004c3fa0((byte *)s_Setting_texture_palette_005b1830);
      iVar5 = (**(code **)(*(int *)*puVar1 + 0x7c))();
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____D3DError_setting_device_005b17f8);
      }
      piVar9 = (int *)0x4b9e09;
      iVar5 = (**(code **)(**(int **)((int)this + 8) + 0x7c))();
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____D3DError_setting_device_005b17f8);
      }
    }
    piVar10 = (int *)0x4b9e3c;
    iVar5 = (**(code **)**(undefined4 **)((int)this + 8))();
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____D3DError_query_texture_i_005b17c4);
    }
  }
  else if (iStack_8 != 4) {
    iVar5 = (**(code **)**(undefined4 **)((int)this + 8))();
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Could_not_query_texture_i_005b18f0);
    }
    piVar10 = *(int **)((int)this + 0x10);
    piVar9 = (int *)0x4b9d6b;
    iVar5 = (**(code **)(*piVar10 + 0x14))();
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Could_not_load_memory_te_005b1874);
    }
    *(undefined4 *)((int)this + 0x30) = 1;
  }
  FUN_004ba810((uint *)&stack0xffffffe8);
  iVar5 = (**(code **)(*(int *)*puVar1 + 0x74))();
  if (iVar5 != 0) {
    FUN_004c4400(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____failed_to_set_memory_co_005b1794);
  }
  if (unaff_EBX != 4) {
    piVar9 = *(int **)((int)this + 8);
    piVar10 = (int *)0x8;
    pcVar15 = (char *)0x4b9eb5;
    iVar5 = (**(code **)(*piVar9 + 0x74))();
    if (iVar5 != 0) {
      FUN_004c4400(iVar5);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____D3DError_SetColorKey_____005b176c);
    }
  }
  pvVar11 = (void *)0x4b9ee1;
  bVar2 = FUN_004c1030(0x73b258);
  if (CONCAT31(extraout_var_01,bVar2) == 0) {
    piVar9 = *(int **)((int)this + 0xc);
    pcVar15 = (char *)0x4b9f59;
    piVar10 = DAT_0073b4b4;
    iVar5 = (**(code **)(*piVar9 + 0xc))();
    pvVar11 = this;
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
LAB_004b9f69:
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____D3DError_get_texturehan_005b1718);
    }
  }
  else if (unaff_EBX != 4) {
    piVar9 = *(int **)((int)this + 0x10);
    pcVar15 = (char *)0x4b9eff;
    piVar10 = DAT_0073b4b4;
    pvVar11 = this;
    iVar5 = (**(code **)(*piVar9 + 0xc))();
    if (iVar5 != 0) {
      if (iVar5 != -0x7789fd1e) {
        FUN_004bb290(iVar5);
        goto LAB_004b9f69;
      }
      piVar10 = (int *)0x4b9f21;
      (**(code **)(**(int **)((int)this + 0x10) + 8))();
      pvVar11 = (void *)0x4b9f2b;
      bVar2 = FUN_004c1030(0x73b258);
      if (CONCAT31(extraout_var_02,bVar2) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Could_not_get_texture_ha_005b1744);
      }
    }
  }
  puVar3 = &DAT_00740968;
  puVar6 = (undefined4 *)&stack0xffffffa4;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004c8690(in_stack_ffffffa4,(byte)uVar7,uVar8,pcVar13,(uint)pcVar15,(uint)piVar9,(uint)piVar10,
               (uint)pvVar11);
  return 0;
}


