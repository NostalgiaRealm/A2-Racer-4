
/* ==== FUN_00448160 @ 00448160 ==== 
 * signature: undefined __stdcall FUN_00448160(void)
 * body: 00448160-004481d9
 */

void FUN_00448160(void)

{
  int iVar1;
  
  if (DAT_0059db84 != 0) {
    FUN_004c3fa0((byte *)s_Stopping_all_sounds_0059eb00);
  }
  FUN_004c3fa0((byte *)s_Clear_screen_on_exit_0059eb18);
  iVar1 = (**(code **)(*DAT_007408ac + 0x60))(DAT_007408ac);
  if (iVar1 == 0) {
    FUN_004c4f70(DAT_0059dbb4,0);
    FUN_004c41e0();
    FUN_004c4f70(DAT_0059dbb4,0);
    FUN_004c41e0();
  }
  FUN_004c3fa0((byte *)s_Exit_fileio_0059eb30);
  FUN_004c6560();
  FUN_004c3fa0((byte *)s_Exit_xvga_lib_0059eb40);
  FUN_004c4040();
  return;
}


