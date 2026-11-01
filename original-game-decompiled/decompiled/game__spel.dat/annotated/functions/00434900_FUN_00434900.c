
/* ==== FUN_00434900 @ 00434900 ==== 
 * signature: undefined __stdcall FUN_00434900(void)
 * body: 00434900-00434c01
 */

void FUN_00434900(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_Vehicle_Engine_Data_00598d98);
  FUN_004c5930(0,10,0x28,(byte *)s_Engine_Horsepowers_00598dac);
  FUN_004c5930(0,10,0x3c,(byte *)s_Maximum_RPM_00598dc0);
  FUN_004c5930(0,10,0x50,(byte *)s_Minimum_RPM_00598dcc);
  FUN_004c5930(0,10,100,(byte *)s_Maximum_Speed___00598dd8);
  FUN_004c5930(0,10,0x78,(byte *)s_Axle_Torque_Ratio_00598de8);
  FUN_004c5930(0,10,0x8c,(byte *)s_Axle_Ratio_00598dfc);
  FUN_004c5930(0,0xfa,0x28,&DAT_00598e08);
  FUN_004c5930(0,0xfa,0x3c,&DAT_00598e0c);
  FUN_004c5930(0,0xfa,0x50,&DAT_00598e10);
  FUN_004c5930(0,0xfa,100,&DAT_00598e14);
  FUN_004c5930(0,0xfa,0x78,&DAT_00598e18);
  FUN_004c5930(0,0xfa,0x8c,&DAT_00598e1c);
  iVar1 = FUN_00432f40(6,0);
  do {
    if (iVar1 == -1) {
      return;
    }
    switch(iVar1) {
    case 0:
      fVar3 = 5.0;
      iVar4 = 0x28;
      pfVar2 = (float *)(&DAT_006b2c1c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 1:
      fVar3 = 50.0;
      iVar4 = 0x3c;
      pfVar2 = (float *)(&DAT_006b2c30 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 2:
      fVar3 = 50.0;
      iVar4 = 0x50;
      pfVar2 = (float *)(&DAT_006b2c44 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 3:
      fVar3 = 5.0;
      iVar4 = 100;
      pfVar2 = (float *)(&DAT_006b2c58 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 4:
      fVar3 = 0.1;
      iVar4 = 0x78;
      pfVar2 = (float *)(&DAT_006b2c6c + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 5:
      iVar4 = 0x8c;
      fVar3 = 0.1;
      pfVar2 = (float *)(&DAT_006b2c80 + (DAT_006fbb40 + DAT_006c34fc * 0x9a) * 4);
      break;
    default:
      goto switchD_00434ae9_default;
    }
    FUN_00433020(pfVar2,fVar3,iVar4);
switchD_00434ae9_default:
    iVar1 = FUN_00432f40(6,iVar1);
  } while( true );
}


