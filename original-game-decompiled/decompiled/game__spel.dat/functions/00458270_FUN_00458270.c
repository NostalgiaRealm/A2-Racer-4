
/* ==== FUN_00458270 @ 00458270 ==== 
 * signature: undefined4 __stdcall FUN_00458270(HINSTANCE param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00458270-00458385
 */

undefined4 FUN_00458270(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a7a8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00448cd0(&DAT_006fa558);
  FUN_004580e0(param_1,param_4);
  FUN_004c3fa0((byte *)s__init_main__completed__005a40e4);
  FUN_004c3fa0((byte *)s_Calling__start_game__005a40fc);
  FUN_0044cf60();
  FUN_004c3fa0((byte *)s_Entering_main_loop_005a4114);
  while (DAT_006fb89c != 0) {
    FUN_004c3fa0((byte *)s_Calling__handle_game__005a4128);
    FUN_0044cb80();
    FUN_004517f0();
    FUN_004c3fa0((byte *)s_Calling__handle_framecount_timin_005a4140);
    FUN_0044e180();
    FUN_004c3fa0((byte *)s_Calling__my_handle_win_msg__005a4164);
    iVar1 = FUN_00458020();
    if (iVar1 != 0) break;
    iVar1 = FUN_004c5e40(0x11);
    if (iVar1 != 0) {
      iVar1 = FUN_004c5e40(0x79);
      if (iVar1 != 0) {
        FUN_00458400();
      }
    }
    FUN_0041c150(&DAT_005d3118);
  }
  FUN_004c3fa0((byte *)s_Exiting_main_loop_005a4184);
  FUN_004c3fa0((byte *)s_Calling__exit_main__005a4198);
  FUN_00458210();
  ExceptionList = local_10;
  return 0;
}


