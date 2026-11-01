
/* ==== FUN_00433950 @ 00433950 ==== 
 * signature: undefined __stdcall FUN_00433950(void)
 * body: 00433950-00433c0b
 */

void FUN_00433950(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_Vehicle_Selection_Menu_00598a44);
  FUN_004c5930(0,10,0x28,(byte *)s_Vehicle_Index_00598a5c);
  FUN_004c5930(0,10,0x3c,(byte *)s_Engine_Upgrade_00598a6c);
  FUN_004c5930(0,10,0x50,(byte *)s_Gearbox_Upgrade_00598a7c);
  FUN_004c5930(0,10,100,(byte *)s_Brake_Upgrade_00598a8c);
  FUN_004c5930(0,10,0x78,(byte *)s_Wheel_Upgrade_00598a9c);
  FUN_004c5930(0,10,0x8c,(byte *)s_Source_Vehicle_00598aac);
  FUN_004c5930(0,10,0xa0,(byte *)s_Target_Vehicle_00598abc);
  FUN_004c5930(0,10,0xb4,(byte *)s_Copy_To_Single_Vehicle_00598acc);
  FUN_004c5930(0,10,200,(byte *)s_Copy_To_All_00598ae4);
  FUN_004c5930(0,0xfa,0x28,&DAT_00598af0);
  FUN_004c5930(0,0xfa,0x3c,&DAT_00598af4);
  FUN_004c5930(0,0xfa,0x50,&DAT_00598af8);
  FUN_004c5930(0,0xfa,100,&DAT_00598afc);
  FUN_004c5930(0,0xfa,0x78,&DAT_00598b00);
  FUN_004c5930(0,0xfa,0x8c,&DAT_00598b04);
  FUN_004c5930(0,0xfa,0xa0,&DAT_00598b08);
  for (iVar1 = FUN_00432f40(9,0); iVar1 != -1; iVar1 = FUN_00432f40(9,iVar1)) {
    switch(iVar1) {
    case 0:
      FUN_00433100(&DAT_006c34fc,1,0x28,0,99);
      break;
    case 1:
      FUN_00433100(&DAT_006fbb40,1,0x3c,0,4);
      break;
    case 2:
      FUN_00433100(&DAT_006fbb50,1,0x50,0,4);
      break;
    case 3:
      FUN_00433100(&DAT_006fbb4c,1,100,0,4);
      break;
    case 4:
      FUN_00433100(&DAT_006fbb44,1,0x78,0,4);
      break;
    case 5:
      FUN_00433100(&DAT_006c3500,1,0x8c,0,99);
      break;
    case 6:
      FUN_00433100(&DAT_006c3504,1,0xa0,0,99);
      break;
    case 7:
      iVar2 = FUN_004c5e40(0x20);
      if (iVar2 != 0) {
        FUN_004331f0(DAT_006c3500,DAT_006c3504);
        FUN_00431ad0(0x20);
      }
      break;
    case 8:
      iVar2 = FUN_004c5e40(0x20);
      if (iVar2 != 0) {
        FUN_00433230(DAT_006c3500);
        FUN_00431ad0(0x20);
      }
    }
  }
  return;
}


