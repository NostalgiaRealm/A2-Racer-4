
/* ==== FUN_0055449e @ 0055449e ==== 
 * signature: undefined4 __stdcall FUN_0055449e(void)
 * body: 0055449e-00554669
 */

undefined4 FUN_0055449e(void)

{
  short sVar1;
  undefined4 *this;
  short sVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined1 uVar7;
  uint uVar8;
  short *psVar9;
  int unaff_EBP;
  uint uVar10;
  int iVar11;
  
  FUN_0055b39c();
  psVar9 = *(short **)(unaff_EBP + 0x14);
  sVar2 = *psVar9;
  psVar6 = psVar9;
  sVar1 = sVar2;
  while (sVar1 != 0) {
    if (sVar1 == sVar2) {
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    psVar6 = psVar6 + 1;
    sVar1 = *psVar6;
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
      sVar2 = psVar9[iVar11];
      psVar6 = psVar9 + iVar11;
      if (sVar2 != 0) {
        do {
          if (sVar2 == *psVar9) break;
          iVar11 = iVar11 + 1;
          psVar6 = psVar6 + 1;
          sVar2 = *psVar6;
        } while (sVar2 != 0);
      }
      if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar3 = "";
      }
      else {
        FUN_00471de0((void *)(unaff_EBP + -0x28));
        pcVar3 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar10);
      }
      if (*pcVar3 == '\0') {
        iVar11 = iVar11 + *(int *)(unaff_EBP + -0x14);
        if ((psVar9[iVar11] == *psVar9) || (psVar9[iVar11] == 0)) {
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
          uVar5 = FUN_00554775(this,*(int **)(unaff_EBP + 0xc));
          if ((char)uVar5 == '\0') {
            if (*(char *)(this + 1) == '\0') {
              Peek(this);
            }
            if (*(short *)(*(int *)(unaff_EBP + 0x14) + iVar11 * 2) == *(short *)((int)this + 6)) {
              *(undefined1 *)(unaff_EBP + -0xd) = 1;
              goto LAB_00554618;
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
LAB_00554618:
        psVar9 = *(short **)(unaff_EBP + 0x14);
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar10) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar3 = "";
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x28));
          pcVar3 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar10);
        }
        iVar11 = iVar11 + *pcVar3;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(unaff_EBP + 0x10));
    if ((*(char *)(unaff_EBP + -0xd) == '\0') ||
       (uVar5 = FUN_00554775(*(void **)(unaff_EBP + 8),*(int **)(unaff_EBP + 0xc)),
       (char)uVar5 != '\0')) break;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    FUN_0055331d(*(undefined4 **)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  }
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}


