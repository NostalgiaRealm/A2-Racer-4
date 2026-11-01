
/* ==== FUN_004c7460 @ 004c7460 ==== 
 * signature: undefined4 __cdecl FUN_004c7460(int param_1, int param_2)
 * body: 004c7460-004c7493;004c7497-004c74d9;004c74dd-004c750e;004c7512-004c7516
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c7494-004c7496 004c74da-004c74dc 004c750f-004c7511
 */

undefined4 __cdecl FUN_004c7460(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____sound_buffer_index_ille_005b5394);
    }
    if (*(int *)(param_1 * 0x44 + 0x30 + DAT_00740934) != 0) {
      if (((param_2 < 100) || (100000 < param_2)) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____attempt_at_setting_buff_005b534c);
      }
      piVar1 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
      iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_2);
      if (iVar2 != 0) {
        FUN_004c65b0(iVar2);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____sound_buffer_index_ille_005b531c);
      }
    }
  }
  return 0;
}


