
/* ==== FUN_004226f0 @ 004226f0 ==== 
 * signature: int __cdecl FUN_004226f0(int param_1, int param_2, undefined4 param_3)
 * body: 004226f0-00422a6f
 */

int __cdecl FUN_004226f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = (&DAT_005d333c)[param_1 * 6];
  if ((iVar3 == 1) && ((&DAT_005d3338)[param_1 * 6] == 1)) {
    switch(param_3) {
    case 0:
      return *(int *)(param_2 * 0x50 + 0x18 + DAT_00715eb8);
    case 1:
switchD_0042271d_caseD_1:
      return *(int *)(param_2 * 0x50 + 0x14 + DAT_00715eb8);
    case 2:
switchD_0042271d_caseD_2:
      return *(int *)(param_2 * 0x50 + 0x1c + DAT_00715eb8);
    case 3:
      goto switchD_0042271d_caseD_3;
    default:
      return -1;
    }
  }
  if ((iVar3 == -1) && ((&DAT_005d3338)[param_1 * 6] == -1)) {
    uVar2 = FUN_004a71e0((&DAT_005d332c)[param_1 * 6] + 1);
    switch(param_3) {
    case 0:
      iVar6 = 0;
      iVar3 = *(int *)(DAT_00715f00 + 0xf4 + uVar2 * 0x994);
      if (iVar3 < 1) {
        return -1;
      }
      piVar5 = (int *)(DAT_00715f00 + uVar2 * 0x994 + 0x134);
      do {
        iVar1 = *(int *)(*piVar5 * 0x50 + 0x18 + DAT_00715eb8);
        if (iVar1 == param_2) {
          return iVar1;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < iVar3);
      return -1;
    case 1:
switchD_00422770_caseD_1:
      return *(int *)(param_2 * 0x50 + 0x20 + DAT_00715eb8);
    case 2:
      if ((*(byte *)(param_2 * 0x50 + DAT_00715eb8) & 8) == 0) {
        iVar6 = 0;
        iVar3 = *(int *)(DAT_00715f00 + 0xf4 + uVar2 * 0x994);
        if (0 < iVar3) {
          piVar5 = (int *)(DAT_00715f00 + uVar2 * 0x994 + 0x134);
          do {
            iVar1 = *(int *)(*piVar5 * 0x50 + 0x1c + DAT_00715eb8);
            if (iVar1 == param_2) {
              return iVar1;
            }
            iVar6 = iVar6 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar6 < iVar3);
        }
        return -1;
      }
      FUN_004c5930(0,10,0x32,(byte *)s__d__SIDESWITCH_FROM_LEFT_SIDE_BA_005954f4);
      iVar3 = (&DAT_005d332c)[param_1 * 6];
      iVar6 = 1;
LAB_00422947:
      iVar3 = FUN_004220d0(param_2,iVar6,iVar3,10);
      return *(int *)(iVar3 * 0x50 + 0x14 + DAT_00715eb8);
    case 3:
switchD_00422770_caseD_3:
      return *(int *)(param_2 * 0x50 + 0x14 + DAT_00715eb8);
    }
  }
  else if ((iVar3 == 1) && ((&DAT_005d3338)[param_1 * 6] == -1)) {
    uVar2 = FUN_004a71e0((&DAT_005d332c)[param_1 * 6] - 1);
    switch(param_3) {
    case 0:
      iVar6 = 0;
      iVar3 = *(int *)(DAT_00715f00 + 0xf8 + uVar2 * 0x994);
      if (iVar3 < 1) {
        return -1;
      }
      piVar5 = (int *)(DAT_00715f00 + uVar2 * 0x994 + 0x164);
      do {
        iVar1 = *(int *)(*piVar5 * 0x50 + 0x18 + DAT_00715eb8);
        if (iVar1 == param_2) {
          return iVar1;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < iVar3);
      return -1;
    case 1:
      goto switchD_00422770_caseD_1;
    case 2:
      if ((*(byte *)(param_2 * 0x50 + DAT_00715eb8) & 8) == 0) {
        iVar6 = 0;
        iVar3 = *(int *)(DAT_00715f00 + 0xf8 + uVar2 * 0x994);
        if (iVar3 < 1) {
          return -1;
        }
        piVar5 = (int *)(DAT_00715f00 + uVar2 * 0x994 + 0x164);
        do {
          iVar1 = *(int *)(*piVar5 * 0x50 + 0x1c + DAT_00715eb8);
          if (iVar1 == param_2) {
            return iVar1;
          }
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar6 < iVar3);
        return -1;
      }
      FUN_004c5930(0,10,0x32,(byte *)s__d__SIDESWITCH_FROM_RIGHT_SIDE_B_00595534);
      iVar3 = (&DAT_005d332c)[param_1 * 6];
      iVar6 = 0;
      goto LAB_00422947;
    case 3:
      goto switchD_00422770_caseD_3;
    }
  }
  else if ((iVar3 == -1) && ((&DAT_005d3338)[param_1 * 6] == 1)) {
    switch(param_3) {
    case 0:
      pbVar4 = (byte *)(param_2 * 0x50 + DAT_00715eb8);
      if ((*pbVar4 & 8) == 0) {
        return *(int *)(pbVar4 + 0x18);
      }
      FUN_004c5930(0,10,0x32,(byte *)s__d__SIDESWITCH_FROM_RIGHT_SIDE_F_00595574);
      param_2 = FUN_004220d0(param_2,1,(&DAT_005d332c)[param_1 * 6],10);
      break;
    case 1:
      goto switchD_0042271d_caseD_1;
    case 2:
      goto switchD_0042271d_caseD_2;
    case 3:
switchD_0042271d_caseD_3:
      break;
    default:
      goto switchD_00422770_default;
    }
    return *(int *)(param_2 * 0x50 + 0x20 + DAT_00715eb8);
  }
switchD_00422770_default:
  return -1;
}


