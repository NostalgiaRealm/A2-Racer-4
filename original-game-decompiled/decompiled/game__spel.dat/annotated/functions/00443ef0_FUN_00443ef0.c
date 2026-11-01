
/* ==== FUN_00443ef0 @ 00443ef0 ==== 
 * signature: undefined __cdecl FUN_00443ef0(int param_1)
 * body: 00443ef0-00444006;0044400a-00444619;0044461d-00444658;0044465c-0044469f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00444007-00444009 0044461a-0044461c 00444659-0044465b
 */

void __cdecl FUN_00443ef0(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  uint uStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  float *pfStack_e4;
  float fStack_e0;
  float fStack_dc;
  float *pfStack_d8;
  float fStack_d4;
  float fStack_d0;
  float *pfStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float *pfStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint local_b4;
  int local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c [4];
  undefined4 local_6c [5];
  float afStack_58 [3];
  undefined4 local_4c [16];
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a448;
  pvStack_c = ExceptionList;
  iVar8 = param_1 * 0xf0;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_004a8c50(iVar8 + DAT_00715e50);
  FUN_0047b350(local_7c);
  local_4 = 0;
  FUN_0047ac50(local_6c);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = FUN_004a7200(*(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50),
                       *(int *)(iVar8 + 0x34 + DAT_00715e50));
  if (iVar5 < 6) {
    local_b0 = *(int *)(iVar8 + 0x40 + DAT_00715e50) * 0xa9;
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(local_b0 + 4 + DAT_0073b0d0) * 9 + 4 + DAT_0073b168)
                             + *(int *)(local_b0 + 8 + DAT_0073b0d0) * 4) * 0x10 + DAT_0073b120) *
            0xac;
    if (*(int *)(DAT_0073b5c8 + 0x84 + iVar5) != 4) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Object___d__has_a_shado_0059d50c);
    }
    local_b4 = *(uint *)(iVar8 + 0x4c + DAT_00715e50);
    uVar7 = ((local_b4 >> 0x10 & 0xff) + (local_b4 >> 8 & 0xff) + (local_b4 & 0xff)) / 3;
    uVar7 = ((uVar7 << 8 | uVar7) << 8 | uVar7) << 8 | uVar7;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x10) = uVar7;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x30) = uVar7;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x50) = uVar7;
    *(uint *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x70) = uVar7;
    iVar4 = DAT_0073b5c8 + iVar4 * 0xac;
    fStack_94 = *(float *)(iVar4 + 0x4c);
    uStack_90 = *(undefined4 *)(iVar4 + 0x50);
    uStack_8c = *(undefined4 *)(iVar4 + 0x54);
    fStack_88 = *(float *)(iVar4 + 0x40);
    uStack_84 = *(undefined4 *)(iVar4 + 0x44);
    uStack_80 = *(undefined4 *)(iVar4 + 0x48);
    fStack_ac = *(float *)(iVar4 + 0x10);
    uStack_a8 = *(undefined4 *)(iVar4 + 0x14);
    uStack_a4 = *(undefined4 *)(iVar4 + 0x18);
    fStack_a0 = *(float *)(iVar4 + 0x1c);
    uStack_9c = *(undefined4 *)(iVar4 + 0x20);
    uStack_98 = *(undefined4 *)(iVar4 + 0x24);
    puVar6 = (undefined4 *)(DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    puVar9 = local_4c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar6 = (undefined4 *)FUN_00443070((float *)&pfStack_cc,&fStack_94,(int)local_4c);
    pfVar1 = (float *)*puVar6;
    uVar2 = puVar6[1];
    fStack_b8 = (float)puVar6[2];
    pfStack_c0 = pfVar1;
    puVar6 = (undefined4 *)FUN_00443070((float *)&pfStack_cc,&fStack_88,(int)local_4c);
    pfStack_d8 = (float *)*puVar6;
    fStack_d4 = (float)puVar6[1];
    fStack_d0 = (float)puVar6[2];
    puVar6 = (undefined4 *)FUN_00443070((float *)&pfStack_cc,&fStack_ac,(int)local_4c);
    pfStack_e4 = (float *)*puVar6;
    fStack_e0 = (float)puVar6[1];
    fStack_dc = (float)puVar6[2];
    puVar6 = (undefined4 *)FUN_00443070(afStack_58,&fStack_a0,(int)local_4c);
    pfStack_cc = (float *)*puVar6;
    uStack_c8 = puVar6[1];
    fStack_c4 = (float)puVar6[2];
    uStack_f4 = FUN_004af230(&DAT_00715250,*(int *)(iVar8 + 0x34 + DAT_00715e50),(float)pfVar1,uVar2
                             ,fStack_b8);
    FUN_004adaf0(&uStack_f4,2,pfVar1,uVar2,fStack_b8,&iStack_e8,&iStack_ec,&iStack_f0);
    fVar10 = FUN_004ad640(DAT_00715f00 + uStack_f4 * 0x994,(float)pfVar1,uVar2,fStack_b8,iStack_ec,
                          iStack_f0);
    fVar3 = fStack_d4;
    pfVar1 = pfStack_d8;
    fStack_bc = (float)(fVar10 + (float10)1.0);
    uStack_f4 = FUN_004af230(&DAT_00715250,*(int *)(iVar8 + 0x34 + DAT_00715e50),(float)pfStack_d8,
                             fStack_d4,fStack_d0);
    FUN_004adaf0(&uStack_f4,2,pfVar1,fVar3,fStack_d0,&iStack_e8,&iStack_ec,&iStack_f0);
    fVar10 = FUN_004ad640(DAT_00715f00 + uStack_f4 * 0x994,(float)pfVar1,fVar3,fStack_d0,iStack_ec,
                          iStack_f0);
    fVar3 = fStack_e0;
    pfVar1 = pfStack_e4;
    fStack_d4 = (float)(fVar10 + (float10)1.0);
    uStack_f4 = FUN_004af230(&DAT_00715250,*(int *)(iVar8 + 0x34 + DAT_00715e50),(float)pfStack_e4,
                             fStack_e0,fStack_dc);
    FUN_004adaf0(&uStack_f4,2,pfVar1,fVar3,fStack_dc,&iStack_e8,&iStack_ec,&iStack_f0);
    fVar10 = FUN_004ad640(DAT_00715f00 + uStack_f4 * 0x994,(float)pfVar1,fVar3,fStack_dc,iStack_ec,
                          iStack_f0);
    uVar2 = uStack_c8;
    pfVar1 = pfStack_cc;
    fStack_e0 = (float)(fVar10 + (float10)1.0);
    uStack_f4 = FUN_004af230(&DAT_00715250,*(int *)(iVar8 + 0x34 + DAT_00715e50),(float)pfStack_cc,
                             uStack_c8,fStack_c4);
    fVar3 = fStack_c4;
    FUN_004adaf0(&uStack_f4,2,pfVar1,uVar2,fStack_c4,&iStack_e8,&iStack_ec,&iStack_f0);
    fVar10 = FUN_004ad640(DAT_00715f00 + uStack_f4 * 0x994,(float)pfVar1,uVar2,fVar3,iStack_ec,
                          iStack_f0);
    iVar4 = local_b0;
    **(undefined4 **)(DAT_0073b5c8 + 0x80 + iVar5) = pfStack_c0;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 4) = fStack_bc;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 8) = fStack_b8;
    *(float **)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x20) = pfStack_d8;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x24) = fStack_d4;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x28) = fStack_d0;
    *(float **)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x40) = pfStack_e4;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x44) = fStack_e0;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x48) = fStack_dc;
    *(float **)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x60) = pfVar1;
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 100) = (float)(fVar10 + (float10)1.0);
    *(float *)(*(int *)(DAT_0073b5c8 + 0x80 + iVar5) + 0x68) = fVar3;
    puVar6 = &DAT_0073b538;
    puVar9 = (undefined4 *)(local_b0 + 0x10 + DAT_0073b0d0);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
      *(undefined4 *)(local_b0 + 0xa5 + DAT_0073b0d0) = 0;
    }
    else {
      *(undefined4 *)(local_b0 + 0xa5 + DAT_0073b0d0) = 1;
    }
    if (DAT_006fb940 != 0) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x13,
                 *(undefined4 *)(&DAT_005afa50 + *(int *)(local_b0 + 0xa5 + DAT_0073b0d0) * 8));
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x14,
                 *(undefined4 *)(&DAT_005afa54 + *(int *)(iVar4 + 0xa5 + DAT_0073b0d0) * 8));
    }
    iVar5 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,1);
    if (iVar5 != 0) {
      FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____ZBUFFER__error_setting_0059d570);
    }
    FUN_004b5b10(iVar4 + DAT_0073b0d0);
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x2f,0);
    if (iVar4 != 0) {
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____ZBUFFER__error_setting_0059d5cc);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0047ac70(local_6c);
  local_4 = 0xffffffff;
  FUN_0047b370(local_7c);
  ExceptionList = pvStack_c;
  return;
}


