
/* ==== FUN_004c70d0 @ 004c70d0 ==== 
 * signature: undefined __stdcall FUN_004c70d0(void)
 * body: 004c70d0-004c714c
 */

void FUN_004c70d0(void)

{
  FUN_004c3fa0((byte *)s_Exiting_Sound_Lib_005b50f0);
  if (DAT_00740950 != 0) {
    FUN_004c3fa0((byte *)s_Deleting_all_sound_buffers_005b50d4);
    FUN_004c6dd0();
    FUN_004c3fa0((byte *)s_release_sound_buffers_005b50bc);
    (**(code **)(*DAT_00740924 + 8))(DAT_00740924);
    FUN_004c3fa0((byte *)s_Discard_xvga_sound_buffer_005b50a0);
    LocalReAlloc(DAT_00740934,0,2);
    DAT_00740950 = 0;
    DAT_00740954 = 0;
    DAT_00740958 = 0;
    DAT_0074095c = 0;
    DAT_00740960 = 0;
  }
  return;
}


