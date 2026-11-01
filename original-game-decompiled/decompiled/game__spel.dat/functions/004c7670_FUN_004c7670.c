
/* ==== FUN_004c7670 @ 004c7670 ==== 
 * signature: undefined4 __cdecl FUN_004c7670(int param_1, int param_2)
 * body: 004c7670-004c76a3;004c76a7-004c76d1;004c76d5-004c770d;004c7711-004c7742;004c7746-004c774a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c76a4-004c76a6 004c76d2-004c76d4 004c770e-004c7710 004c7743-004c7745
 */

undefined4 __cdecl FUN_004c7670(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00740950 != 0) {
    if ((param_1 < 0) || (DAT_00740928 < param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____sound_buffer_index_ille_005b5394);
    }
    iVar2 = param_1 * 0x44;
    if (*(int *)(iVar2 + 0x34 + DAT_00740934) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____type_sound_buffer__d_in_005b5434);
    }
    if (*(int *)(iVar2 + 0x30 + DAT_00740934) != 0) {
      if ((param_2 < -10000) || (10000 < param_2)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____attempt_at_setting_buff_005b5400);
      }
      piVar1 = *(int **)(iVar2 + 0x28 + DAT_00740934);
      iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
      if (iVar2 != 0) {
        FUN_004c65b0(iVar2);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____sound_buffer_index_ille_005b531c);
      }
    }
  }
  return 0;
}


