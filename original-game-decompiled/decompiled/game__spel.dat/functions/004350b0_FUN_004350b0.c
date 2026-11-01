
/* ==== FUN_004350b0 @ 004350b0 ==== 
 * signature: undefined __stdcall FUN_004350b0(void)
 * body: 004350b0-004351d3
 */

void FUN_004350b0(void)

{
  int iVar1;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_Vehicle_Tweak_Menu_00598f28);
  FUN_004c5930(0,10,0x28,(byte *)s_General_Vehicle_Data_00598f3c);
  FUN_004c5930(0,10,0x3c,(byte *)s_Engine_Data_00598f54);
  FUN_004c5930(0,10,0x50,(byte *)s_Gearbox_Data_00598f60);
  FUN_004c5930(0,10,100,(byte *)s_Wheel_Data_00598f70);
  FUN_004c5930(0,10,0x78,(byte *)s_Suspension_Data_00598f7c);
  iVar1 = FUN_00431c20(5);
  while (iVar1 != -1) {
    switch(iVar1) {
    case 0:
      FUN_00434c20();
      break;
    case 1:
      FUN_00434900();
      break;
    case 2:
      FUN_00433c30();
      break;
    case 3:
      FUN_004345a0();
      break;
    case 4:
      FUN_00433f30();
    }
    FUN_00431b00();
    FUN_004c5930(0,10,0,(byte *)s_Vehicle_Tweak_Menu_00598f8c);
    FUN_004c5930(0,10,0x28,(byte *)s_General_Vehicle_Data_00598fa0);
    FUN_004c5930(0,10,0x3c,(byte *)s_Engine_Data_00598fb8);
    FUN_004c5930(0,10,0x50,(byte *)s_Gearbox_Data_00598fc4);
    FUN_004c5930(0,10,100,(byte *)s_Wheel_Data_00598fd4);
    FUN_004c5930(0,10,0x78,(byte *)s_Suspension_Data_00598fe0);
    iVar1 = FUN_00431c20(5);
  }
  return;
}


