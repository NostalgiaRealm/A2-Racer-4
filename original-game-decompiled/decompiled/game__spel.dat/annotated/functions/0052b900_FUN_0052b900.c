
/* ==== FUN_0052b900 @ 0052b900 ==== 
 * signature: undefined __stdcall FUN_0052b900(void)
 * body: 0052b900-0052bbe3
 */

void FUN_0052b900(void)

{
  double dVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int unaff_EBX;
  int iVar11;
  undefined4 unaff_EBP;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uStack_8;
  double dVar15;
  
  iVar11 = DAT_0074c044;
  puVar12 = DAT_0074c040;
  puVar14 = (undefined4 *)&stack0xfffffffc;
  dVar15 = (double)CONCAT44(unaff_EBP,uStack_8);
  uVar6 = (int)DAT_0074c040 + 1;
  puVar2 = FUN_0051e110(uVar6);
  puVar13 = puVar2;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar13 = 0;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  iVar7 = 0;
  if (0 < (int)DAT_0074c040) {
    do {
      if ((*(double *)(DAT_0074c474 + iVar7 * 8) == 0.0) &&
         (*(double *)(DAT_0074c470 + iVar7 * 8) == 0.0)) {
        *(undefined1 *)(iVar7 + (int)puVar2) = 0xff;
        puVar12 = (undefined4 *)((int)puVar12 + -1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)DAT_0074c040);
  }
  if (DAT_0074be40 != 0) {
    *(undefined1 *)(iVar7 + (int)puVar2) = 1;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    if (DAT_0074be18 != 0) {
      iVar11 = iVar11 + 1;
    }
  }
  if (puVar12 != DAT_0074c03c) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_project_005c28f8);
    FUN_0051e8e0(5,(int *)0x0);
  }
  pdVar3 = _malloc(iVar11 * (int)puVar12 * 8);
  if (pdVar3 == (double *)0x0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__insufficient_memory_005c28c0);
    FUN_0051e8e0(4,(int *)0x0);
  }
  FUN_0052bbf0((int)puVar2,(int)DAT_0074c040 + 1,(int)DAT_0074c048,DAT_0074c044,DAT_0074c040,
               (int)pdVar3,puVar12,puVar14,unaff_EBX);
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_projectinput__updating_lower_a_005c288c);
  }
  iVar11 = (int)DAT_0074c040 + 1;
  puVar13 = puVar2;
  FUN_0052bbf0((int)puVar2,iVar11,DAT_0074c474,1,(undefined4 *)iVar11,DAT_0074c474,
               (undefined4 *)((int)puVar12 + 1),puVar14,unaff_EBX);
  FUN_0052bbf0((int)puVar2,(int)DAT_0074c040 + 1,DAT_0074c470,1,
               (undefined4 *)((int)DAT_0074c040 + 1),DAT_0074c470,(undefined4 *)((int)puVar12 + 1),
               puVar13,iVar11);
  FUN_0051e2b0(puVar2,(int)DAT_0074c040 + 1);
  if (DAT_0074c04c != 0) {
    FUN_00559d4e(DAT_0074c048);
  }
  DAT_0074c04c = 1;
  DAT_0074c048 = pdVar3;
  if (DAT_0074be40 != 0) {
    if (DAT_0074be18 == 0) {
      FUN_0052c400((int)DAT_0074c03c,DAT_0074c044,pdVar3);
    }
    else {
      iVar10 = (int)DAT_0074c03c * DAT_0074c044;
      iVar7 = (int)DAT_0074c03c + -1;
      pdVar9 = pdVar3;
      iVar11 = DAT_0074c044;
      if (iVar7 != 0) {
        pdVar4 = pdVar3 + (int)DAT_0074c03c + iVar10 + -2;
        do {
          *(undefined4 *)pdVar4 = 0;
          *(undefined4 *)((int)pdVar4 + 4) = 0;
          iVar7 = iVar7 + -1;
          pdVar4 = pdVar4 + -1;
          iVar11 = DAT_0074c044;
        } while (iVar7 != 0);
      }
      for (; puVar12 = DAT_0074c03c, iVar11 != 0; iVar11 = iVar11 + -1) {
        dVar1 = 0.0;
        iVar7 = (int)DAT_0074c03c + -1;
        if (iVar7 != 0) {
          pdVar4 = pdVar3 + (int)DAT_0074c03c + iVar10 + -2;
          pdVar8 = pdVar9;
          do {
            pdVar9 = pdVar8 + 1;
            iVar7 = iVar7 + -1;
            dVar1 = *pdVar8 * *pdVar8 + dVar1;
            *pdVar4 = *pdVar4 + *pdVar8;
            pdVar4 = pdVar4 + -1;
            pdVar8 = pdVar9;
          } while (iVar7 != 0);
        }
        *pdVar9 = dVar1;
        if (dVar15 < dVar1) {
          dVar15 = dVar1;
        }
        pdVar9 = pdVar9 + 1;
      }
      while ((undefined4 *)((int)puVar12 + -1) != (undefined4 *)0x0) {
        *pdVar9 = *pdVar9 / (double)DAT_0074c044;
        pdVar9 = pdVar9 + 1;
        puVar12 = (undefined4 *)((int)puVar12 + -1);
      }
      *pdVar9 = dVar15 * 1.1;
      DAT_0074c044 = DAT_0074c044 + 1;
      if (DAT_0074be68 != 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_projectinput__projected_point_005c284c);
        return;
      }
    }
  }
  return;
}


