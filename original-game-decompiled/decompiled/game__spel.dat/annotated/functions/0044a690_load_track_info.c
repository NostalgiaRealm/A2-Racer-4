
/* ==== load_track_info @ 0044a690 ==== 
 * signature: undefined __stdcall load_track_info(void)
 * body: 0044a690-0044a72f;0044a738-0044a798;0044a79c-0044a7c4;0044a7c8-0044aa11
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(load_track_info) %s(%d) : Invalid number of arguments for track %d']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044a730-0044a737 0044a799-0044a79b 0044a7c5-0044a7c7
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(load_track_info) %s(%d) : Invalid number of arguments for track %d'] */

void load_track_info(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *this;
  void *this_00;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  char *pcVar15;
  uint *puVar16;
  undefined4 *puVar17;
  char local_d4 [8];
  CHAR local_cc [4];
  uint auStack_c8 [50];
  
  ppuVar13 = &PTR_LAB_00414751_3_005a03f0;
  if (DAT_006fb8d0 == 0) {
    ppuVar13 = (undefined **)&DAT_005a03f4;
  }
  uVar8 = 0xffffffff;
  do {
    ppuVar14 = ppuVar13;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    ppuVar14 = (undefined **)((int)ppuVar13 + 1);
    cVar1 = *(char *)ppuVar13;
    ppuVar13 = ppuVar14;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = (char *)((int)ppuVar14 - uVar8);
  pcVar15 = local_d4;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar15 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_004c3fa0((byte *)s_load_track_info_005a03f8);
  iVar4 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005a040c);
  pcVar5 = *(char **)(iVar4 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  set_ini_filename(pcVar5);
  DAT_006fa588 = read_ini_value_setting(&DAT_005a0424,s_COUNT_005a041c);
  if ((DAT_006fa588 < 1) || (0x1e < DAT_006fa588)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__load_track_info___s__d____Inval_005a0450);
  }
  iVar4 = 0;
  if (0 < DAT_006fa588) {
    puVar11 = &DAT_006fa590;
    do {
      FUN_005587a3(local_cc,&DAT_005a0484);
      read_ini_string_setting(&DAT_005a0488,local_cc,(LPSTR)auStack_c8,199);
      iVar10 = -1;
      puVar7 = auStack_c8;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        uVar8 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while ((char)uVar8 != '\0');
      if (iVar10 == -2) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__load_track_info___s__d____No_va_005a04b4);
      }
      iVar10 = get_ini_arguments_online((byte *)auStack_c8,(uint *)0x0);
      if (iVar10 != 0xf) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__load_track_info___s__d____Inval_005a0518);
      }
      uVar6 = FUN_004c3ec0(0);
      puVar11[-1] = uVar6;
      FUN_004c3f10(1,(char *)auStack_c8,0xd);
      puVar7 = FUN_005690b0(auStack_c8);
      uVar8 = 0xffffffff;
      do {
        puVar16 = puVar7;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        puVar16 = (uint *)((int)puVar7 + 1);
        uVar9 = *puVar7;
        puVar7 = puVar16;
      } while ((char)uVar9 != '\0');
      uVar8 = ~uVar8;
      puVar12 = (undefined4 *)((int)puVar16 - uVar8);
      puVar17 = puVar11;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      FUN_004c3f10(2,(char *)auStack_c8,0xd);
      FUN_005690b0(auStack_c8);
      FUN_005587a3((undefined1 *)((int)puVar11 + 0xe),(byte *)s__s__s_005a055c);
      FUN_004c3f10(3,(char *)auStack_c8,0xd);
      FUN_005690b0(auStack_c8);
      FUN_005587a3((undefined1 *)(puVar11 + 7),(byte *)s__s__s_005a0564);
      FUN_004c3f10(4,(char *)auStack_c8,0xd);
      FUN_005690b0(auStack_c8);
      FUN_005587a3((undefined1 *)((int)puVar11 + 0x2a),(byte *)s__s__s_005a056c);
      FUN_004c3f10(5,(char *)auStack_c8,0xd);
      FUN_005690b0(auStack_c8);
      FUN_005587a3((undefined1 *)(puVar11 + 0xe),(byte *)s__s__s_005a0574);
      FUN_004c3f10(6,(char *)auStack_c8,0xd);
      FUN_005690b0(auStack_c8);
      FUN_005587a3((undefined1 *)((int)puVar11 + 0x46),(byte *)s__s_pcx_005a057c);
      FUN_004c3f10(7,(char *)auStack_c8,0xd);
      FUN_005690b0(auStack_c8);
      FUN_005587a3((undefined1 *)(puVar11 + 0x15),(byte *)s__s_pcx_005a0584);
      FUN_004c3f10(8,(char *)auStack_c8,0x1e);
      puVar7 = FUN_005690b0(auStack_c8);
      uVar8 = 0xffffffff;
      do {
        puVar16 = puVar7;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        puVar16 = (uint *)((int)puVar7 + 1);
        uVar9 = *puVar7;
        puVar7 = puVar16;
      } while ((char)uVar9 != '\0');
      uVar8 = ~uVar8;
      puVar12 = (undefined4 *)((int)puVar16 - uVar8);
      puVar17 = (undefined4 *)((int)puVar11 + 0x62);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      FUN_004c3f10(0xb,(char *)auStack_c8,3);
      uVar3 = FUN_0055933d(this,(byte *)auStack_c8);
      *(undefined2 *)((int)puVar11 + 0x82) = uVar3;
      FUN_004c3f10(0xc,(char *)auStack_c8,3);
      uVar3 = FUN_0055933d(auStack_c8,(byte *)auStack_c8);
      *(undefined2 *)(puVar11 + 0x21) = uVar3;
      FUN_004c3f10(0xd,(char *)auStack_c8,3);
      uVar3 = FUN_0055933d(this_00,(byte *)auStack_c8);
      *(undefined2 *)((int)puVar11 + 0x86) = uVar3;
      uVar2 = FUN_004c3ec0(9);
      *(undefined1 *)(puVar11 + 0x20) = uVar2;
      uVar6 = FUN_004c3ec0(10);
      puVar11[0x22] = uVar6;
      uVar6 = FUN_004c3ec0(10);
      puVar11[0x22] = uVar6;
      uVar6 = FUN_004c3ec0(0xe);
      puVar11[0x23] = uVar6;
      iVar4 = iVar4 + 1;
      puVar11 = puVar11 + 0x25;
    } while (iVar4 < DAT_006fa588);
  }
  return;
}


