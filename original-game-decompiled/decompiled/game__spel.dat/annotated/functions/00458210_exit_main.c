
/* ==== exit_main @ 00458210 ==== 
 * signature: undefined __stdcall exit_main(void)
 * body: 00458210-00458268
 * note: ANALYST: Shutdown sequence. [confidence: confirmed] [evidence: caller log 'Calling exit_main'; log strings]
 */

/* ANALYST: Shutdown sequence. [confidence: confirmed] [evidence: caller log 'Calling exit_main';
   log strings] */

void exit_main(void)

{
  FUN_0044e190();
  FUN_004c3fa0((byte *)s_Exiting_game_005a4078);
  FUN_004490a0();
  FUN_004c3fa0((byte *)s_Exiting_race_engine_lib_005a4088);
  FUN_004c3fa0((byte *)s_Exiting_objects_005a40a4);
  FUN_004b4850();
  FUN_004c3fa0((byte *)s_Exiting_3d_lib_005a40b8);
  FUN_004c0950();
  FUN_004c3fa0((byte *)s_Exiting_2d_skelet_005a40c8);
  FUN_00448160();
  FUN_004c3fa0((byte *)s_Ready_005a40dc);
  return;
}


