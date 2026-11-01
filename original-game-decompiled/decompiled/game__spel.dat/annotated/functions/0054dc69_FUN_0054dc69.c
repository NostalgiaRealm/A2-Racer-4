
/* ==== FUN_0054dc69 @ 0054dc69 ==== 
 * signature: undefined4 __stdcall FUN_0054dc69(void)
 * body: 0054dc69-0054dffd
 */

undefined4 FUN_0054dc69(void)

{
  char cVar1;
  int iVar2;
  undefined4 *this;
  size_t _MaxCount;
  undefined1 uVar3;
  int *this_00;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int unaff_EBP;
  uint uVar10;
  
  FUN_0055b39c();
  this_00 = (int *)FUN_0054e63e();
  FUN_004d6100(this_00,unaff_EBP + -0x38);
  iVar2 = *this_00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = (**(code **)(iVar2 + 8))();
  this = *(undefined4 **)(unaff_EBP + 0xc);
  puVar9 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -0xd) = uVar3;
  *(undefined1 **)(unaff_EBP + -0x14) = puVar9;
  uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
  if ((char)uVar4 == '\0') {
    if (*(char *)(this + 1) == '\0') {
      Peek(this);
    }
    if (*(char *)((int)this + 5) == '+') {
      *puVar9 = 0x2b;
    }
    else {
      if (*(char *)(this + 1) == '\0') {
        Peek(this);
      }
      if (*(char *)((int)this + 5) != '-') goto LAB_0054dcf2;
      *puVar9 = 0x2d;
    }
    *(undefined1 **)(unaff_EBP + -0x14) = puVar9 + 1;
    FUN_0054e379(this);
  }
LAB_0054dcf2:
  uVar5 = *(uint *)(unaff_EBP + 0x14) & 0xe00;
  if (uVar5 == 0x400) {
    *(undefined4 *)(unaff_EBP + 0x14) = 8;
  }
  else if (uVar5 == 0x800) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = -(uint)(uVar5 != 0) & 10;
  }
  *(undefined1 *)(unaff_EBP + 0x1b) = 0;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
  if ((char)uVar4 == '\0') {
    if (*(char *)(this + 1) == '\0') {
      Peek(this);
    }
    if (*(char *)((int)this + 5) != '0') goto LAB_0054ddb3;
    *(undefined1 *)(unaff_EBP + 0x1b) = 1;
    FUN_0054e379(this);
    uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
    if ((char)uVar4 != '\0') {
LAB_0054dda6:
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 8;
        goto LAB_0054ddb3;
      }
      goto LAB_0054ddb9;
    }
    if (*(char *)(this + 1) == '\0') {
      Peek(this);
    }
    if (*(char *)((int)this + 5) != 'x') {
      if (*(char *)(this + 1) == '\0') {
        Peek(this);
      }
      if (*(char *)((int)this + 5) != 'X') goto LAB_0054dda6;
    }
    if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x14) != 0x10))
    goto LAB_0054dda6;
    *(undefined1 *)(unaff_EBP + 0x1b) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
    FUN_0054e379(this);
LAB_0054ddbe:
    *(uint *)(unaff_EBP + -0x18) = ((*(int *)(unaff_EBP + 0x14) != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_0054ddb3:
    if (*(int *)(unaff_EBP + 0x14) != 0) {
LAB_0054ddb9:
      if (*(int *)(unaff_EBP + 0x14) != 10) goto LAB_0054ddbe;
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 10;
  }
  uVar5 = 0;
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\0');
  FUN_0054e333((void *)(unaff_EBP + -0x28),1,*(char *)(unaff_EBP + 0x1b) != '\0');
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
  if ((char)uVar4 == '\0') {
    do {
      if (*(char *)(this + 1) == '\0') {
        Peek(this);
      }
      cVar1 = *(char *)((int)this + 5);
      _MaxCount = *(size_t *)(unaff_EBP + -0x18);
      **(char **)(unaff_EBP + -0x14) = cVar1;
      pvVar6 = _memchr("0123456789abcdefABCDEF",(int)cVar1,_MaxCount);
      if (pvVar6 == (void *)0x0) {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar5) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar7 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar5);
        }
        if ((*pcVar7 == '\0') || (*(char *)(unaff_EBP + -0xd) == '\0')) break;
        if (*(char *)(this + 1) == '\0') {
          Peek(this);
        }
        if (*(char *)((int)this + 5) != *(char *)(unaff_EBP + -0xd)) break;
        FUN_0047eab0((void *)(unaff_EBP + -0x28),1,0);
        uVar5 = uVar5 + 1;
      }
      else {
        if (((*(char *)(unaff_EBP + 0xf) != '\0') || (**(char **)(unaff_EBP + -0x14) != '0')) &&
           (*(uint *)(unaff_EBP + -0x14) < iVar2 + 0x1fU)) {
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + 0x1b) = 1;
        if ((*(uint *)(unaff_EBP + -0x20) < uVar5) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar7 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar5);
        }
        if (*pcVar7 != '\x7f') {
          if ((*(uint *)(unaff_EBP + -0x20) < uVar5) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            pcVar7 = "";
          }
          else {
            FUN_00471de0((void *)(unaff_EBP + -0x28));
            pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar5);
          }
          *pcVar7 = *pcVar7 + '\x01';
        }
      }
      FUN_0054e379(this);
      uVar4 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0x10));
    } while ((char)uVar4 == '\0');
    if (uVar5 != 0) {
      if ((*(uint *)(unaff_EBP + -0x20) < uVar5) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar7 = "";
      }
      else {
        FUN_00471de0((void *)(unaff_EBP + -0x28));
        pcVar7 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar5);
      }
      if (*pcVar7 < '\x01') {
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      else {
        uVar5 = uVar5 + 1;
      }
    }
  }
  pcVar7 = *(char **)(unaff_EBP + -0x34);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "";
  }
  if (*(char *)(unaff_EBP + 0x1b) != '\0') {
    do {
      if ((uVar5 == 0) || (*pcVar7 == '\x7f')) break;
      uVar10 = uVar5 - 1;
      if (uVar10 == 0) {
LAB_0054df80:
        if (uVar10 == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            pcVar8 = "";
          }
          else {
            FUN_00471de0((void *)(unaff_EBP + -0x28));
            pcVar8 = *(char **)(unaff_EBP + -0x24);
          }
          if (*pcVar7 < *pcVar8) goto LAB_0054dfa5;
        }
        if ('\0' < pcVar7[1]) {
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar8 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar10);
        }
        if (*pcVar7 == *pcVar8) goto LAB_0054df80;
LAB_0054dfa5:
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      uVar5 = uVar5 - 2;
    } while (*(char *)(unaff_EBP + 0x1b) != '\0');
    if (*(char *)(unaff_EBP + 0x1b) != '\0') {
      puVar9 = *(undefined1 **)(unaff_EBP + -0x14);
      if (*(char *)(unaff_EBP + 0xf) == '\0') {
        *puVar9 = 0x30;
        puVar9 = puVar9 + 1;
      }
      goto LAB_0054dfd5;
    }
  }
  puVar9 = *(undefined1 **)(unaff_EBP + 8);
LAB_0054dfd5:
  *puVar9 = 0;
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\x01');
  FUN_004028f0((void *)(unaff_EBP + -0x38),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x14);
}


