
/* ==== FUN_005513aa @ 005513aa ==== 
 * signature: undefined4 __stdcall FUN_005513aa(void)
 * body: 005513aa-00551778
 */

undefined4 FUN_005513aa(void)

{
  int iVar1;
  undefined4 *this;
  size_t _MaxCount;
  uint uVar2;
  int *this_00;
  undefined4 uVar3;
  uint uVar4;
  undefined2 uVar10;
  undefined2 extraout_var;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int unaff_EBP;
  
  FUN_0055b39c();
  uVar2 = FUN_0054ef7c(0x30);
  this_00 = (int *)FUN_00553cd8();
  FUN_005533aa(this_00,unaff_EBP + -0x38);
  iVar1 = *this_00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = (**(code **)(iVar1 + 8))();
  this = *(undefined4 **)(unaff_EBP + 0xc);
  puVar9 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  *(undefined1 **)(unaff_EBP + -0x10) = puVar9;
  uVar3 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
  if ((char)uVar3 == '\0') {
    if (*(char *)(this + 1) == '\0') {
      Peek(this);
    }
    uVar4 = FUN_0054ef7c(0x2b);
    if (*(short *)((int)this + 6) == (short)uVar4) {
      *puVar9 = 0x2b;
    }
    else {
      if (*(char *)(this + 1) == '\0') {
        Peek(this);
      }
      uVar4 = FUN_0054ef7c(0x2d);
      if (*(short *)((int)this + 6) != (short)uVar4) goto LAB_0055144c;
      *puVar9 = 0x2d;
    }
    *(undefined1 **)(unaff_EBP + -0x10) = puVar9 + 1;
    FUN_0055331d(this);
  }
LAB_0055144c:
  uVar4 = *(uint *)(unaff_EBP + 0x14) & 0xe00;
  if (uVar4 == 0x400) {
    *(undefined4 *)(unaff_EBP + 0x14) = 8;
  }
  else if (uVar4 == 0x800) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = -(uint)(uVar4 != 0) & 10;
  }
  *(undefined1 *)(unaff_EBP + 0x1b) = 0;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  uVar3 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
  if ((char)uVar3 == '\0') {
    if (*(char *)(this + 1) == '\0') {
      Peek(this);
    }
    if (*(short *)((int)this + 6) != (short)uVar2) goto LAB_0055151f;
    *(undefined1 *)(unaff_EBP + 0x1b) = 1;
    FUN_0055331d(this);
    uVar3 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
    if ((char)uVar3 != '\0') {
LAB_00551512:
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 8;
        goto LAB_0055151f;
      }
      goto LAB_00551525;
    }
    if (*(char *)(this + 1) == '\0') {
      Peek(this);
    }
    uVar2 = FUN_0054ef7c(0x78);
    if (*(short *)((int)this + 6) != (short)uVar2) {
      if (*(char *)(this + 1) == '\0') {
        Peek(this);
      }
      uVar2 = FUN_0054ef7c(0x58);
      if (*(short *)((int)this + 6) != (short)uVar2) goto LAB_00551512;
    }
    if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x14) != 0x10))
    goto LAB_00551512;
    *(undefined1 *)(unaff_EBP + 0x1b) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
    FUN_0055331d(this);
LAB_0055152b:
    *(uint *)(unaff_EBP + -0x14) = ((*(int *)(unaff_EBP + 0x14) != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_0055151f:
    if (*(int *)(unaff_EBP + 0x14) != 0) {
LAB_00551525:
      if (*(int *)(unaff_EBP + 0x14) != 10) goto LAB_0055152b;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 10;
  }
  uVar2 = 0;
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\0');
  FUN_0054e333((void *)(unaff_EBP + -0x28),1,*(char *)(unaff_EBP + 0x1b) != '\0');
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar3 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
  if ((char)uVar3 == '\0') {
    do {
      uVar10 = (undefined2)((uint)uVar3 >> 0x10);
      if (*(char *)(this + 1) == '\0') {
        Peek(this);
        uVar10 = extraout_var;
      }
      iVar5 = FUN_0054eb1f(CONCAT22(uVar10,*(undefined2 *)((int)this + 6)));
      _MaxCount = *(size_t *)(unaff_EBP + -0x14);
      **(char **)(unaff_EBP + -0x10) = (char)iVar5;
      pvVar6 = _memchr("0123456789abcdefABCDEF",(int)(char)iVar5,_MaxCount);
      if (pvVar6 == (void *)0x0) {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar2) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar7 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar2);
        }
        if ((*pcVar7 == '\0') || (*(short *)(unaff_EBP + -0x18) == 0)) break;
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(short *)((int)this + 6) != *(short *)(unaff_EBP + -0x18)) break;
        FUN_0047eab0((void *)(unaff_EBP + -0x28),1,0);
        uVar2 = uVar2 + 1;
      }
      else {
        if (((*(char *)(unaff_EBP + 0xf) != '\0') || (**(char **)(unaff_EBP + -0x10) != '0')) &&
           (*(uint *)(unaff_EBP + -0x10) < iVar1 + 0x1fU)) {
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + 0x1b) = 1;
        if ((*(uint *)(unaff_EBP + -0x20) < uVar2) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar7 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar2);
        }
        if (*pcVar7 != '\x7f') {
          if ((*(uint *)(unaff_EBP + -0x20) < uVar2) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            pcVar7 = "";
          }
          else {
            FUN_00471de0((void *)(unaff_EBP + -0x28));
            pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar2);
          }
          *pcVar7 = *pcVar7 + '\x01';
        }
      }
      FUN_0055331d(this);
      uVar3 = FUN_00554775(this,*(int **)(unaff_EBP + 0x10));
    } while ((char)uVar3 == '\0');
    if (uVar2 != 0) {
      if ((*(uint *)(unaff_EBP + -0x20) < uVar2) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar7 = "";
      }
      else {
        FUN_00471de0((void *)(unaff_EBP + -0x28));
        pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar2);
      }
      if (*pcVar7 < '\x01') {
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      else {
        uVar2 = uVar2 + 1;
      }
    }
  }
  pcVar7 = *(char **)(unaff_EBP + -0x34);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "";
  }
  if (*(char *)(unaff_EBP + 0x1b) != '\0') {
    do {
      if ((uVar2 == 0) || (*pcVar7 == '\x7f')) break;
      uVar4 = uVar2 - 1;
      if (uVar4 == 0) {
LAB_005516fb:
        if (uVar4 == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            pcVar8 = "";
          }
          else {
            FUN_00471de0((void *)(unaff_EBP + -0x28));
            pcVar8 = *(char **)(unaff_EBP + -0x24);
          }
          if (*pcVar7 < *pcVar8) goto LAB_00551720;
        }
        if ('\0' < pcVar7[1]) {
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar4) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar8 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar4);
        }
        if (*pcVar7 == *pcVar8) goto LAB_005516fb;
LAB_00551720:
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      uVar2 = uVar2 - 2;
    } while (*(char *)(unaff_EBP + 0x1b) != '\0');
    if (*(char *)(unaff_EBP + 0x1b) != '\0') {
      puVar9 = *(undefined1 **)(unaff_EBP + -0x10);
      if (*(char *)(unaff_EBP + 0xf) == '\0') {
        *puVar9 = 0x30;
        puVar9 = puVar9 + 1;
      }
      goto LAB_00551750;
    }
  }
  puVar9 = *(undefined1 **)(unaff_EBP + 8);
LAB_00551750:
  *puVar9 = 0;
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\x01');
  FUN_004028f0((void *)(unaff_EBP + -0x38),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x14);
}


