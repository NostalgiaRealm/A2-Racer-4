
/* ==== FUN_004c6e50 @ 004c6e50 ==== 
 * signature: undefined4 __cdecl FUN_004c6e50(int param_1)
 * body: 004c6e50-004c6e81;004c6e85-004c6ed4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c6e82-004c6e84
 */

undefined4 __cdecl FUN_004c6e50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____illegal_sound_buffer_in_005b5020);
    }
    iVar2 = param_1 * 0x44;
    if (*(int *)(iVar2 + 0x30 + DAT_00740934) != 0) {
      FUN_004c6c70(param_1);
      piVar1 = *(int **)(iVar2 + 0x28 + DAT_00740934);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar2 + 0x30 + DAT_00740934) = 0;
      *(undefined4 *)(iVar2 + 0x38 + DAT_00740934) = 0;
    }
  }
  return 0;
}


