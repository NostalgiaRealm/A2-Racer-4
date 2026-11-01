
/* ==== FUN_00417f90 @ 00417f90 ==== 
 * signature: int __cdecl FUN_00417f90(int param_1, int param_2, int param_3, char param_4)
 * body: 00417f90-00417fb0;00417fb4-00418048
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00417fb1-00417fb3
 */

int __cdecl FUN_00417f90(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_A_illegal_waypoint___d__w_00593574);
  }
  iVar2 = FUN_00423290(param_2,param_3);
  if (-1 < iVar2) {
    if (param_4 == '\0') {
      return iVar2;
    }
    iVar1 = *(int *)(iVar2 * 0x50 + 0x24 + DAT_00715eb8);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar4 = 0;
    if (iVar1 < 1) {
      return iVar2;
    }
    while (iVar3 = FUN_004ab0d0((void *)(iVar2 * 0x50 + DAT_00715eb8),iVar4),
          *(float *)(param_1 * 0xf0 + 0xc4 + DAT_00715e50) + 5.0 <=
          *(float *)(iVar3 * 0xf0 + 0xc4 + DAT_00715e50)) {
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return iVar2;
      }
    }
  }
  return -1;
}


