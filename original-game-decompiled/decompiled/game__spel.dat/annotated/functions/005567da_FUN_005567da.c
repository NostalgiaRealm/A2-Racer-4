
/* ==== FUN_005567da @ 005567da ==== 
 * signature: undefined4 * __stdcall FUN_005567da(void)
 * body: 005567da-00556d84
 */

undefined4 * FUN_005567da(void)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int *this;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int unaff_EBP;
  byte *pbVar14;
  int iVar15;
  char *pcVar16;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x28));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    this = (int *)FUN_00557425();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x2c) = this;
  }
  else {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x28));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    this = (int *)FUN_005574e8();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x2c) = this;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x28));
  uVar6 = (**(code **)(*this + 0x1c))();
  *(uint *)(unaff_EBP + 0x14) = uVar6;
  FUN_00553771(this,unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (uVar6 < *(uint *)(unaff_EBP + 0x2c)) {
    pcVar7 = *(char **)(unaff_EBP + -0xa0);
    pcVar16 = "";
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    if ('\0' < *pcVar7) {
      uVar5 = (**(code **)(*this + 8))();
      *(undefined1 *)(unaff_EBP + -0x10) = uVar5;
      if (*(int *)(unaff_EBP + -0xa0) != 0) {
        pcVar16 = *(char **)(unaff_EBP + -0xa0);
      }
      uVar6 = *(int *)(unaff_EBP + 0x2c) - *(int *)(unaff_EBP + 0x14);
      while (((cVar1 = *pcVar16, cVar1 != '\x7f' && ('\0' < cVar1)) && ((uint)(int)cVar1 < uVar6)))
      {
        uVar6 = uVar6 - (int)cVar1;
        FUN_00556f2d((void *)(unaff_EBP + 0x24),uVar6,1,(char)*(undefined4 *)(unaff_EBP + -0x10));
        if ('\0' < pcVar16[1]) {
          pcVar16 = pcVar16 + 1;
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -0x44) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0((void *)(unaff_EBP + -0x44),'\0');
  iVar10 = *this;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    puVar8 = (undefined4 *)(**(code **)(iVar10 + 0x20))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar8;
    pvVar9 = (void *)FUN_00556fac(this,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004093c0((void *)(unaff_EBP + -0x44),pvVar9,0,0xffffffff);
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(iVar10 + 0x24))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar8;
    pvVar9 = (void *)FUN_00556fc3(this,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004093c0((void *)(unaff_EBP + -0x44),pvVar9,0,0xffffffff);
  }
  FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
  *(undefined1 *)(unaff_EBP + -0x90) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0((void *)(unaff_EBP + -0x90),'\0');
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if ((*(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) != 0) {
    pvVar9 = (void *)FUN_0055210f(this,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_004093c0((void *)(unaff_EBP + -0x90),pvVar9,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
  }
  bVar4 = false;
  uVar12 = 0;
  uVar6 = 0;
  do {
    cVar1 = *(char *)(unaff_EBP + -0x10 + uVar6);
    if (cVar1 == ' ') {
      bVar4 = true;
    }
    else if (cVar1 == '$') {
      uVar12 = uVar12 + *(int *)(unaff_EBP + -0x88);
    }
    else if (cVar1 == '+') {
      uVar12 = uVar12 + *(int *)(unaff_EBP + -0x3c);
    }
    else if (cVar1 == 'v') {
      uVar3 = *(uint *)(unaff_EBP + 0x14);
      if (uVar3 < *(uint *)(unaff_EBP + 0x2c)) {
        iVar10 = 0;
      }
      else {
        iVar10 = (uVar3 - *(int *)(unaff_EBP + 0x2c)) + 1;
      }
      uVar12 = uVar12 + (uint)(uVar3 != 0) + *(int *)(unaff_EBP + 0x2c) + iVar10;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  uVar6 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0x14);
  if (((int)uVar6 < 1) || (uVar6 <= uVar12)) {
    iVar10 = 0;
  }
  else {
    iVar10 = uVar6 - uVar12;
  }
  uVar6 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc);
  *(int *)(unaff_EBP + 0x20) = iVar10;
  uVar6 = uVar6 & 0x1c0;
  *(uint *)(unaff_EBP + -0x80) = uVar6;
  if ((uVar6 != 0x40) && ((uVar6 != 0x100 || (!bVar4)))) {
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      FUN_004d60a0((void *)(unaff_EBP + -0x34),(byte)*(undefined4 *)(unaff_EBP + 0x1c));
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x30);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar11 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar13 = *(undefined4 *)(unaff_EBP + 0x10);
  do {
    cVar1 = *(char *)(unaff_EBP + -0x10 + *(int *)(unaff_EBP + -0x24));
    if (cVar1 == ' ') {
      if (uVar6 == 0x100) {
        iVar10 = *(int *)(unaff_EBP + 0x20);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar11;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar13;
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          FUN_004d60a0((void *)(unaff_EBP + -0x18),(byte)*(undefined4 *)(unaff_EBP + 0x1c));
        }
        uVar11 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar13 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar13;
      }
      goto LAB_00556cc2;
    }
    if (cVar1 == '$') {
      iVar10 = *(int *)(unaff_EBP + -0x88);
      FUN_00471de0((void *)(unaff_EBP + -0x90));
      pbVar14 = *(byte **)(unaff_EBP + -0x8c);
      *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_004d60a0((void *)(unaff_EBP + -0x5c),*pbVar14);
        pbVar14 = pbVar14 + 1;
      }
      uVar11 = *(undefined4 *)(unaff_EBP + -0x5c);
      uVar13 = *(undefined4 *)(unaff_EBP + -0x58);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
LAB_00556b73:
      *(undefined4 *)(unaff_EBP + 0x10) = uVar13;
    }
    else if (cVar1 == '+') {
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        FUN_00471de0((void *)(unaff_EBP + -0x44));
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0xc);
        bVar2 = **(byte **)(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0x10);
        FUN_004d60a0((void *)(unaff_EBP + -0x54),bVar2);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x54);
        uVar13 = *(undefined4 *)(unaff_EBP + -0x50);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
        goto LAB_00556b73;
      }
    }
    else if (cVar1 == 'v') {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        iVar10 = *(int *)(unaff_EBP + 0x2c);
        FUN_00471de0((void *)(unaff_EBP + 0x24));
        pbVar14 = *(byte **)(unaff_EBP + 0x28);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0x10);
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          FUN_004d60a0((void *)(unaff_EBP + -0x74),*pbVar14);
          pbVar14 = pbVar14 + 1;
        }
        uVar11 = *(undefined4 *)(unaff_EBP + -0x74);
        uVar13 = *(undefined4 *)(unaff_EBP + -0x70);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
      }
      else {
        uVar6 = *(uint *)(unaff_EBP + 0x2c);
        if (*(uint *)(unaff_EBP + 0x14) < uVar6) {
          FUN_00471de0((void *)(unaff_EBP + 0x24));
          iVar10 = *(int *)(unaff_EBP + 0x14);
          pbVar14 = *(byte **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0x10);
          for (iVar15 = uVar6 - iVar10; iVar15 != 0; iVar15 = iVar15 + -1) {
            FUN_004d60a0((void *)(unaff_EBP + -0x6c),*pbVar14);
            pbVar14 = pbVar14 + 1;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x6c);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x68);
          uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 4))();
          *(undefined1 *)(unaff_EBP + -0x30) = uVar5;
          FUN_004d60a0((void *)(unaff_EBP + 0xc),(byte)*(undefined4 *)(unaff_EBP + -0x30));
          FUN_00471de0((void *)(unaff_EBP + 0x24));
          *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + 0xc);
          pbVar14 = (byte *)((-(uint)(*(int *)(unaff_EBP + 0x28) != 0) &
                             *(int *)(unaff_EBP + 0x2c) + *(int *)(unaff_EBP + 0x28)) - iVar10);
          *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            FUN_004d60a0((void *)(unaff_EBP + -0x7c),*pbVar14);
            pbVar14 = pbVar14 + 1;
          }
          uVar11 = *(undefined4 *)(unaff_EBP + -0x7c);
          uVar13 = *(undefined4 *)(unaff_EBP + -0x78);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
        }
        else {
          FUN_004d60a0((void *)(unaff_EBP + 0xc),0x30);
          uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 4))();
          *(undefined1 *)(unaff_EBP + -0x94) = uVar5;
          FUN_004d60a0((void *)(unaff_EBP + 0xc),(byte)*(undefined4 *)(unaff_EBP + -0x94));
          *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0x10);
          for (iVar10 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0x2c); iVar10 != 0;
              iVar10 = iVar10 + -1) {
            FUN_004d60a0((void *)(unaff_EBP + -0x4c),0x30);
          }
          iVar10 = *(int *)(unaff_EBP + 0x2c);
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x4c);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x48);
          FUN_00471de0((void *)(unaff_EBP + 0x24));
          pbVar14 = *(byte **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            FUN_004d60a0((void *)(unaff_EBP + -100),*pbVar14);
            pbVar14 = pbVar14 + 1;
          }
          uVar11 = *(undefined4 *)(unaff_EBP + -100);
          uVar13 = *(undefined4 *)(unaff_EBP + -0x60);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
        }
      }
      goto LAB_00556b73;
    }
LAB_00556cc2:
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    if (3 < *(uint *)(unaff_EBP + -0x24)) {
      uVar6 = *(uint *)(unaff_EBP + -0x3c);
      if (1 < uVar6) {
        FUN_00471de0((void *)(unaff_EBP + -0x44));
        pbVar14 = *(byte **)(unaff_EBP + -0x40);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
        while (uVar6 = uVar6 - 1, uVar6 != 0) {
          pbVar14 = pbVar14 + 1;
          FUN_004d60a0((void *)(unaff_EBP + -0x18),*pbVar14);
        }
        uVar11 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar13 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar13;
      }
      iVar10 = *(int *)(unaff_EBP + 0x20);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar11;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar13;
      *(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x14) = 0;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_004d60a0((void *)(unaff_EBP + -0x18),(byte)*(undefined4 *)(unaff_EBP + 0x1c));
      }
      puVar8 = *(undefined4 **)(unaff_EBP + 8);
      *puVar8 = *(undefined4 *)(unaff_EBP + -0x18);
      puVar8[1] = *(undefined4 *)(unaff_EBP + -0x14);
      FUN_004028f0((void *)(unaff_EBP + -0x90),'\x01');
      FUN_004028f0((void *)(unaff_EBP + -0x44),'\x01');
      FUN_004028f0((void *)(unaff_EBP + -0xa4),'\x01');
      FUN_004028f0((void *)(unaff_EBP + 0x24),'\x01');
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar8;
    }
    uVar6 = *(uint *)(unaff_EBP + -0x80);
  } while( true );
}


