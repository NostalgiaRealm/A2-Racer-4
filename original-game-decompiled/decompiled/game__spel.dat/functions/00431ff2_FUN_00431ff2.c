
/* ==== FUN_00431ff2 @ 00431ff2 ==== 
 * signature: undefined __fastcall FUN_00431ff2(int param_1, char * param_2)
 * body: 00431ff2-00431ff3
 */

void __fastcall FUN_00431ff2(int param_1,char *param_2)

{
  undefined4 in_EAX;
  char cVar1;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  char *pcVar2;
  
  pcVar2 = (char *)(unaff_ESI + unaff_EBX + 0x44);
  *pcVar2 = *pcVar2 + (char)((uint)param_2 >> 8);
  param_2[-0x30ffbce2] = param_2[-0x30ffbce2] + (char)((uint)in_EAX >> 8);
  cVar1 = (char)((uint)param_1 >> 8);
  *param_2 = *param_2 + cVar1;
  pcVar2 = (char *)(unaff_EDI + 0x44 + unaff_EBX + 4);
  *pcVar2 = *pcVar2 + (char)param_2;
  *(char *)(unaff_ESI + 0x1f) = *(char *)(unaff_ESI + 0x1f) + (char)((uint)(unaff_EBX + 4) >> 8);
  *(char *)(param_1 + -0x6fffbce1) = *(char *)(param_1 + -0x6fffbce1) + cVar1;
  FUN_00431b00();
  if (DAT_006fbb50 == 0) {
    pcVar2 = s_Transmission_menu_for_default_ge_00598300;
  }
  else {
    pcVar2 = s_Transmission_menu_for_upgraded_g_005982d8;
  }
  FUN_004c5930(0,0,0,(byte *)pcVar2);
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


