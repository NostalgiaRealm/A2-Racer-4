
/* ==== FUN_00432020 @ 00432020 ==== 
 * signature: undefined __stdcall FUN_00432020(void)
 * body: 00432020-00432197
 */

void FUN_00432020(void)

{
  char *pcVar1;
  
  FUN_00431b00();
  if (DAT_006fbb50 == 0) {
    pcVar1 = s_Transmission_menu_for_default_ge_00598300;
  }
  else {
    pcVar1 = s_Transmission_menu_for_upgraded_g_005982d8;
  }
  FUN_004c5930(0,0,0,(byte *)pcVar1);
  FUN_004c5930(0,0x14,0x28,(byte *)s___Gear_1___f_00598328);
  FUN_004c5930(0,0x14,0x3c,(byte *)s___Gear_2___f_00598338);
  FUN_004c5930(0,0x14,0x50,(byte *)s___Gear_3___f_00598348);
  FUN_004c5930(0,0x14,100,(byte *)s___Gear_4___f_00598358);
  FUN_004c5930(0,0x14,0x78,(byte *)s___Gear_5___f_00598368);
  FUN_004c5930(0,0x14,0x8c,(byte *)s___Gear_6___f_00598378);
  FUN_004c5930(0,0,0x28,&DAT_00598388);
  FUN_004c5930(0,0,0xb4,(byte *)s_Escape_to_leave_menu_0059838c);
  return;
}


