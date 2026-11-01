
/* ==== FUN_00468050 @ 00468050 ==== 
 * signature: undefined __cdecl FUN_00468050(undefined4 param_1, int param_2, int param_3)
 * body: 00468050-00468379;0046837d-00468383
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046837a-0046837c
 */

void __cdecl FUN_00468050(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  
  FUN_00559400();
  puVar4 = (undefined4 *)&stack0x00000020;
  for (iVar5 = 0x400; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar8 = 0;
  bVar2 = false;
  param_1 = 0;
  iVar5 = (**(code **)*extraout_ECX)();
  if (iVar5 != 0) {
    iVar5 = -1;
    pcVar9 = &stack0x00000020;
    do {
      pcVar11 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    pcVar9 = s_The_following_texture_files_are_m_005a758c;
    pcVar11 = pcVar11 + -1;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    puVar4 = (undefined4 *)*extraout_ECX;
    *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
    bVar2 = true;
    pcVar11[2] = pcVar9[2];
    iVar5 = (*(code *)*puVar4)();
    if (0 < iVar5) {
      do {
        if (0x13 < param_1) break;
        piVar3 = (int *)FUN_00468530(extraout_ECX + 9,(undefined4 *)&stack0x00000014);
        param_3 = *piVar3;
        iVar5 = iVar8;
        if (0 < iVar8) {
          do {
            FUN_00448fd0(&param_3,(undefined4 *)&stack0x00000018);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        pcVar9 = *(char **)(param_3 + 0xc);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "";
        }
        uVar6 = 0xffffffff;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar10 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = pcVar10 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar11 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar11 + -1) = DAT_005a75b8;
        *(undefined2 *)(pcVar11 + 3) = DAT_005a75bc;
        piVar3 = (int *)FUN_00468530(extraout_ECX + 1,(undefined4 *)&stack0x0000001c);
        param_2 = *piVar3;
        iVar5 = iVar8;
        if (0 < iVar8) {
          do {
            FUN_00448fd0(&param_2,(undefined4 *)&stack0x00000010);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        pcVar9 = *(char **)(param_2 + 0xc);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "";
        }
        uVar6 = 0xffffffff;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar10 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = pcVar10 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar11 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 1;
        *(undefined2 *)(pcVar11 + -1) = DAT_005a75c0;
        puVar4 = (undefined4 *)*extraout_ECX;
        pcVar11[1] = DAT_005a75c2;
        iVar5 = (*(code *)*puVar4)();
      } while (iVar8 < iVar5);
    }
    iVar5 = -1;
    pcVar9 = &stack0x00000020;
    do {
      pcVar11 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar11 + -1) = DAT_005a75c4;
    pcVar11[1] = DAT_005a75c6;
  }
  iVar5 = (**(code **)extraout_ECX[4])();
  if (iVar5 != 0) {
    bVar12 = param_1 == 0x14;
    if (0x13 < param_1) goto LAB_00468348;
    iVar5 = -1;
    pcVar9 = &stack0x00000020;
    do {
      pcVar11 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    puVar4 = (undefined4 *)extraout_ECX[4];
    bVar2 = true;
    pcVar9 = s_The_following_mesh_files_are_mis_005a75c8;
    pcVar11 = pcVar11 + -1;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    iVar8 = 0;
    iVar5 = (*(code *)*puVar4)();
    if (0 < iVar5) {
      do {
        bVar12 = param_1 == 0x14;
        if (0x13 < param_1) goto LAB_00468348;
        param_2 = *(int *)extraout_ECX[0xe];
        iVar5 = iVar8;
        if (0 < iVar8) {
          do {
            FUN_00448fd0(&param_2,(undefined4 *)&stack0x00000010);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        pcVar9 = *(char **)(param_2 + 0xc);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "";
        }
        uVar6 = 0xffffffff;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar10 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = pcVar10 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        puVar4 = (undefined4 *)extraout_ECX[6];
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar11 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar11 + -1) = DAT_005a75f0;
        *(undefined2 *)(pcVar11 + 3) = DAT_005a75f4;
        puVar4 = (undefined4 *)*puVar4;
        iVar5 = iVar8;
        if (0 < iVar8) {
          do {
            puVar4 = (undefined4 *)*puVar4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        pcVar9 = "";
        if ((char *)puVar4[3] != (char *)0x0) {
          pcVar9 = (char *)puVar4[3];
        }
        uVar6 = 0xffffffff;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar10 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = pcVar10 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar5 = -1;
        pcVar9 = &stack0x00000020;
        do {
          pcVar11 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar11 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar1 != '\0');
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 1;
        *(undefined2 *)(pcVar11 + -1) = DAT_005a75f8;
        puVar4 = (undefined4 *)extraout_ECX[4];
        pcVar11[1] = DAT_005a75fa;
        iVar5 = (*(code *)*puVar4)();
      } while (iVar8 < iVar5);
    }
  }
  bVar12 = param_1 == 0x14;
LAB_00468348:
  if (bVar12) {
    iVar5 = -1;
    pcVar9 = &stack0x00000020;
    do {
      pcVar11 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    pcVar9 = s_There_are_more_errors____005a75fc;
    pcVar11 = pcVar11 + -1;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
  }
  if (!bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150(&stack0x00000020);
}


