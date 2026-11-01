
/* ==== FUN_00434c20 @ 00434c20 ==== 
 * signature: undefined __stdcall FUN_00434c20(void)
 * body: 00434c20-00435080
 */

void FUN_00434c20(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_General_Vehicle_Data_00598e20);
  FUN_004c5930(0,10,0x28,(byte *)s_Vehicle_Mass___00598e38);
  FUN_004c5930(0,10,0x3c,(byte *)s_Center_Of_Mass_x___00598e48);
  FUN_004c5930(0,10,0x50,(byte *)s_Center_Of_Mass_y___00598e5c);
  FUN_004c5930(0,10,100,(byte *)s_Center_Of_Mass_z___00598e70);
  FUN_004c5930(0,10,0x78,(byte *)s_Max_Steering_Angle_00598e84);
  FUN_004c5930(0,10,0x8c,(byte *)s_Max_Speed_Steer_Angle_00598e98);
  FUN_004c5930(0,10,0xa0,(byte *)s_Body_Extra_Gravity___00598eb0);
  FUN_004c5930(0,10,0xb4,(byte *)s_Front_Brake_Power_00598ec8);
  FUN_004c5930(0,10,200,(byte *)s_Rear_Brake_Power_00598edc);
  FUN_004c5930(0,10,0xdc,(byte *)s_Handbrake_Power_00598ef0);
  FUN_004c5930(0,0xfa,0x28,&DAT_00598f00);
  FUN_004c5930(0,0xfa,0x3c,&DAT_00598f04);
  FUN_004c5930(0,0xfa,0x50,&DAT_00598f08);
  FUN_004c5930(0,0xfa,100,&DAT_00598f0c);
  FUN_004c5930(0,0xfa,0x78,&DAT_00598f10);
  FUN_004c5930(0,0xfa,0x8c,&DAT_00598f14);
  FUN_004c5930(0,0xfa,0xa0,&DAT_00598f18);
  FUN_004c5930(0,0xfa,0xb4,&DAT_00598f1c);
  FUN_004c5930(0,0xfa,200,&DAT_00598f20);
  FUN_004c5930(0,0xfa,0xdc,&DAT_00598f24);
  iVar1 = FUN_00432f40(10,0);
  do {
    if (iVar1 == -1) {
      return;
    }
    switch(iVar1) {
    case 0:
      fVar3 = 50.0;
      iVar4 = 0x28;
      pfVar2 = (float *)(&DAT_006b2bc0 + DAT_006c34fc * 0x9a);
      break;
    case 1:
      fVar3 = 0.1;
      iVar4 = 0x3c;
      pfVar2 = (float *)(&DAT_006b2bc4 + DAT_006c34fc * 0x9a);
      break;
    case 2:
      fVar3 = 0.1;
      iVar4 = 0x50;
      pfVar2 = (float *)(&DAT_006b2bc8 + DAT_006c34fc * 0x268);
      break;
    case 3:
      fVar3 = 0.1;
      iVar4 = 100;
      pfVar2 = (float *)(&DAT_006b2bcc + DAT_006c34fc * 0x268);
      break;
    case 4:
      fVar3 = 1.0;
      iVar4 = 0x78;
      pfVar2 = (float *)(&DAT_006b2bd0 + DAT_006c34fc * 0x268);
      break;
    case 5:
      fVar3 = 1.0;
      iVar4 = 0x8c;
      pfVar2 = (float *)(&DAT_006b2bd4 + DAT_006c34fc * 0x268);
      break;
    case 6:
      fVar3 = 0.1;
      iVar4 = 0xa0;
      pfVar2 = (float *)(&DAT_006b2bd8 + DAT_006c34fc * 0x268);
      break;
    case 7:
      iVar4 = 0xb4;
      fVar3 = 0.1;
      pfVar2 = (float *)(&DAT_006b2bdc + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4);
      break;
    case 8:
      iVar4 = 200;
      fVar3 = 0.1;
      pfVar2 = (float *)(&DAT_006b2bf0 + (DAT_006fbb4c + DAT_006c34fc * 0x9a) * 4);
      break;
    case 9:
      iVar4 = 0xdc;
      fVar3 = 0.5;
      pfVar2 = (float *)(&DAT_006b2c04 + DAT_006c34fc * 0x268);
      break;
    default:
      goto switchD_00434ef8_default;
    }
    FUN_00433020(pfVar2,fVar3,iVar4);
switchD_00434ef8_default:
    iVar1 = FUN_00432f40(10,iVar1);
  } while( true );
}


