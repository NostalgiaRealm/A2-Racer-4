
/* ==== FUN_00408520 @ 00408520 ==== 
 * signature: int __cdecl FUN_00408520(int param_1)
 * body: 00408520-00408949
 */

int __cdecl FUN_00408520(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  int unaff_EBP;
  int *piVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iStack00000014;
  
  iVar4 = FUN_0040dad0(DAT_005caf3c);
  if (iVar4 == -1) {
    iVar4 = FUN_0040dad0(DAT_005caf40);
    if (iVar4 == -1) {
      if (DAT_006fb954 != 1) {
        iVar4 = *(int *)(DAT_00715f00 + 0xf8 + param_1 * 0x994);
      }
      else {
        iVar4 = *(int *)(DAT_00715f00 + 0xf4 + param_1 * 0x994);
      }
      uVar9 = (uint)(DAT_006fb954 != 1);
      if (iVar4 < 3) {
        if (iVar4 == 2) {
          uVar5 = FUN_00558625();
          uVar5 = uVar5 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
        }
        else {
          uVar5 = 0;
        }
        iVar4 = FUN_004a6d70(param_1,uVar5,uVar9);
        puVar1 = (undefined4 *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
        iVar7 = DAT_0073b0d0 + *(int *)(DAT_005caf3c * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
        *(undefined4 *)(iVar7 + 0x50) = *puVar1;
        *(undefined4 *)(iVar7 + 0x54) = puVar1[1];
        *(undefined4 *)(iVar7 + 0x58) = puVar1[2];
        *(undefined4 *)(DAT_005caf3c * 0xf0 + 0x5c + DAT_00715e50) = 1;
        *(int *)(DAT_005caf3c * 0xf0 + 0x34 + DAT_00715e50) = param_1;
        puVar2 = (uint *)(DAT_005caf3c * 0xf0 + 0x1c + DAT_00715e50);
        *puVar2 = *puVar2 | 1;
        *(int *)(DAT_005caf3c * 0xf0 + 0x3c + DAT_00715e50) = iVar4;
        FUN_0040d640(DAT_005caf3c,DAT_006fba58);
      }
      else {
        iVar4 = FUN_004a6d70(param_1,0,uVar9);
        puVar1 = (undefined4 *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
        iVar7 = DAT_0073b0d0 + *(int *)(DAT_005caf3c * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
        *(undefined4 *)(iVar7 + 0x50) = *puVar1;
        *(undefined4 *)(iVar7 + 0x54) = puVar1[1];
        *(undefined4 *)(iVar7 + 0x58) = puVar1[2];
        *(undefined4 *)(DAT_005caf3c * 0xf0 + 0x5c + DAT_00715e50) = 1;
        *(code **)(DAT_005caf3c * 0xf0 + 0x70 + DAT_00715e50) = FUN_0042d820;
        *(int *)(DAT_005caf3c * 0xf0 + 0x34 + DAT_00715e50) = param_1;
        *(int *)(DAT_005caf3c * 0xf0 + 0x3c + DAT_00715e50) = iVar4;
        *(uint *)(DAT_005caf3c * 0xf0 + 0x1c + DAT_00715e50) =
             *(uint *)(DAT_005caf3c * 0xf0 + 0x1c + DAT_00715e50) | 1;
        iVar4 = FUN_004a6d70(param_1,2,uVar9);
        puVar1 = (undefined4 *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
        iVar7 = DAT_0073b0d0 + *(int *)(DAT_005caf40 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
        *(undefined4 *)(iVar7 + 0x50) = *puVar1;
        *(undefined4 *)(iVar7 + 0x54) = puVar1[1];
        *(undefined4 *)(iVar7 + 0x58) = puVar1[2];
        *(undefined4 *)(DAT_005caf40 * 0xf0 + 0x5c + DAT_00715e50) = 1;
        *(int *)(DAT_005caf40 * 0xf0 + 0x34 + DAT_00715e50) = param_1;
        *(code **)(DAT_005caf40 * 0xf0 + 0x70 + DAT_00715e50) = FUN_0042d820;
        *(int *)(DAT_005caf40 * 0xf0 + 0x3c + DAT_00715e50) = iVar4;
        *(uint *)(DAT_005caf40 * 0xf0 + 0x1c + DAT_00715e50) =
             *(uint *)(DAT_005caf40 * 0xf0 + 0x1c + DAT_00715e50) | 1;
        FUN_0040d640(DAT_005caf3c,DAT_006fba58);
        FUN_0040d640(DAT_005caf40,DAT_006fba58);
        unaff_EBX = -1;
        unaff_EBP = DAT_006fba58;
      }
      FUN_0041be70(&DAT_005d3118,4,unaff_EBP,unaff_EBX);
      iStack00000014 = 0;
      piVar8 = &DAT_005caf3c;
      iVar7 = DAT_00715eb8;
      iVar10 = DAT_00715e50;
      do {
        iVar4 = iStack00000014;
        if (*(int *)(iStack00000014 + 0x5c + iVar10) == 1) {
          iVar6 = *(int *)(*piVar8 * 0xf0 + 0x3c + iVar10) * 0x50;
          iVar4 = *(int *)(iVar6 + 0x14 + iVar7);
          if ((iVar4 != -1) || (iVar4 = *(int *)(iVar6 + iVar7 + 0x20), iVar4 != -1)) {
            pfVar3 = (float *)(iVar4 * 0x50 + 8 + iVar7);
            lVar11 = FUN_00403ea0(*piVar8,*pfVar3,pfVar3[1],pfVar3[2]);
            iVar4 = (int)lVar11;
            iVar7 = DAT_00715eb8;
            iVar10 = DAT_00715e50;
          }
        }
        piVar8 = piVar8 + 1;
        iStack00000014 = iStack00000014 + 0xf0;
      } while ((int)piVar8 < 0x5caf44);
    }
  }
  return iVar4;
}


