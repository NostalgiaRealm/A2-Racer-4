
/* ==== FUN_004c75b0 @ 004c75b0 ==== 
 * signature: undefined4 __cdecl FUN_004c75b0(int param_1, int param_2)
 * body: 004c75b0-004c75e3;004c75e7-004c7625;004c7629-004c765a;004c765e-004c7662
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c75e4-004c75e6 004c7626-004c7628 004c765b-004c765d
 */

undefined4 __cdecl FUN_004c75b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____sound_buffer_index_ille_005b5394);
    }
    if (*(int *)(param_1 * 0x44 + 0x30 + DAT_00740934) != 0) {
      if ((param_2 < -10000) || (-100 < param_2)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____attempt_at_setting_buff_005b53c0);
      }
      piVar1 = *(int **)(param_1 * 0x44 + 0x28 + DAT_00740934);
      iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_2);
      if (iVar2 != 0) {
        FUN_004c65b0(iVar2);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____sound_buffer_index_ille_005b531c);
      }
    }
  }
  return 0;
}


