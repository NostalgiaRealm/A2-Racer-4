
/* ==== FUN_004345a0 @ 004345a0 ==== 
 * signature: undefined __stdcall FUN_004345a0(void)
 * body: 004345a0-004348e3
 */

void FUN_004345a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int local_8;
  int local_4;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_Vehicle_Wheel_Data_00598d18);
  FUN_004c5930(0,10,0x28,(byte *)s_Front_Wheel_Set_00598d2c);
  FUN_004c5930(0,10,0x3c,(byte *)s_Front_Wheel_Factor_00598d3c);
  FUN_004c5930(0,10,0x50,(byte *)s_Rear_Wheel_Set_00598d50);
  FUN_004c5930(0,10,100,(byte *)s_Rear_Wheel_Factor_00598d60);
  FUN_004c5930(0,10,0x78,(byte *)s_Wheel_Radius_00598d74);
  iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
  local_8 = FUN_00432ef0(*(float *)(&DAT_006b2d0c + iVar2),*(float *)(&DAT_006b2d20 + iVar2),
                         *(float *)(&DAT_006b2d34 + iVar2));
  FUN_004c5930(0,0xfa,0x28,&DAT_00598d84);
  FUN_004c5930(0,0xfa,0x3c,&DAT_00598d88);
  iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
  local_4 = FUN_00432ef0(*(float *)(&DAT_006b2d5c + iVar2),*(float *)(&DAT_006b2d70 + iVar2),
                         *(float *)(&DAT_006b2d84 + iVar2));
  FUN_004c5930(0,0xfa,0x50,&DAT_00598d8c);
  FUN_004c5930(0,0xfa,100,&DAT_00598d90);
  FUN_004c5930(0,0xfa,0x78,&DAT_00598d94);
  iVar2 = FUN_00432f40(5,0);
  do {
    if (iVar2 == -1) {
      return;
    }
    switch(iVar2) {
    case 0:
      FUN_00433100(&local_8,1,0x28,0,9);
      iVar3 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2d0c + iVar3) = (&DAT_00597eb4)[local_8 * 3];
      uVar1 = (&DAT_00597ebc)[local_8 * 3];
      *(undefined4 *)(&DAT_006b2d20 + iVar3) = (&DAT_00597eb8)[local_8 * 3];
      *(undefined4 *)(&DAT_006b2d34 + iVar3) = uVar1;
      break;
    case 1:
      iVar3 = 0x3c;
      pfVar4 = (float *)(&DAT_006b2d48 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      goto LAB_004348c1;
    case 2:
      FUN_00433100(&local_4,1,0x50,0,9);
      iVar3 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2d5c + iVar3) = (&DAT_00597eb4)[local_4 * 3];
      uVar1 = (&DAT_00597ebc)[local_4 * 3];
      *(undefined4 *)(&DAT_006b2d70 + iVar3) = (&DAT_00597eb8)[local_4 * 3];
      *(undefined4 *)(&DAT_006b2d84 + iVar3) = uVar1;
      break;
    case 3:
      iVar3 = 100;
      pfVar4 = (float *)(&DAT_006b2d98 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      goto LAB_004348c1;
    case 4:
      iVar3 = 0x78;
      pfVar4 = (float *)(&DAT_006b2e24 + DAT_006c34fc * 0x268);
LAB_004348c1:
      FUN_00433020(pfVar4,0.1,iVar3);
    }
    iVar2 = FUN_00432f40(5,iVar2);
  } while( true );
}


