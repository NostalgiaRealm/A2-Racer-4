
/* ==== FUN_00552a63 @ 00552a63 ==== 
 * signature: undefined4 * __stdcall FUN_00552a63(void)
 * body: 00552a63-00553030
 */

undefined4 * FUN_00552a63(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined2 uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int unaff_EBP;
  int iVar16;
  undefined2 *puVar17;
  char *pcVar18;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x30));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piVar5 = (int *)FUN_0055409f();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x10) = piVar5;
  }
  else {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x30));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar5 = (int *)FUN_00554162();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x10) = piVar5;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x30));
  uVar6 = (**(code **)(*piVar5 + 0x1c))();
  *(uint *)(unaff_EBP + 0x14) = uVar6;
  FUN_00553771(piVar5,unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (uVar6 < *(uint *)(unaff_EBP + 0x2c)) {
    pcVar7 = *(char **)(unaff_EBP + -0x98);
    pcVar18 = "";
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    if ('\0' < *pcVar7) {
      uVar4 = (**(code **)(*piVar5 + 8))();
      if (*(int *)(unaff_EBP + -0x98) != 0) {
        pcVar18 = *(char **)(unaff_EBP + -0x98);
      }
      uVar6 = *(int *)(unaff_EBP + 0x2c) - *(int *)(unaff_EBP + 0x14);
      while (((cVar1 = *pcVar18, cVar1 != '\x7f' && ('\0' < cVar1)) && ((uint)(int)cVar1 < uVar6)))
      {
        uVar6 = uVar6 - (int)cVar1;
        FUN_00553539((void *)(unaff_EBP + 0x24),uVar6,1,uVar4);
        if ('\0' < pcVar18[1]) {
          pcVar18 = pcVar18 + 1;
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -0x40) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734((void *)(unaff_EBP + -0x40),'\0');
  piVar5 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    puVar8 = (undefined4 *)(**(code **)(*piVar5 + 0x20))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar8;
    pvVar9 = (void *)FUN_00556fac(piVar5,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_005533c1((void *)(unaff_EBP + -0x40),pvVar9,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(*piVar5 + 0x24))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar8;
    pvVar9 = (void *)FUN_00553788(piVar5,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_005533c1((void *)(unaff_EBP + -0x40),pvVar9,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_00553734((void *)(unaff_EBP + -0x20),'\x01');
  *(undefined1 *)(unaff_EBP + -0x8c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734((void *)(unaff_EBP + -0x8c),'\0');
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if ((*(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) != 0) {
    pvVar9 = (void *)FUN_0055210f(piVar5,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_005533c1((void *)(unaff_EBP + -0x8c),pvVar9,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00553734((void *)(unaff_EBP + -0x20),'\x01');
  }
  bVar3 = false;
  uVar14 = 0;
  uVar6 = 0;
  do {
    cVar1 = *(char *)(unaff_EBP + -0x2c + uVar6);
    if (cVar1 == ' ') {
      bVar3 = true;
    }
    else if (cVar1 == '$') {
      uVar14 = uVar14 + *(int *)(unaff_EBP + -0x84);
    }
    else if (cVar1 == '+') {
      uVar14 = uVar14 + *(int *)(unaff_EBP + -0x38);
    }
    else if (cVar1 == 'v') {
      uVar2 = *(uint *)(unaff_EBP + 0x14);
      if (uVar2 < *(uint *)(unaff_EBP + 0x2c)) {
        iVar10 = 0;
      }
      else {
        iVar10 = (uVar2 - *(int *)(unaff_EBP + 0x2c)) + 1;
      }
      uVar14 = uVar14 + (uint)(uVar2 != 0) + *(int *)(unaff_EBP + 0x2c) + iVar10;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  uVar6 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0x14);
  if (((int)uVar6 < 1) || (uVar6 <= uVar14)) {
    iVar10 = 0;
  }
  else {
    iVar10 = uVar6 - uVar14;
  }
  uVar6 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc);
  *(int *)(unaff_EBP + 0x20) = iVar10;
  uVar6 = uVar6 & 0x1c0;
  *(uint *)(unaff_EBP + -0x7c) = uVar6;
  if ((uVar6 != 0x40) && ((uVar6 != 0x100 || (!bVar3)))) {
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      FUN_00551357((void *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + 0x1c));
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar15 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar12 = *(undefined4 *)(unaff_EBP + 0xc);
  do {
    cVar1 = *(char *)(unaff_EBP + -0x2c + *(int *)(unaff_EBP + -0x24));
    if (cVar1 == ' ') {
      if (*(int *)(unaff_EBP + -0x7c) == 0x100) {
        iVar10 = *(int *)(unaff_EBP + 0x20);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar12;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar15;
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          FUN_00551357((void *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 0x1c));
        }
        uVar12 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar15 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = uVar12;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar15;
      }
      goto LAB_00552f60;
    }
    if (cVar1 == '$') {
      iVar10 = *(int *)(unaff_EBP + -0x84);
      FUN_0055367f((void *)(unaff_EBP + -0x8c));
      puVar17 = *(undefined2 **)(unaff_EBP + -0x88);
      *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0xc);
      puVar11 = *(undefined1 **)(unaff_EBP + 0x10);
      *(undefined1 **)(unaff_EBP + -0x4c) = puVar11;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar11 = FUN_00551357((void *)(unaff_EBP + -0x50),
                               CONCAT22((short)((uint)puVar11 >> 0x10),*puVar17));
        puVar17 = puVar17 + 1;
      }
      uVar12 = *(undefined4 *)(unaff_EBP + -0x50);
      uVar15 = *(undefined4 *)(unaff_EBP + -0x4c);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar12;
LAB_00552e0a:
      *(undefined4 *)(unaff_EBP + 0x10) = uVar15;
    }
    else if (cVar1 == '+') {
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        FUN_0055367f((void *)(unaff_EBP + -0x40));
        *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0x10);
        FUN_00551357((void *)(unaff_EBP + -0x58),
                     CONCAT22((short)((uint)*(undefined2 **)(unaff_EBP + -0x3c) >> 0x10),
                              **(undefined2 **)(unaff_EBP + -0x3c)));
        uVar12 = *(undefined4 *)(unaff_EBP + -0x58);
        uVar15 = *(undefined4 *)(unaff_EBP + -0x54);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar12;
        goto LAB_00552e0a;
      }
    }
    else if (cVar1 == 'v') {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        iVar10 = *(int *)(unaff_EBP + 0x2c);
        FUN_0055367f((void *)(unaff_EBP + 0x24));
        puVar17 = *(undefined2 **)(unaff_EBP + 0x28);
        *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0xc);
        puVar11 = *(undefined1 **)(unaff_EBP + 0x10);
        *(undefined1 **)(unaff_EBP + -0x74) = puVar11;
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar11 = FUN_00551357((void *)(unaff_EBP + -0x78),
                                 CONCAT22((short)((uint)puVar11 >> 0x10),*puVar17));
          puVar17 = puVar17 + 1;
        }
        uVar12 = *(undefined4 *)(unaff_EBP + -0x78);
        uVar15 = *(undefined4 *)(unaff_EBP + -0x74);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar12;
      }
      else {
        uVar6 = *(uint *)(unaff_EBP + 0x2c);
        if (*(uint *)(unaff_EBP + 0x14) < uVar6) {
          FUN_0055367f((void *)(unaff_EBP + 0x24));
          iVar10 = *(int *)(unaff_EBP + 0x14);
          puVar17 = *(undefined2 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0xc);
          puVar11 = *(undefined1 **)(unaff_EBP + 0x10);
          *(undefined1 **)(unaff_EBP + -100) = puVar11;
          for (iVar16 = uVar6 - iVar10; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar11 = FUN_00551357((void *)(unaff_EBP + -0x68),
                                   CONCAT22((short)((uint)puVar11 >> 0x10),*puVar17));
            puVar17 = puVar17 + 1;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x68);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -100);
          uVar12 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
          FUN_00551357((void *)(unaff_EBP + 0xc),uVar12);
          FUN_0055367f((void *)(unaff_EBP + 0x24));
          puVar17 = (undefined2 *)
                    ((-(uint)(*(int *)(unaff_EBP + 0x28) != 0) &
                     *(int *)(unaff_EBP + 0x28) + *(int *)(unaff_EBP + 0x2c) * 2) + iVar10 * -2);
          *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0xc);
          puVar11 = *(undefined1 **)(unaff_EBP + 0x10);
          *(undefined1 **)(unaff_EBP + -0x6c) = puVar11;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar11 = FUN_00551357((void *)(unaff_EBP + -0x70),
                                   CONCAT22((short)((uint)puVar11 >> 0x10),*puVar17));
            puVar17 = puVar17 + 1;
          }
          uVar12 = *(undefined4 *)(unaff_EBP + -0x70);
          uVar15 = *(undefined4 *)(unaff_EBP + -0x6c);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar12;
        }
        else {
          uVar6 = FUN_0054ef7c(0x30);
          FUN_00551357((void *)(unaff_EBP + 0xc),uVar6);
          uVar12 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
          FUN_00551357((void *)(unaff_EBP + 0xc),uVar12);
          iVar10 = *(int *)(unaff_EBP + 0x14);
          iVar16 = *(int *)(unaff_EBP + 0x2c);
          uVar6 = FUN_0054ef7c(0x30);
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0x10);
          for (iVar10 = iVar10 - iVar16; iVar10 != 0; iVar10 = iVar10 + -1) {
            FUN_00551357((void *)(unaff_EBP + -0x60),uVar6);
          }
          iVar10 = *(int *)(unaff_EBP + 0x2c);
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x60);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x5c);
          FUN_0055367f((void *)(unaff_EBP + 0x24));
          puVar17 = *(undefined2 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
          puVar11 = *(undefined1 **)(unaff_EBP + 0x10);
          *(undefined1 **)(unaff_EBP + -0x44) = puVar11;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar11 = FUN_00551357((void *)(unaff_EBP + -0x48),
                                   CONCAT22((short)((uint)puVar11 >> 0x10),*puVar17));
            puVar17 = puVar17 + 1;
          }
          uVar12 = *(undefined4 *)(unaff_EBP + -0x48);
          uVar15 = *(undefined4 *)(unaff_EBP + -0x44);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar12;
        }
      }
      goto LAB_00552e0a;
    }
LAB_00552f60:
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    if (3 < *(uint *)(unaff_EBP + -0x24)) {
      uVar6 = *(uint *)(unaff_EBP + -0x38);
      if (1 < uVar6) {
        FUN_0055367f((void *)(unaff_EBP + -0x40));
        puVar17 = *(undefined2 **)(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
        puVar11 = (undefined1 *)(uVar6 - 1);
        puVar13 = puVar11;
        for (; puVar11 != (undefined1 *)0x0; puVar11 = puVar11 + -1) {
          puVar17 = puVar17 + 1;
          puVar13 = FUN_00551357((void *)(unaff_EBP + -0x18),
                                 CONCAT22((short)((uint)puVar13 >> 0x10),*puVar17));
        }
        uVar12 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar15 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar12;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar15;
      }
      iVar10 = *(int *)(unaff_EBP + 0x20);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar12;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar15;
      *(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x14) = 0;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_00551357((void *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 0x1c));
      }
      puVar8 = *(undefined4 **)(unaff_EBP + 8);
      *puVar8 = *(undefined4 *)(unaff_EBP + -0x18);
      puVar8[1] = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00553734((void *)(unaff_EBP + -0x8c),'\x01');
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00553734((void *)(unaff_EBP + -0x40),'\x01');
      FUN_004028f0((void *)(unaff_EBP + -0x9c),'\x01');
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00553734((void *)(unaff_EBP + 0x24),'\x01');
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar8;
    }
  } while( true );
}


