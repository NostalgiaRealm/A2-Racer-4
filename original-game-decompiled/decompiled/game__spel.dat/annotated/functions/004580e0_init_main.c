
/* ==== init_main @ 004580e0 ==== 
 * signature: undefined __cdecl init_main(HINSTANCE param_1, int param_2)
 * body: 004580e0-00458175;0045817b-00458209
 * note: ANALYST: Startup order: script engine, settings, language, 2D, input, 3D, game, timers. [confidence: confirmed] [evidence: string 'init_main' completed; log strings]
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00458176-0045817a
 */

/* ANALYST: Startup order: script engine, settings, language, 2D, input, 3D, game, timers.
   [confidence: confirmed] [evidence: string 'init_main' completed; log strings] */

void __cdecl init_main(HINSTANCE param_1,int param_2)

{
  int iVar1;
  
  FUN_004c3fa0((byte *)s_Init_ScriptEngine_005a3f58);
  script_init(&DAT_00712678);
  load_palette_info((byte *)s_System_Settings_005a3f6c);
  iVar1 = FUN_00447730();
  FUN_004c3f80(0,(uint)(iVar1 != 0));
  FUN_00458bc0();
  FUN_004491f0();
  FUN_00449b30();
  FUN_004c3fa0((byte *)s_Initing_2d_skelet_005a3f7c);
  FUN_004480f0(param_1,param_2);
  FUN_00469fa0();
  FUN_0046ee80(param_1);
  iVar1 = FUN_00447820();
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else {
    if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____init_main____Illegal_r_005a3fb0);
    }
    iVar1 = 2;
  }
  FUN_004c04b0(iVar1,10,10,0x1000);
  FUN_004414e0();
  FUN_004c3fa0((byte *)s_Initing_game_005a3fe0);
  FUN_0044c200();
  FUN_004c3fa0((byte *)s_Initing_game_timer__005a3ff0);
  FUN_004a65e0((int *)&DAT_007128b0);
  FUN_004c3fa0((byte *)s_Calling__handle_progress_bar__005a4008);
  FUN_004415e0();
  FUN_004c3fa0((byte *)s_Calling__end_progress_bar__005a4028);
  FUN_00441510();
  FUN_004c3fa0((byte *)s_Calling__start_framecount_timing_005a4044);
  FUN_0044e160();
  FUN_004c3fa0((byte *)s_Init_CopRadio_005a4068);
  FUN_0041b220(&DAT_005d3118);
  return;
}


