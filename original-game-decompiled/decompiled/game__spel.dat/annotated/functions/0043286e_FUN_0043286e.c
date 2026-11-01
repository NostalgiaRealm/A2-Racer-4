
/* ==== FUN_0043286e @ 0043286e ==== 
 * signature: undefined __stdcall FUN_0043286e(void)
 * body: 0043286e-0043286f
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0043286e(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte in_AL;
  byte bVar5;
  int unaff_EBX;
  char *pcVar4;
  char *unaff_ESI;
  int *unaff_EDI;
  byte in_AF;
  
  LOCK();
  iVar3 = *unaff_EDI;
  *unaff_EDI = (int)register0x00000010;
  UNLOCK();
  pbVar1 = (byte *)(unaff_EBX + -0x12ffbcd8);
  bVar2 = *pbVar1;
  bVar5 = (byte)((uint)(unaff_EBX + 1) >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  pcVar4 = (char *)(unaff_EBX + 2);
  *unaff_ESI = *unaff_ESI + (char)pcVar4;
  *pcVar4 = *pcVar4 - (in_AL + (9 < (in_AL & 0xf) | in_AF) * '\x06' +
                      (0x99 < in_AL || CARRY1(bVar2,bVar5)) * '`');
  *(undefined4 *)(iVar3 + -4) = 0x432885;
  FUN_00431b00();
  *(char **)(iVar3 + -4) = s_Tweak_settings_menu_005987c0;
  *(undefined4 *)(iVar3 + -8) = 0;
  *(undefined4 *)(iVar3 + -0xc) = 0;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  *(undefined4 *)(iVar3 + -0x14) = 0x432895;
  FUN_004c5930(*(int *)(iVar3 + -0x10),*(int *)(iVar3 + -0xc),*(int *)(iVar3 + -8),
               *(byte **)(iVar3 + -4));
  *(char **)(iVar3 + -0x14) = s___Upgrade_motor_005987d4;
  *(undefined4 *)(iVar3 + -0x18) = 0x28;
  *(undefined4 *)(iVar3 + -0x1c) = 0x14;
  *(undefined4 *)(iVar3 + -0x20) = 0;
  *(undefined4 *)(iVar3 + -0x24) = 0x4328a5;
  FUN_004c5930(*(int *)(iVar3 + -0x20),*(int *)(iVar3 + -0x1c),*(int *)(iVar3 + -0x18),
               *(byte **)(iVar3 + -0x14));
  *(undefined4 *)(iVar3 + -0x24) = DAT_006fbb40;
  *(undefined **)(iVar3 + -0x28) = &DAT_005987e4;
  *(undefined4 *)(iVar3 + -0x2c) = 0x28;
  *(undefined4 *)(iVar3 + -0x30) = 200;
  *(undefined4 *)(iVar3 + -0x34) = 0;
  *(undefined4 *)(iVar3 + -0x38) = 0x4328be;
  FUN_004c5930(*(int *)(iVar3 + -0x34),*(int *)(iVar3 + -0x30),*(int *)(iVar3 + -0x2c),
               *(byte **)(iVar3 + -0x28));
  *(char **)(iVar3 + -0x38) = s___Upgrade_gearbox_005987ec;
  *(undefined4 *)(iVar3 + -0x3c) = 0x3c;
  *(undefined4 *)(iVar3 + -0x40) = 0x14;
  *(undefined4 *)(iVar3 + -0x44) = 0;
  *(undefined4 *)(iVar3 + -0x48) = 0x4328ce;
  FUN_004c5930(*(int *)(iVar3 + -0x44),*(int *)(iVar3 + -0x40),*(int *)(iVar3 + -0x3c),
               *(byte **)(iVar3 + -0x38));
  *(undefined4 *)(iVar3 + -4) = DAT_006fbb50;
  *(undefined **)(iVar3 + -8) = &DAT_00598800;
  *(undefined4 *)(iVar3 + -0xc) = 0x3c;
  *(undefined4 *)(iVar3 + -0x10) = 200;
  *(undefined4 *)(iVar3 + -0x14) = 0;
  *(undefined4 *)(iVar3 + -0x18) = 0x4328eb;
  FUN_004c5930(*(int *)(iVar3 + -0x14),*(int *)(iVar3 + -0x10),*(int *)(iVar3 + -0xc),
               *(byte **)(iVar3 + -8));
  *(char **)(iVar3 + -0x18) = s___Tires_00598808;
  *(undefined4 *)(iVar3 + -0x1c) = 0x50;
  *(undefined4 *)(iVar3 + -0x20) = 0x14;
  *(undefined4 *)(iVar3 + -0x24) = 0;
  *(undefined4 *)(iVar3 + -0x28) = 0x4328fb;
  FUN_004c5930(*(int *)(iVar3 + -0x24),*(int *)(iVar3 + -0x20),*(int *)(iVar3 + -0x1c),
               *(byte **)(iVar3 + -0x18));
  *(undefined4 *)(iVar3 + -0x28) = DAT_006fbb44;
  *(undefined **)(iVar3 + -0x2c) = &DAT_00598810;
  *(undefined4 *)(iVar3 + -0x30) = 0x50;
  *(undefined4 *)(iVar3 + -0x34) = 200;
  *(undefined4 *)(iVar3 + -0x38) = 0;
  *(undefined4 *)(iVar3 + -0x3c) = 0x432915;
  FUN_004c5930(*(int *)(iVar3 + -0x38),*(int *)(iVar3 + -0x34),*(int *)(iVar3 + -0x30),
               *(byte **)(iVar3 + -0x2c));
  *(char **)(iVar3 + -0x3c) = s___Player_car_00598818;
  *(undefined4 *)(iVar3 + -0x40) = 100;
  *(undefined4 *)(iVar3 + -0x44) = 0x14;
  *(undefined4 *)(iVar3 + -0x48) = 0;
  *(undefined4 *)(iVar3 + -0x4c) = 0x432925;
  FUN_004c5930(*(int *)(iVar3 + -0x48),*(int *)(iVar3 + -0x44),*(int *)(iVar3 + -0x40),
               *(byte **)(iVar3 + -0x3c));
  *(undefined4 *)(iVar3 + -4) = DAT_006fba5c;
  *(undefined **)(iVar3 + -8) = &DAT_00598828;
  *(undefined4 *)(iVar3 + -0xc) = 100;
  *(undefined4 *)(iVar3 + -0x10) = 200;
  *(undefined4 *)(iVar3 + -0x14) = 0;
  *(undefined4 *)(iVar3 + -0x18) = 0x432941;
  FUN_004c5930(*(int *)(iVar3 + -0x14),*(int *)(iVar3 + -0x10),*(int *)(iVar3 + -0xc),
               *(byte **)(iVar3 + -8));
  *(char **)(iVar3 + -0x18) = s___Copy_current_to_car_F12____0059882c;
  *(undefined4 *)(iVar3 + -0x1c) = 0x78;
  *(undefined4 *)(iVar3 + -0x20) = 0x14;
  *(undefined4 *)(iVar3 + -0x24) = 0;
  *(undefined4 *)(iVar3 + -0x28) = 0x432951;
  FUN_004c5930(*(int *)(iVar3 + -0x24),*(int *)(iVar3 + -0x20),*(int *)(iVar3 + -0x1c),
               *(byte **)(iVar3 + -0x18));
  *(undefined4 *)(iVar3 + -0x28) = DAT_00597eb0;
  *(undefined **)(iVar3 + -0x2c) = &DAT_0059884c;
  *(undefined4 *)(iVar3 + -0x30) = 0x78;
  *(undefined4 *)(iVar3 + -0x34) = 200;
  *(undefined4 *)(iVar3 + -0x38) = 0;
  *(undefined4 *)(iVar3 + -0x3c) = 0x43296b;
  FUN_004c5930(*(int *)(iVar3 + -0x38),*(int *)(iVar3 + -0x34),*(int *)(iVar3 + -0x30),
               *(byte **)(iVar3 + -0x2c));
  *(char **)(iVar3 + -0x3c) = s_Escape_to_leave_menu_00598850;
  *(undefined4 *)(iVar3 + -0x40) = 0xa0;
  *(undefined4 *)(iVar3 + -0x44) = 0;
  *(undefined4 *)(iVar3 + -0x48) = 0;
  *(undefined4 *)(iVar3 + -0x4c) = 0x43297e;
  FUN_004c5930(*(int *)(iVar3 + -0x48),*(int *)(iVar3 + -0x44),*(int *)(iVar3 + -0x40),
               *(byte **)(iVar3 + -0x3c));
  return;
}


