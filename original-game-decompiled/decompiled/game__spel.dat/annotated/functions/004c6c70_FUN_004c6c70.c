
/* ==== FUN_004c6c70 @ 004c6c70 ==== 
 * signature: undefined4 __cdecl FUN_004c6c70(int param_1)
 * body: 004c6c70-004c6ca6;004c6caa-004c6cf4;004c6cf8-004c6d36;004c6d3a-004c6d69;004c6d6d-004c6d74
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c6ca7-004c6ca9 004c6cf5-004c6cf7 004c6d37-004c6d39 004c6d6a-004c6d6c
 */

undefined4 __cdecl FUN_004c6c70(int param_1)

{
  int *piVar1;
  int iVar2;
  byte unaff_SI;
  int iVar3;
  
  if (DAT_00740950 == 0) {
    return 0;
  }
  if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____illegal_sound_buffer_in_005b5020);
  }
  iVar3 = param_1 * 0x44;
  if (*(int *)(iVar3 + 0x30 + DAT_00740934) == 0) {
    return 0;
  }
  piVar1 = *(int **)(iVar3 + 0x28 + DAT_00740934);
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_1);
  if (iVar2 != 0) {
    this(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____getting_sound_status_fa_005b4ff0);
  }
  if ((unaff_SI & 1) != 1) {
    return 0;
  }
  piVar1 = *(int **)(iVar3 + 0x28 + DAT_00740934);
  iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
  if (iVar2 != 0) {
    this(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_releasing_sound_b_005b5054);
  }
  piVar1 = *(int **)(iVar3 + 0x28 + DAT_00740934);
  iVar3 = (**(code **)(*piVar1 + 0x34))(piVar1,0);
  if (iVar3 != 0) {
    this(iVar3);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_releasing_sound_b_005b5054);
  }
  return 1;
}


