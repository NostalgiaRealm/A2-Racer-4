
/* ==== FUN_0054e7ac @ 0054e7ac ==== 
 * signature: undefined4 __stdcall FUN_0054e7ac(void)
 * body: 0054e7ac-0054e964
 */

undefined4 FUN_0054e7ac(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *this;
  char cVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  char *pcVar9;
  int unaff_EBP;
  uint uVar10;
  int iVar11;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_0055b39c();
  pcVar9 = *(char **)(unaff_EBP + 0x14);
  cVar3 = *pcVar9;
  pcVar6 = pcVar9;
  cVar2 = cVar3;
  while (cVar2 != '\0') {
    if (cVar2 == cVar3) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\0');
  FUN_0054e333((void *)(unaff_EBP + -0x28),*(uint *)(unaff_EBP + 0x10),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  while( true ) {
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
    uVar10 = 0;
    iVar11 = 0;
    if (*(int *)(unaff_EBP + 0x10) == 0) break;
    do {
      cVar3 = pcVar9[iVar11];
      if (cVar3 != '\0') {
        do {
          if (cVar3 == *pcVar9) break;
          cVar3 = pcVar9[iVar11 + 1];
          iVar11 = iVar11 + 1;
        } while (cVar3 != '\0');
      }
      if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar6 = "";
      }
      else {
        FUN_00471de0((void *)(unaff_EBP + -0x28));
        pcVar6 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar10);
      }
      if (*pcVar6 == '\0') {
        iVar11 = iVar11 + *(int *)(unaff_EBP + -0x14);
        if ((pcVar9[iVar11] == *pcVar9) || (pcVar9[iVar11] == '\0')) {
          uVar7 = 0x7f;
          if (*(uint *)(unaff_EBP + -0x14) < 0x7f) {
            uVar7 = (undefined1)*(undefined4 *)(unaff_EBP + -0x14);
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar4 = &DAT_0057629c;
          }
          else {
            FUN_00471de0((void *)(unaff_EBP + -0x28));
            puVar4 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + uVar10);
          }
          *puVar4 = uVar7;
          *(uint *)(unaff_EBP + -0x18) = uVar10;
        }
        else {
          this = *(undefined4 **)(unaff_EBP + 8);
          uVar5 = FUN_0054e9af(this,*(int **)(unaff_EBP + 0xc));
          if ((char)uVar5 == '\0') {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if (*(char *)(iVar11 + *(int *)(unaff_EBP + 0x14)) == *(char *)((int)this + 5)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_0054e913;
            }
          }
          uVar8 = *(uint *)(unaff_EBP + -0x14);
          if (0x7e < uVar8) {
            uVar8 = 0x7f;
          }
          if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            puVar4 = &DAT_0057629c;
          }
          else {
            FUN_00471de0((void *)(unaff_EBP + -0x28));
            puVar4 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + uVar10);
          }
          *puVar4 = (char)uVar8;
        }
LAB_0054e913:
        pcVar9 = *(char **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar6 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar6 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar10);
        }
        iVar11 = iVar11 + *pcVar6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (uVar5 = FUN_0054e9af(*(void **)(unaff_EBP + 8),*(int **)(unaff_EBP + 0xc)),
       (char)uVar5 != '\0')) break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_0054e379(*(undefined4 **)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\x01');
  uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar5;
}


