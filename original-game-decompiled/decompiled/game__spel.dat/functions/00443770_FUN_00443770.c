
/* ==== FUN_00443770 @ 00443770 ==== 
 * signature: undefined __cdecl FUN_00443770(int param_1)
 * body: 00443770-00443c7c;00443c80-00443de8;00443dec-00443e85;00443e89-00443ede
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00443c7d-00443c7f 00443de9-00443deb 00443e86-00443e88
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00443770(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float local_134;
  int local_130;
  float *local_12c;
  float local_128;
  float local_124;
  float *local_120;
  float local_11c;
  float local_118;
  float *local_114;
  float local_110;
  float local_10c;
  float *local_108;
  float local_104;
  float local_100;
  undefined1 auStack_fc [4];
  uint local_f8;
  int local_f4;
  undefined4 local_f0 [2];
  undefined1 auStack_e8 [8];
  int local_e0;
  undefined4 local_dc [5];
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98 [3];
  undefined4 local_8c [16];
  undefined4 local_4c [7];
  void *pvStack_30;
  uint uStack_28;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a42e;
  pvStack_c = ExceptionList;
  iVar9 = param_1 * 0xf0;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_004a8c50(DAT_00715e50 + iVar9);
  if ((DAT_006ce120 & 1) == 0) {
    local_120 = (float *)0x0;
    DAT_006ce120 = DAT_006ce120 | 1;
    local_11c = 100000.0;
    local_118 = 0.0;
    _DAT_006ce128 = 0;
    _DAT_006ce12c = 0x47c35000;
    _DAT_006ce130 = 0;
    FUN_005584e0(0x443ee0);
  }
  FUN_0047b350(local_f0);
  local_4 = 0;
  FUN_0047ac50(local_dc);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar4 = DAT_0073b5c8 + iVar4 * 0xac;
  local_bc = *(float *)(iVar4 + 0x10);
  local_b8 = *(undefined4 *)(iVar4 + 0x14);
  local_b4 = *(undefined4 *)(iVar4 + 0x18);
  local_c8 = *(float *)(iVar4 + 0x1c);
  local_c4 = *(undefined4 *)(iVar4 + 0x20);
  local_c0 = *(undefined4 *)(iVar4 + 0x24);
  local_b0 = *(float *)(iVar4 + 0x4c);
  local_ac = *(undefined4 *)(iVar4 + 0x50);
  local_a8 = *(undefined4 *)(iVar4 + 0x54);
  local_a4 = *(float *)(iVar4 + 0x40);
  local_a0 = *(undefined4 *)(iVar4 + 0x44);
  local_9c = *(undefined4 *)(iVar4 + 0x48);
  puVar6 = (undefined4 *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar9) * 0xa9 + 0x10);
  puVar10 = local_8c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  pfVar5 = (float *)FUN_00443070((float *)&local_12c,&local_bc,(int)local_8c);
  pfVar1 = (float *)*pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  local_120 = pfVar1;
  local_118 = fVar3;
  puVar6 = (undefined4 *)FUN_00443070((float *)&local_12c,&local_c8,(int)local_8c);
  local_108 = (float *)*puVar6;
  local_104 = (float)puVar6[1];
  local_100 = (float)puVar6[2];
  puVar6 = (undefined4 *)FUN_00443070((float *)&local_12c,&local_b0,(int)local_8c);
  local_114 = (float *)*puVar6;
  local_110 = (float)puVar6[1];
  local_10c = (float)puVar6[2];
  puVar6 = (undefined4 *)FUN_00443070(local_98,&local_a4,(int)local_8c);
  local_12c = (float *)*puVar6;
  local_128 = (float)puVar6[1];
  local_124 = (float)puVar6[2];
  uVar7 = FUN_004af230(&DAT_00715250,*(int *)(DAT_00715e50 + 0x34 + iVar9),(float)pfVar1,fVar2,fVar3
                      );
  FUN_004ad3d0((void *)(uVar7 * 0x994 + DAT_00715f00),local_120,fVar2,local_118,(int *)&local_f8,
               &local_134,&local_130);
  fVar11 = FUN_004ad640(uVar7 * 0x994 + DAT_00715f00,(float)local_120,fVar2,local_118,(int)local_134
                        ,local_130);
  pfVar1 = local_108;
  local_11c = (float)fVar11;
  local_e0 = FUN_004af230(&DAT_00715250,*(int *)(DAT_00715e50 + 0x34 + iVar9),(float)local_108,
                          local_104,local_100);
  iVar4 = local_e0 * 0x994;
  FUN_004ad3d0((void *)(iVar4 + DAT_00715f00),pfVar1,local_104,local_100,(int *)&local_f8,&local_134
               ,&local_130);
  fVar11 = FUN_004ad640(iVar4 + DAT_00715f00,(float)pfVar1,local_104,local_100,(int)local_134,
                        local_130);
  pfVar1 = local_114;
  local_104 = (float)fVar11;
  local_f4 = FUN_004af230(&DAT_00715250,*(int *)(DAT_00715e50 + 0x34 + iVar9),(float)local_114,
                          local_110,local_10c);
  iVar4 = local_f4 * 0x994;
  FUN_004ad3d0((void *)(iVar4 + DAT_00715f00),pfVar1,local_110,local_10c,(int *)&local_f8,&local_134
               ,&local_130);
  fVar11 = FUN_004ad640(iVar4 + DAT_00715f00,(float)pfVar1,local_110,local_10c,(int)local_134,
                        local_130);
  pfVar1 = local_12c;
  local_110 = (float)fVar11;
  uVar8 = FUN_004af230(&DAT_00715250,*(int *)(DAT_00715e50 + 0x34 + iVar9),(float)local_12c,
                       local_128,local_124);
  FUN_004ad3d0((void *)(uVar8 * 0x994 + DAT_00715f00),pfVar1,local_128,local_124,(int *)&local_f8,
               &local_134,&local_130);
  fVar11 = FUN_004ad640(uVar8 * 0x994 + DAT_00715f00,(float)pfVar1,local_128,local_124,
                        (int)local_134,local_130);
  puVar6 = &DAT_0073b538;
  puVar10 = local_4c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar6 = local_4c;
  puVar10 = &DAT_0073b474;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  local_128 = (float)fVar11;
  iVar4 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (iVar4 != 0) {
    FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  FUN_0047ac90(auStack_e8,8);
  local_128 = local_128 + _DAT_0059d374;
  local_110 = local_110 + _DAT_0059d374;
  local_11c = local_11c + _DAT_0059d374;
  local_134 = local_134 + _DAT_0059d374;
  FUN_0047b060(auStack_e8,local_12c,local_128,local_124);
  FUN_0047b060(auStack_e8,local_114,local_110,local_10c);
  FUN_0047b060(auStack_e8,local_120,local_11c,local_118);
  FUN_0047b060(auStack_e8,unaff_EBX,local_134,local_130);
  FUN_0047b390(auStack_fc,6);
  iVar4 = FUN_0047b440(auStack_fc,(float *)&DAT_006ce128,auStack_e8);
  if (iVar4 < 0) {
    FUN_004c3fa0((byte *)s_draw_object_shadow_beam_CreateVo_0059d400);
  }
  if (DAT_006fb940 != 0) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,DAT_005afa58);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,DAT_005afa5c);
  }
  iVar4 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,1);
  if (iVar4 != 0) {
    FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____ZBUFFER__error_setting_0059d454);
  }
  local_114 = (float *)0x80000000;
  FUN_00443100(2,uVar7,&local_108,&local_114,'\x01');
  FUN_00443100(2,local_f8,&local_108,&local_114,'\0');
  FUN_00443100(2,(uint)local_10c,&local_108,&local_114,'\0');
  FUN_00443100(2,uVar8,&local_108,&local_114,'\0');
  iVar4 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,0);
  if (iVar4 != 0) {
    FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____ZBUFFER__error_setting_0059d4b0);
  }
  if (DAT_006fb940 != 0) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
  }
  uStack_28 = uStack_28 & 0xffffff00;
  FUN_0047ac70(&local_100);
  uStack_28 = 0xffffffff;
  FUN_0047b370(&local_114);
  ExceptionList = pvStack_30;
  return;
}


