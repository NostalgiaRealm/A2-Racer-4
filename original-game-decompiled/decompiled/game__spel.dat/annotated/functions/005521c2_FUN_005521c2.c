
/* ==== FUN_005521c2 @ 005521c2 ==== 
 * signature: undefined1 * __stdcall FUN_005521c2(void)
 * body: 005521c2-00552a62
 */

undefined1 * FUN_005521c2(void)

{
  short sVar1;
  undefined4 *this;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *this_00;
  bool bVar4;
  char cVar5;
  short sVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined2 uVar14;
  undefined2 extraout_var;
  char *pcVar10;
  undefined2 extraout_var_00;
  char *pcVar11;
  undefined2 extraout_var_01;
  void *pvVar12;
  uint uVar13;
  short *psVar15;
  int unaff_EBP;
  uint uVar16;
  int iVar17;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x40));
    *(undefined4 *)(unaff_EBP + -4) = 2;
    piVar7 = (int *)FUN_0055409f();
    *(int **)(unaff_EBP + -0x24) = piVar7;
  }
  else {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x40));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piVar7 = (int *)FUN_00554162();
    *(int **)(unaff_EBP + -0x24) = piVar7;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x40));
  FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x6c));
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar8 = FUN_00553a7f();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar8;
  std::locale::~locale((locale *)(unaff_EBP + -0x6c));
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x3c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734((void *)(unaff_EBP + -0x3c),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined1 *)(unaff_EBP + -0x68) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00553734((void *)(unaff_EBP + -0x68),'\0');
  iVar17 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puVar9 = (undefined4 *)(**(code **)(iVar17 + 0x24))(unaff_EBP + -0x58);
  this = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x70) = *puVar9;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    uVar13 = *(uint *)(unaff_EBP + -0x2c);
    if (3 < uVar13) break;
    cVar5 = *(char *)(unaff_EBP + -0x70 + uVar13);
    if (cVar5 == '$') {
      FUN_0055210f(piVar7,unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x34) != 0)) &&
           (uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), (char)uVar8 == '\0')) {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          psVar15 = *(short **)(unaff_EBP + -0x50);
          if (psVar15 == (short *)0x0) {
            psVar15 = &DAT_00579320;
          }
          if (*(short *)((int)this + 6) == *psVar15) goto LAB_005528c7;
        }
        FUN_00553613((void *)(unaff_EBP + -0x54),0,0xffffffff);
      }
LAB_005528c7:
      FUN_0055367f((void *)(unaff_EBP + -0x54));
      for (psVar15 = *(short **)(unaff_EBP + -0x50);
          (uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), (char)uVar8 == '\0' &&
          (FUN_0055367f((void *)(unaff_EBP + -0x54)),
          psVar15 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x50) != 0) &
                   *(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + -0x4c) * 2)));
          psVar15 = psVar15 + 1) {
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(short *)((int)this + 6) != *psVar15) break;
        FUN_0055331d(this);
      }
      FUN_0055367f((void *)(unaff_EBP + -0x54));
      if (psVar15 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x50) != 0) &
                   *(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + -0x4c) * 2)) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00553734((void *)(unaff_EBP + -0x54),'\x01');
    }
    else if (cVar5 == '+') {
      uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
      if ((char)uVar8 == '\0') {
        iVar17 = FUN_00556fac(piVar7,unaff_EBP + -0xc0);
        iVar17 = *(int *)(iVar17 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar17 == 0) {
LAB_0055272c:
          bVar4 = false;
        }
        else {
          pvVar12 = (void *)FUN_00556fac(piVar7,unaff_EBP + -0xe0);
          iVar17 = *(int *)((int)pvVar12 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar17 == 0) {
            psVar15 = &DAT_00579320;
          }
          else {
            FUN_0055367f(pvVar12);
            psVar15 = *(short **)((int)pvVar12 + 4);
          }
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          sVar6 = *psVar15;
          sVar1 = *(short *)((int)this + 6);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00553734((void *)(unaff_EBP + -0xe0),'\x01');
          if (sVar6 != sVar1) goto LAB_0055272c;
          bVar4 = true;
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00553734((void *)(unaff_EBP + -0xc0),'\x01');
        if (bVar4) {
          FUN_0055331d(this);
          pvVar12 = (void *)FUN_00556fac(piVar7,unaff_EBP + -0xa0);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_005533c1((void *)(unaff_EBP + -0x3c),pvVar12,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          pvVar12 = (void *)(unaff_EBP + -0xa0);
        }
        else {
          iVar17 = FUN_00553788(piVar7,unaff_EBP + -0xd0);
          iVar17 = *(int *)(iVar17 + 8);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar17 == 0) {
LAB_005527f1:
            bVar4 = false;
          }
          else {
            pvVar12 = (void *)FUN_00553788(piVar7,unaff_EBP + -0xb0);
            iVar17 = *(int *)((int)pvVar12 + 4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (iVar17 == 0) {
              psVar15 = &DAT_00579320;
            }
            else {
              FUN_0055367f(pvVar12);
              psVar15 = *(short **)((int)pvVar12 + 4);
            }
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            sVar6 = *psVar15;
            sVar1 = *(short *)((int)this + 6);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_00553734((void *)(unaff_EBP + -0xb0),'\x01');
            if (sVar6 != sVar1) goto LAB_005527f1;
            bVar4 = true;
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00553734((void *)(unaff_EBP + -0xd0),'\x01');
          if (!bVar4) goto LAB_00552847;
          FUN_0055331d(this);
          pvVar12 = (void *)FUN_00553788(piVar7,unaff_EBP + -0xf0);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_005533c1((void *)(unaff_EBP + -0x3c),pvVar12,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          pvVar12 = (void *)(unaff_EBP + -0xf0);
        }
        FUN_00553734(pvVar12,'\x01');
      }
LAB_00552847:
      if (*(int *)(unaff_EBP + -0x34) == 1) {
        FUN_00553613((void *)(unaff_EBP + -0x3c),0,0xffffffff);
      }
    }
    else {
      if (cVar5 != 'v') {
        if ((uVar13 != 3) &&
           (uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), (char)uVar8 == '\0')) {
          piVar2 = *(int **)(unaff_EBP + -0x28);
          do {
            uVar14 = (undefined2)((uint)uVar8 >> 0x10);
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
              uVar14 = extraout_var;
            }
            cVar5 = (**(code **)(*piVar2 + 8))(0x48,CONCAT22(uVar14,*(undefined2 *)((int)this + 6)))
            ;
            if (cVar5 == '\0') break;
            FUN_0055331d(this);
            uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar8 == '\0');
        }
        goto LAB_0055294d;
      }
      iVar17 = *piVar7;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      uVar8 = (**(code **)(iVar17 + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x44) = uVar8;
      FUN_00553771(piVar7,unaff_EBP + -0x90);
      pcVar10 = *(char **)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      if (*pcVar10 < '\x01') {
        while (uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), (char)uVar8 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          cVar5 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))(4,*(undefined2 *)((int)this + 6))
          ;
          if (cVar5 == '\0') break;
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          uVar8 = *this;
          uVar3 = this[1];
          FUN_0055331d(this);
          *(undefined4 *)(unaff_EBP + -0x80) = uVar8;
          *(undefined4 *)(unaff_EBP + -0x7c) = uVar3;
          if ((char)uVar3 == '\0') {
            Peek((undefined4 *)(unaff_EBP + -0x80));
          }
          FUN_00553039((void *)(unaff_EBP + -0x68),1,(short)*(undefined4 *)(unaff_EBP + -0x7a));
        }
LAB_005525c0:
        uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
        if ((char)uVar8 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          sVar6 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 4))();
          if (*(short *)((int)this + 6) != sVar6) goto LAB_00552661;
          FUN_0055331d(this);
          uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          if ((char)uVar8 != '\0') goto LAB_00552661;
          iVar17 = *(int *)(unaff_EBP + -0x44);
          piVar7 = *(int **)(unaff_EBP + -0x28);
          do {
            uVar14 = (undefined2)((uint)uVar8 >> 0x10);
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
              uVar14 = extraout_var_01;
            }
            cVar5 = (**(code **)(*piVar7 + 8))(4,CONCAT22(uVar14,*(undefined2 *)((int)this + 6)));
            if (cVar5 == '\0') break;
            if (*(int *)(unaff_EBP + 0xc) < iVar17) {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              FUN_00553039((void *)(unaff_EBP + -0x68),1,*(undefined2 *)((int)this + 6));
              *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
            }
            FUN_0055331d(this);
            uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar8 == '\0');
        }
        else {
LAB_00552661:
          iVar17 = *(int *)(unaff_EBP + -0x44);
        }
        if (*(int *)(unaff_EBP + -0x60) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + 0xc) < iVar17) {
          iVar17 = iVar17 - *(int *)(unaff_EBP + 0xc);
          do {
            uVar13 = FUN_0054ef7c(0x30);
            FUN_00553039((void *)(unaff_EBP + -0x68),1,(short)uVar13);
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
      }
      else {
        uVar8 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        *(undefined4 *)(unaff_EBP + -0x58) = uVar8;
        uVar13 = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_004028f0((void *)(unaff_EBP + -0x20),'\0');
        FUN_0054e333((void *)(unaff_EBP + -0x20),1,'\0');
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
        if ((char)uVar8 == '\0') {
          do {
            uVar14 = (undefined2)((uint)uVar8 >> 0x10);
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
              uVar14 = extraout_var_00;
            }
            cVar5 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))
                              (4,CONCAT22(uVar14,*(undefined2 *)((int)this + 6)));
            if (cVar5 == '\0') {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar13) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar10 = "";
              }
              else {
                FUN_00471de0((void *)(unaff_EBP + -0x20));
                pcVar10 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar13);
              }
              if (*pcVar10 == '\0') break;
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              if (*(short *)((int)this + 6) != *(short *)(unaff_EBP + -0x58)) break;
              FUN_0047eab0((void *)(unaff_EBP + -0x20),1,0);
              uVar13 = uVar13 + 1;
            }
            else {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              FUN_00553039((void *)(unaff_EBP + -0x68),1,*(undefined2 *)((int)this + 6));
              if ((*(uint *)(unaff_EBP + -0x18) < uVar13) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar10 = "";
              }
              else {
                FUN_00471de0((void *)(unaff_EBP + -0x20));
                pcVar10 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar13);
              }
              if (*pcVar10 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < uVar13) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar10 = "";
                }
                else {
                  FUN_00471de0((void *)(unaff_EBP + -0x20));
                  pcVar10 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar13);
                }
                *pcVar10 = *pcVar10 + '\x01';
              }
            }
            FUN_0055331d(this);
            uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar8 == '\0');
          if (uVar13 != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < uVar13) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar10 = "";
            }
            else {
              FUN_00471de0((void *)(unaff_EBP + -0x20));
              pcVar10 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar13);
            }
            if (*pcVar10 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              uVar13 = uVar13 + 1;
            }
          }
        }
        pcVar10 = *(char **)(unaff_EBP + -0x8c);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "";
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((uVar13 == 0) || (*pcVar10 == '\x7f')) break;
            uVar16 = uVar13 - 1;
            if (uVar16 == 0) {
LAB_0055255d:
              if (uVar16 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar11 = "";
                }
                else {
                  FUN_00471de0((void *)(unaff_EBP + -0x20));
                  pcVar11 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar10 < *pcVar11) goto LAB_00552585;
              }
              if ('\0' < pcVar10[1]) {
                pcVar10 = pcVar10 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar16) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar11 = "";
              }
              else {
                FUN_00471de0((void *)(unaff_EBP + -0x20));
                pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar16);
              }
              if (*pcVar10 == *pcVar11) goto LAB_0055255d;
LAB_00552585:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            uVar13 = uVar13 - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
            goto LAB_005525c0;
          }
        }
        FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004028f0((void *)(unaff_EBP + -0x90),'\x01');
      piVar7 = *(int **)(unaff_EBP + -0x24);
    }
LAB_0055294d:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      FUN_0055367f((void *)(unaff_EBP + -0x3c));
      psVar15 = *(short **)(unaff_EBP + -0x38);
      while (uVar8 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10)), (char)uVar8 == '\0') {
        psVar15 = psVar15 + 1;
        FUN_0055367f((void *)(unaff_EBP + -0x3c));
        if (psVar15 ==
            (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                     *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2)) break;
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(short *)((int)this + 6) != *psVar15) break;
        FUN_0055331d(this);
      }
      FUN_0055367f((void *)(unaff_EBP + -0x3c));
      if (psVar15 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                   *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2))
      goto LAB_005529df;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      uVar13 = FUN_0054ef7c(0x2d);
      FUN_00553539((void *)(unaff_EBP + -0x68),0,1,(short)uVar13);
    }
  }
  else {
LAB_005529df:
    FUN_00553613((void *)(unaff_EBP + -0x68),0,0xffffffff);
  }
  this_00 = *(undefined1 **)(unaff_EBP + 8);
  *this_00 = *(undefined1 *)(unaff_EBP + -0x68);
  FUN_00553734(this_00,'\0');
  FUN_005533c1(this_00,(void *)(unaff_EBP + -0x68),0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x74) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00553734((void *)(unaff_EBP + -0x68),'\x01');
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00553734((void *)(unaff_EBP + -0x3c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}


