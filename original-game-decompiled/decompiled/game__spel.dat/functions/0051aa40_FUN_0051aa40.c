
/* ==== FUN_0051aa40 @ 0051aa40 ==== 
 * signature: undefined __cdecl FUN_0051aa40(int param_1)
 * body: 0051aa40-0051ad0c
 */

void __cdecl FUN_0051aa40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_freebuild__free_memory_from_q_005bc808);
  }
  if (DAT_0074c6f0 != (int *)0x0) {
    FUN_00514d30(DAT_0074c6f0,0);
  }
  if (param_1 == 0) {
    piVar4 = DAT_0074c628;
    if (DAT_0074c460 != 0) {
      for (; (piVar4 != (int *)0x0 && (*piVar4 != 0)); piVar4 = (int *)*piVar4) {
        FUN_00514650(piVar4 + 3);
      }
    }
  }
  else {
    FUN_00518040(0);
    while (DAT_0074c628 != (int *)0x0) {
      if (*DAT_0074c628 == 0) {
        FUN_0051e2b0(DAT_0074c628,0x18);
        DAT_0074c628 = (int *)0x0;
        DAT_0074c630 = 0;
      }
      else {
        FUN_005182a0(DAT_0074c628);
      }
    }
  }
  DAT_0074c460 = 0;
  DAT_0074c664 = 0;
  puVar5 = DAT_0074c600;
  if (param_1 == 0) {
    for (; (puVar5 != (undefined4 *)0x0 && (puVar5[0xc] != 0)); puVar5 = (undefined4 *)puVar5[0xc])
    {
      FUN_00514650(puVar5 + 0x10);
      FUN_00514650(puVar5 + 0x11);
      if ((puVar5[0x14] & 0x1000) == 0) {
        FUN_00514650(puVar5 + 0xf);
        FUN_00514650(puVar5 + 0xe);
        FUN_00514650(puVar5 + 0xd);
      }
    }
  }
  else {
    for (; (puVar6 = DAT_0074c600, puVar5 != (undefined4 *)0x0 && (puVar5[0xc] != 0));
        puVar5 = (undefined4 *)puVar5[0xc]) {
      iVar1 = puVar5[0xe];
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 4);
        piVar4 = (int *)(iVar1 + 8);
        while (iVar2 != 0) {
          *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfeffffff;
          iVar2 = *piVar4;
          piVar4 = piVar4 + 1;
        }
      }
    }
    for (; (puVar5 = DAT_0074c600, puVar6 != (undefined4 *)0x0 && (puVar6[0xc] != 0));
        puVar6 = (undefined4 *)puVar6[0xc]) {
      if (((puVar6[0x14] & 0x400) != 0) && (iVar1 = puVar6[0xe], iVar1 != 0)) {
        piVar4 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar4 = piVar4 + 1;
          puVar5 = *(undefined4 **)(iVar1 + 4);
          if (puVar5 == puVar6) {
            puVar5 = *(undefined4 **)(iVar1 + 8);
          }
          if ((puVar5[0x14] & 0x400) == 0) {
            *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x1000000;
          }
          iVar1 = *piVar4;
        }
      }
    }
    while (DAT_0074c600 = puVar5, puVar5 != (undefined4 *)0x0) {
      iVar1 = puVar5[0xe];
      if (iVar1 != 0) {
        puVar6 = (undefined4 *)(iVar1 + 4);
        puVar3 = *(undefined4 **)(iVar1 + 4);
        while (puVar3 != (undefined4 *)0x0) {
          puVar6 = puVar6 + 1;
          if ((puVar3[3] & 0x1000000) == 0) {
            puVar3[3] = puVar3[3] | 0x1000000;
          }
          else {
            FUN_005145f0(puVar3);
            FUN_0051e2b0(puVar3,0x10);
          }
          puVar3 = (undefined4 *)*puVar6;
        }
      }
      FUN_005145f0(puVar5 + 0x10);
      FUN_005145f0(puVar5 + 0x11);
      FUN_005145f0(puVar5 + 0xf);
      FUN_005145f0(puVar5 + 0xe);
      FUN_005145f0(puVar5 + 0xd);
      if (puVar5[0xc] == 0) {
        FUN_0051e2b0(puVar5,0x58);
        DAT_0074c600 = (undefined4 *)0x0;
        DAT_0074c60c = 0;
        DAT_0074c610 = 0;
        puVar5 = DAT_0074c600;
      }
      else {
        FUN_005152b0(puVar5);
        puVar5 = DAT_0074c600;
      }
    }
  }
  FUN_005145f0(&DAT_0074c6e8);
  FUN_0051e2b0(DAT_0074c5f0,DAT_0074c5f4);
  DAT_0074c5f0 = (undefined4 *)0x0;
  if (DAT_0074c6e0 != 0) {
    puVar5 = (undefined4 *)(DAT_0074c6e0 + 4);
    puVar6 = *(undefined4 **)(DAT_0074c6e0 + 4);
    while (puVar6 != (undefined4 *)0x0) {
      puVar5 = puVar5 + 1;
      FUN_0051e2b0(puVar6,0x18);
      puVar6 = (undefined4 *)*puVar5;
    }
  }
  DAT_0074c6e0 = 0;
  DAT_0074c6e4 = 0;
  FUN_00514c20();
  return;
}


