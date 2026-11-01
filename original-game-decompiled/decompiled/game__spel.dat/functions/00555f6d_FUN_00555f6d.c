
/* ==== FUN_00555f6d @ 00555f6d ==== 
 * signature: undefined1 * __stdcall FUN_00555f6d(void)
 * body: 00555f6d-005567d9
 */

undefined1 * FUN_00555f6d(void)

{
  undefined4 *this;
  undefined4 uVar1;
  undefined1 *this_00;
  undefined1 uVar2;
  char cVar3;
  int *this_01;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  void *pvVar7;
  int unaff_EBP;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x48));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    this_01 = (int *)FUN_00557425();
    *(int **)(unaff_EBP + -0x28) = this_01;
  }
  else {
    FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x48));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    this_01 = (int *)FUN_005574e8();
    *(int **)(unaff_EBP + -0x28) = this_01;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x48));
  FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x70));
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uVar4 = FUN_0054e3e2();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  std::locale::~locale((locale *)(unaff_EBP + -0x70));
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x40) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0((void *)(unaff_EBP + -0x40),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + -0x6c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0((void *)(unaff_EBP + -0x6c),'\0');
  iVar10 = *this_01;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puVar5 = (undefined4 *)(**(code **)(iVar10 + 0x24))(unaff_EBP + -0x44);
  this = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x78) = *puVar5;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    uVar8 = *(uint *)(unaff_EBP + -0x2c);
    if (3 < uVar8) break;
    cVar3 = *(char *)(unaff_EBP + -0x78 + uVar8);
    if (cVar3 == '$') {
      FUN_0055210f(this_01,unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x38) != 0)) &&
           (uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), (char)uVar4 == '\0')) {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          pcVar11 = *(char **)(unaff_EBP + -0x58);
          if (pcVar11 == (char *)0x0) {
            pcVar11 = "";
          }
          if (*(char *)((int)this + 5) == *pcVar11) goto LAB_0055665b;
        }
        FUN_0040f800((void *)(unaff_EBP + -0x5c),0,0xffffffff);
      }
LAB_0055665b:
      FUN_00471de0((void *)(unaff_EBP + -0x5c));
      for (pcVar11 = *(char **)(unaff_EBP + -0x58);
          (uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), (char)uVar4 == '\0' &&
          (FUN_00471de0((void *)(unaff_EBP + -0x5c)),
          pcVar11 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                  *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))));
          pcVar11 = pcVar11 + 1) {
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(char *)((int)this + 5) != *pcVar11) break;
        FUN_0054e379(this);
      }
      FUN_00471de0((void *)(unaff_EBP + -0x5c));
      if (pcVar11 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                  *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004028f0((void *)(unaff_EBP + -0x5c),'\x01');
    }
    else if (cVar3 == '+') {
      uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
      if ((char)uVar4 == '\0') {
        iVar10 = FUN_00556fac(this_01,unaff_EBP + -0xc4);
        iVar10 = *(int *)(iVar10 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar10 == 0) {
LAB_005564bb:
          *(undefined1 *)(unaff_EBP + 0xf) = 0;
        }
        else {
          pvVar7 = (void *)FUN_00556fac(this_01,unaff_EBP + -0xe4);
          iVar10 = *(int *)((int)pvVar7 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (iVar10 == 0) {
            pcVar11 = "";
          }
          else {
            FUN_00471de0(pvVar7);
            pcVar11 = *(char **)((int)pvVar7 + 4);
          }
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          *(bool *)(unaff_EBP + 0xf) = *pcVar11 == *(char *)((int)this + 5);
          FUN_004028f0((void *)(unaff_EBP + -0xe4),'\x01');
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_005564bb;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_004028f0((void *)(unaff_EBP + -0xc4),'\x01');
        if (*(char *)(unaff_EBP + 0xf) == '\0') {
          iVar10 = FUN_00556fc3(this_01,unaff_EBP + -0xd4);
          iVar10 = *(int *)(iVar10 + 8);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (iVar10 == 0) {
LAB_00556583:
            *(undefined1 *)(unaff_EBP + 0xf) = 0;
          }
          else {
            pvVar7 = (void *)FUN_00556fc3(this_01,unaff_EBP + -0xb4);
            iVar10 = *(int *)((int)pvVar7 + 4);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (iVar10 == 0) {
              pcVar11 = "";
            }
            else {
              FUN_00471de0(pvVar7);
              pcVar11 = *(char **)((int)pvVar7 + 4);
            }
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            *(bool *)(unaff_EBP + 0xf) = *pcVar11 == *(char *)((int)this + 5);
            FUN_004028f0((void *)(unaff_EBP + -0xb4),'\x01');
            if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_00556583;
            *(undefined1 *)(unaff_EBP + 0xf) = 1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004028f0((void *)(unaff_EBP + -0xd4),'\x01');
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_005565dd;
          FUN_0054e379(this);
          pvVar7 = (void *)FUN_00556fc3(this_01,unaff_EBP + -0xf4);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_004093c0((void *)(unaff_EBP + -0x40),pvVar7,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          pvVar7 = (void *)(unaff_EBP + -0xf4);
        }
        else {
          FUN_0054e379(this);
          pvVar7 = (void *)FUN_00556fac(this_01,unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_004093c0((void *)(unaff_EBP + -0x40),pvVar7,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          pvVar7 = (void *)(unaff_EBP + -0xa4);
        }
        FUN_004028f0(pvVar7,'\x01');
      }
LAB_005565dd:
      if (*(int *)(unaff_EBP + -0x38) == 1) {
        FUN_0040f800((void *)(unaff_EBP + -0x40),0,0xffffffff);
      }
    }
    else {
      if (cVar3 != 'v') {
        if (uVar8 != 3) {
          while (uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), (char)uVar4 == '\0') {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)this + 5) * 2) & 0x48) == 0) break;
            FUN_0054e379(this);
          }
        }
        goto LAB_005566dc;
      }
      iVar10 = *this_01;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      uVar4 = (**(code **)(iVar10 + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x4c) = uVar4;
      FUN_00553771(this_01,unaff_EBP + -0x94);
      pcVar11 = *(char **)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "";
      }
      if (*pcVar11 < '\x01') {
        while (uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), (char)uVar4 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                        (uint)*(byte *)((int)this + 5) * 2) >> 2 & 1) == 0) break;
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          uVar4 = *this;
          uVar1 = this[1];
          FUN_0054e379(this);
          *(undefined4 *)(unaff_EBP + -0x84) = uVar4;
          *(undefined4 *)(unaff_EBP + -0x80) = uVar1;
          if ((char)uVar1 == '\0') {
            Peek((undefined4 *)(unaff_EBP + -0x84));
          }
          FUN_0047eab0((void *)(unaff_EBP + -0x6c),1,(char)*(undefined4 *)(unaff_EBP + -0x7f));
        }
LAB_00556355:
        uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
        if ((char)uVar4 == '\0') {
          if (*(char *)(this + 1) == '\0') {
            Peek(this);
          }
          cVar3 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 4))();
          if (*(char *)((int)this + 5) != cVar3) goto LAB_005563f8;
          FUN_0054e379(this);
          uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
          if ((char)uVar4 != '\0') goto LAB_005563f8;
          iVar10 = *(int *)(unaff_EBP + -0x4c);
          do {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)this + 5) * 2) >> 2 & 1) == 0) break;
            if (*(int *)(unaff_EBP + -0x24) < iVar10) {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              *(undefined1 *)(unaff_EBP + -0x44) = *(undefined1 *)((int)this + 5);
              FUN_0047eab0((void *)(unaff_EBP + -0x6c),1,(char)*(undefined4 *)(unaff_EBP + -0x44));
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            }
            FUN_0054e379(this);
            uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar4 == '\0');
        }
        else {
LAB_005563f8:
          iVar10 = *(int *)(unaff_EBP + -0x4c);
        }
        if (*(int *)(unaff_EBP + -100) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + -0x24) < iVar10) {
          iVar10 = iVar10 - *(int *)(unaff_EBP + -0x24);
          do {
            FUN_0047eab0((void *)(unaff_EBP + -0x6c),1,0x30);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else {
        uVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        *(undefined1 *)(unaff_EBP + 0xf) = uVar2;
        uVar8 = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_004028f0((void *)(unaff_EBP + -0x20),'\0');
        FUN_0054e333((void *)(unaff_EBP + -0x20),1,'\0');
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
        if ((char)uVar4 == '\0') {
          do {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)this + 5) * 2) >> 2 & 1) == 0) {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar8) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar11 = "";
              }
              else {
                FUN_00471de0((void *)(unaff_EBP + -0x20));
                pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar8);
              }
              if (*pcVar11 == '\0') break;
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              if (*(char *)((int)this + 5) != *(char *)(unaff_EBP + 0xf)) break;
              FUN_0047eab0((void *)(unaff_EBP + -0x20),1,0);
              uVar8 = uVar8 + 1;
            }
            else {
              if (*(char *)(this + 1) == '\0') {
                Peek(this);
              }
              *(undefined1 *)(unaff_EBP + -0x74) = *(undefined1 *)((int)this + 5);
              FUN_0047eab0((void *)(unaff_EBP + -0x6c),1,(char)*(undefined4 *)(unaff_EBP + -0x74));
              if ((*(uint *)(unaff_EBP + -0x18) < uVar8) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar11 = "";
              }
              else {
                FUN_00471de0((void *)(unaff_EBP + -0x20));
                pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar8);
              }
              if (*pcVar11 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < uVar8) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar11 = "";
                }
                else {
                  FUN_00471de0((void *)(unaff_EBP + -0x20));
                  pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar8);
                }
                *pcVar11 = *pcVar11 + '\x01';
              }
            }
            FUN_0054e379(this);
            uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
          } while ((char)uVar4 == '\0');
          if (uVar8 != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < uVar8) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar11 = "";
            }
            else {
              FUN_00471de0((void *)(unaff_EBP + -0x20));
              pcVar11 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar8);
            }
            if (*pcVar11 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              uVar8 = uVar8 + 1;
            }
          }
        }
        pcVar11 = *(char **)(unaff_EBP + -0x90);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = "";
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((uVar8 == 0) || (*pcVar11 == '\x7f')) break;
            uVar9 = uVar8 - 1;
            if (uVar9 == 0) {
LAB_005562f2:
              if (uVar9 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar6 = "";
                }
                else {
                  FUN_00471de0((void *)(unaff_EBP + -0x20));
                  pcVar6 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar11 < *pcVar6) goto LAB_0055631a;
              }
              if ('\0' < pcVar11[1]) {
                pcVar11 = pcVar11 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar9) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar6 = "";
              }
              else {
                FUN_00471de0((void *)(unaff_EBP + -0x20));
                pcVar6 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar9);
              }
              if (*pcVar11 == *pcVar6) goto LAB_005562f2;
LAB_0055631a:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            uVar8 = uVar8 - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
            goto LAB_00556355;
          }
        }
        FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004028f0((void *)(unaff_EBP + -0x94),'\x01');
      this_01 = *(int **)(unaff_EBP + -0x28);
    }
LAB_005566dc:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      FUN_00471de0((void *)(unaff_EBP + -0x40));
      pcVar11 = *(char **)(unaff_EBP + -0x3c);
      while (uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10)), (char)uVar4 == '\0') {
        pcVar11 = pcVar11 + 1;
        FUN_00471de0((void *)(unaff_EBP + -0x40));
        if (pcVar11 ==
            (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                    *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38))) break;
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(char *)((int)this + 5) != *pcVar11) break;
        FUN_0054e379(this);
      }
      FUN_00471de0((void *)(unaff_EBP + -0x40));
      if (pcVar11 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                  *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38))) goto LAB_0055676b;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      FUN_00556f2d((void *)(unaff_EBP + -0x6c),0,1,'-');
    }
  }
  else {
LAB_0055676b:
    FUN_0040f800((void *)(unaff_EBP + -0x6c),0,0xffffffff);
  }
  this_00 = *(undefined1 **)(unaff_EBP + 8);
  *this_00 = *(undefined1 *)(unaff_EBP + -0x6c);
  FUN_004028f0(this_00,'\0');
  FUN_004093c0(this_00,(void *)(unaff_EBP + -0x6c),0,0xffffffff);
  FUN_004028f0((void *)(unaff_EBP + -0x6c),'\x01');
  FUN_004028f0((void *)(unaff_EBP + -0x40),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}


