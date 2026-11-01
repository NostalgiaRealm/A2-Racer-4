
/* ==== FUN_004a74f0 @ 004a74f0 ==== 
 * signature: undefined __fastcall FUN_004a74f0(int * param_1)
 * body: 004a74f0-004a757e;004a7582-004a765a;004a765e-004a766a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a757f-004a7581 004a765b-004a765d
 */

void __fastcall FUN_004a74f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int local_4;
  
  local_4 = 0;
  piVar2 = param_1;
  if (0 < param_1[200]) {
    do {
      if (*(int *)(DAT_0073b0d0 + *piVar2 * 0xa9 + 0xa5) == 3) {
        iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0xe,1);
        if (iVar1 != 0) {
          FUN_004bb290(iVar1);
          pcVar3 = s__s__d_____ZBUFFER__error_setting_005afb0c;
          goto LAB_004a757a;
        }
      }
      else {
        iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0xe,0);
        if (iVar1 != 0) {
          FUN_004bb290(iVar1);
          pcVar3 = s__s__d_____ZBUFFER__error_setting_0059c150;
LAB_004a757a:
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)pcVar3);
        }
      }
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x13,
                 *(undefined4 *)(&DAT_005afa50 + *(int *)(DAT_0073b0d0 + *piVar2 * 0xa9 + 0xa5) * 8)
                );
      (**(code **)(*DAT_0073b4b4 + 0x5c))
                (DAT_0073b4b4,0x14,
                 *(undefined4 *)(&DAT_005afa54 + *(int *)(DAT_0073b0d0 + *piVar2 * 0xa9 + 0xa5) * 8)
                );
      iVar1 = *piVar2;
      if (*(char *)(DAT_0073b0d0 + iVar1 + 0x90 + iVar1 * 0xa8) != '\0') {
        FUN_004b5b10(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8);
      }
      local_4 = local_4 + 1;
      piVar2 = piVar2 + 1;
    } while (local_4 < param_1[200]);
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0xe,1);
  if (iVar1 == 0) {
    param_1[200] = 0;
    return;
  }
  FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d_____ZBUFFER__error_setting_005afb0c);
}


