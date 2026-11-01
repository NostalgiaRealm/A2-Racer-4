
/* ==== FUN_0044da30 @ 0044da30 ==== 
 * signature: undefined __stdcall FUN_0044da30(void)
 * body: 0044da30-0044daf4;0044dafa-0044db28;0044db2c-0044dbc9;0044dbcd-0044dce1;0044dce5-0044df03
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044daf5-0044daf9 0044db29-0044db2b 0044dbca-0044dbcc 0044dce2-0044dce4
 */

/* WARNING: Removing unreachable block (ram,0x0044dda5) */
/* WARNING: Removing unreachable block (ram,0x0044ddaf) */
/* WARNING: Removing unreachable block (ram,0x0044ddb9) */
/* WARNING: Removing unreachable block (ram,0x0044ddb3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044da30(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *this;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStackY_80 [6];
  undefined4 uStackY_68;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a5be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006fb8e4 != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*DAT_00740894 + 0x58))();
  }
  if (DAT_006fb8d0 == 0) {
    FUN_004456a0();
  }
  FUN_004c0840(0);
  if (DAT_006fb8d0 == 0) {
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(undefined4 *)(iVar3 + 0x60) = 0;
    uVar2 = *DAT_0073b1b0;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar2;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      FUN_00440430(iVar3);
    }
    if (DAT_0073b4ec != 0) {
      DAT_0073b4ec = 0;
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))();
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
  }
  iVar3 = (**(code **)(*DAT_0073b4b4 + 0x28))();
  if (iVar3 != 0) {
    FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____D3DError_Begin_Scene_____005a1b70);
  }
  iVar3 = DAT_006fb8b0;
  iVar4 = FUN_0044df70(2);
  FUN_004aec50(&DAT_00715250,iVar4,iVar3);
  FUN_0043d4f0();
  if (DAT_006fb8d0 == 0) {
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(undefined4 *)(iVar3 + 0x60) = 0;
    uVar2 = *DAT_0073b1b0;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar2;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))();
    }
    if (DAT_0073b4ec != 0) {
      DAT_0073b4ec = 0;
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))();
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
  }
  iVar3 = DAT_006fb8b0;
  iVar4 = FUN_0044df70(2);
  FUN_004a99a0(iVar4,iVar3);
  puVar6 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar7 = auStackY_80;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_0045dce0();
  if ((DAT_006fb97d != '\0') && (DAT_006fb950 != 0)) {
    iVar3 = DAT_006fb8b0;
    iVar4 = FUN_0044df70(2);
    FUN_0040aaf0(iVar4,iVar3);
  }
  if (DAT_006fb97c != '\0') {
    iVar3 = DAT_006fb8b0;
    iVar4 = FUN_0044df70(2);
    FUN_0040a4f0(iVar4,iVar3);
    FUN_0040a3d0();
    FUN_0040a260();
    FUN_0040b370();
  }
  if ((0 < DAT_006fb924) && (DAT_00712784 != 2)) {
    FUN_004882f0(&DAT_007126e8);
  }
  FUN_00445180();
  FUN_00446fe0();
  FUN_00440160();
  FUN_0043de00();
  iVar3 = (**(code **)(*DAT_0073b4b4 + 0x2c))();
  if (iVar3 != 0) {
    FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____D3DError_End_Scene____s_005a1bbc);
  }
  if (DAT_006fb97c != '\0') {
    FUN_0040b380();
  }
  if (DAT_006fb950 != 0) {
    iVar3 = FUN_004c5e40(0x59);
    if (iVar3 != 0) {
      FUN_004a4600(0x715f58);
    }
    uVar5 = 0xffffffff;
    auStack_24[0] = (undefined1)((uint)unaff_ESI >> 0x18);
    pcVar9 = s_keyboard0_005a1be0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    iStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_00402940(auStack_24,(undefined4 *)s_keyboard0_005a1be0,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pvStack_c = (void *)0x0;
    pcVar9 = &DAT_005a1bec;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(&stack0xffffffcc,(undefined4 *)&DAT_005a1bec,~uVar5 - 1);
    puVar11 = auStack_24;
    puVar10 = &stack0xffffffcc;
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
    this = (void *)FUN_004ea0c0();
    iVar3 = FUN_004eb7a0(this,(int)puVar10,(float)puVar11);
    pvStack_c = (void *)0xffffffff;
    if (iStack_20 != 0) {
      cVar1 = *(char *)(iStack_20 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_20 + -1));
      }
      else {
        *(char *)(iStack_20 + -1) = cVar1 + -1;
      }
    }
    iStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    if ((char)iVar3 != '\0') {
      DAT_006fb982 = DAT_006fb982 == '\0';
    }
    if (DAT_006fb982 != '\0') {
      FUN_004a6800(0x7128b0);
      pcVar9 = s_frameRate___f_Real___f_005a1bf8;
      iVar8 = 0x50;
      iVar4 = 10;
      iVar3 = FUN_00447820();
      uStackY_68 = 0x44de7f;
      FUN_004c5930(iVar3,iVar4,iVar8,(byte *)pcVar9);
      pcVar9 = s_vchunks___d_FPSMULT__f_005a1c10;
      iVar8 = 100;
      iVar4 = 10;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar4,iVar8,(byte *)pcVar9);
      pcVar9 = s_road_tris_verts____d____d__005a1c28;
      iVar8 = 0x78;
      iVar4 = 10;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar4,iVar8,(byte *)pcVar9);
      FUN_004a72e0();
      FUN_004a72d0();
      pcVar9 = s_object_tris_verts____d____d__005a1c44;
      iVar8 = 0x8c;
      iVar4 = 10;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar4,iVar8,(byte *)pcVar9);
    }
  }
  ExceptionList = pvStack_14;
  return;
}


