
/* ==== FUN_004c4040 @ 004c4040 ==== 
 * signature: undefined __stdcall FUN_004c4040(void)
 * body: 004c4040-004c4144
 */

void FUN_004c4040(void)

{
  int iVar1;
  
  FUN_004ce5d0();
  FUN_004cc550();
  if (DAT_007408cc != 0) {
    FUN_004ce550();
    if (DAT_007408d0 != 0) {
      FUN_004c3fa0((byte *)s_Releasing_screen_005b39a0);
      (**(code **)(*DAT_007408ac + 8))(DAT_007408ac);
      DAT_007408ac = (int *)0x0;
      DAT_007408d0 = 0;
    }
    if ((DAT_007408d4 != 0) && (DAT_005b37a8 == 0)) {
      FUN_004c3fa0((byte *)s_Releasing_buffer_screen_005b3984);
      (**(code **)(*DAT_007408b0 + 8))(DAT_007408b0);
      DAT_007408b0 = (int *)0x0;
      DAT_007408d4 = 0;
    }
    if (DAT_007408d8 != 0) {
      FUN_004c3fa0((byte *)s_Releasing_buffer_screen_005b3984);
      (**(code **)(*DAT_00740890 + 8))(DAT_00740890);
      DAT_00740890 = (int *)0x0;
      DAT_007408d8 = 0;
    }
    FUN_004c3fa0((byte *)s_Releasing_dd_object_005b396c);
    (**(code **)(*DAT_0074088c + 8))(DAT_0074088c);
    DAT_0074088c = (int *)0x0;
    DAT_007408cc = 0;
  }
  FUN_004ce490();
  FUN_004c3fa0((byte *)s_post_quit_005b3960);
  PostMessageA(DAT_007408a4,0x10,0,0);
  iVar1 = FUN_004cd660();
  while (iVar1 != 0) {
    iVar1 = FUN_004cd660();
  }
  return;
}


