
/* ==== FUN_00423290 @ 00423290 ==== 
 * signature: int __cdecl FUN_00423290(int param_1, int param_2)
 * body: 00423290-004232ad;004232b1-004233bd
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004232ae-004232b0
 */

int __cdecl FUN_00423290(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Illegal_current_waypoint_005955d8);
  }
  switch(param_2) {
  case 0:
    return *(int *)(param_1 * 0x50 + 0x18 + DAT_00715eb8);
  case 1:
    return *(int *)(param_1 * 0x50 + 0x14 + DAT_00715eb8);
  case 2:
    return *(int *)(param_1 * 0x50 + 0x1c + DAT_00715eb8);
  case 3:
    return *(int *)(param_1 * 0x50 + 0x20 + DAT_00715eb8);
  case 4:
  case 5:
    iVar1 = *(int *)(param_1 * 0x50 + 0x20 + DAT_00715eb8);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8);
    if (iVar1 < 0) {
      return -1;
    }
    if (param_2 != 4) {
      return *(int *)(iVar1 * 0x50 + 0x1c + DAT_00715eb8);
    }
    return *(int *)(iVar1 * 0x50 + 0x18 + DAT_00715eb8);
  case 6:
    iVar1 = *(int *)(param_1 * 0x50 + 0x18 + DAT_00715eb8);
    if ((-1 < iVar1) && (iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8), -1 < iVar1)) {
      return iVar1;
    }
    iVar1 = *(int *)(param_1 * 0x50 + DAT_00715eb8 + 0x20);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = *(int *)(iVar1 * 0x50 + 0x18 + DAT_00715eb8);
    break;
  case 7:
    iVar1 = *(int *)(param_1 * 0x50 + 0x1c + DAT_00715eb8);
    if ((-1 < iVar1) && (iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8), -1 < iVar1)) {
      return iVar1;
    }
    iVar1 = *(int *)(param_1 * 0x50 + DAT_00715eb8 + 0x20);
    if (iVar1 < 0) {
      return -1;
    }
    iVar1 = *(int *)(iVar1 * 0x50 + 0x1c + DAT_00715eb8);
    break;
  default:
    goto LAB_00423333;
  }
  if (-1 < iVar1) {
    return iVar1;
  }
LAB_00423333:
  return -1;
}


