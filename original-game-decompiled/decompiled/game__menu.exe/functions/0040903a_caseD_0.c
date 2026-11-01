
/* ==== switchD_00408f3f::caseD_0 @ 0040903a ==== 
 * signature: undefined __register caseD_0(uint param_1, undefined4 param_2, char param_3)
 * body: 0040903a-00409065
 */

void switchD_00408f3f::caseD_0(uint param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char extraout_CL;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int extraout_EDX;
  int iVar8;
  int unaff_EBP;
  int unaff_ESI;
  byte *pbVar9;
  char cVar7;
  
  if (param_3 == 'D') {
    if ((int)param_1 < 0) {
      FUN_00409066(-param_1);
      *(undefined1 *)(unaff_ESI + -1) = 0x2d;
      return;
    }
  }
  else if (param_3 != 'U') {
    if (param_3 != 'X') {
      do {
        iVar8 = FUN_004091d1(0);
        piVar2 = (int *)FUN_00408d7c(iVar8,*(byte **)(unaff_EBP + -0x14),
                                     *(int *)(unaff_EBP + -0x24) -
                                     (int)*(byte **)(unaff_EBP + -0x14));
        piVar1 = (int *)(unaff_EBP + -0x30);
        *piVar1 = *piVar2;
        *(int *)(unaff_EBP + -0x2c) = piVar2[1];
        if (extraout_CL == 'D') {
          if ((*(uint *)(unaff_EBP + -0x2c) & 0x80000000) != 0) {
            iVar8 = *piVar1;
            *piVar1 = -*piVar1;
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + (uint)(iVar8 != 0);
            *(int *)(unaff_EBP + -0x2c) = -*(int *)(unaff_EBP + -0x2c);
            FUN_00408fdf();
            *(undefined1 *)(unaff_ESI + -1) = 0x2d;
            return;
          }
code_r0x00408fdf:
          uVar4 = 10;
          goto LAB_00408fe4;
        }
        if (extraout_CL == 'U') goto code_r0x00408fdf;
      } while (extraout_CL != 'X');
      uVar4 = 0x10;
LAB_00408fe4:
      pbVar9 = (byte *)(unaff_EBP + -0x51);
      do {
        uVar5 = FUN_004062e1(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar4,uVar4,0);
        bVar6 = (char)uVar5 + 0x30;
        if (0x39 < bVar6) {
          bVar6 = (char)uVar5 + 0x37;
        }
        pbVar9 = pbVar9 + -1;
        *pbVar9 = bVar6;
        iVar8 = FUN_004061ec(*piVar1,*(uint *)(unaff_EBP + -0x2c),uVar4,uVar4,0);
        *piVar1 = iVar8;
        *(int *)(unaff_EBP + -0x2c) = extraout_EDX;
      } while (iVar8 != 0 || extraout_EDX != 0);
      uVar3 = (unaff_EBP + -0x51) - (int)pbVar9;
      uVar5 = *(uint *)(unaff_EBP + -0x20);
      if (uVar5 < 0x11) {
        iVar8 = uVar5 - uVar3;
        if (uVar3 <= uVar5 && iVar8 != 0) {
          do {
            pbVar9 = pbVar9 + -1;
            *pbVar9 = 0x30;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        return;
      }
      return;
    }
    uVar5 = 0x10;
    goto LAB_0040906b;
  }
  uVar5 = 10;
LAB_0040906b:
  pbVar9 = (byte *)(unaff_EBP + -0x61);
  do {
    uVar3 = param_1 / uVar5;
    cVar7 = (char)(param_1 % uVar5);
    bVar6 = cVar7 + 0x30;
    if (0x39 < bVar6) {
      bVar6 = cVar7 + 0x37;
    }
    pbVar9 = pbVar9 + -1;
    *pbVar9 = bVar6;
    param_1 = uVar3;
  } while (uVar3 != 0);
  uVar3 = (unaff_EBP + -0x61) - (int)pbVar9;
  uVar5 = *(uint *)(unaff_EBP + -0x20);
  if (uVar5 < 0x11) {
    iVar8 = uVar5 - uVar3;
    if (uVar3 <= uVar5 && iVar8 != 0) {
      do {
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    return;
  }
  return;
}


