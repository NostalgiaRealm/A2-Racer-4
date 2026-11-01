
/* ==== FUN_004351f0 @ 004351f0 ==== 
 * signature: undefined __stdcall FUN_004351f0(void)
 * body: 004351f0-00435318
 */

void FUN_004351f0(void)

{
  int iVar1;
  
  FUN_00431ad0(0x20);
  FUN_00431b00();
  DAT_006c34fc = DAT_006fbae4;
  FUN_004c5930(0,10,0,(byte *)s_Tweak_Main_Menu_00598ff0);
  FUN_004c5930(0,10,0x28,(byte *)s_Cartype_Selection_00599000);
  FUN_004c5930(0,10,0x3c,(byte *)s_Edit_Vehicle_Data_00599014);
  FUN_004c5930(0,10,0x50,(byte *)s_Save_and_Leave_00599028);
  FUN_004c5930(0,10,100,(byte *)s_Leave_00599038);
  iVar1 = FUN_00431c20(4);
  while (iVar1 != -1) {
    switch(iVar1) {
    case 0:
      FUN_00433950();
      break;
    case 1:
      FUN_004350b0();
      break;
    case 2:
      FUN_00433270();
      FUN_00433300(DAT_006fba58);
      return;
    case 3:
      FUN_00433300(DAT_006fba58);
      return;
    }
    FUN_00431b00();
    FUN_004c5930(0,10,0,(byte *)s_Tweak_Main_Menu_00599040);
    FUN_004c5930(0,10,0x28,(byte *)s_Cartype_Selection_00599050);
    FUN_004c5930(0,10,0x3c,(byte *)s_Edit_Vehicle_Data_00599064);
    FUN_004c5930(0,10,0x50,(byte *)s_Save_and_Leave_00599078);
    FUN_004c5930(0,10,100,(byte *)s_Leave_00599088);
    iVar1 = FUN_00431c20(4);
  }
  FUN_00433300(DAT_006fba58);
  return;
}


