
/* ==== FUN_00433f30 @ 00433f30 ==== 
 * signature: undefined __stdcall FUN_00433f30(void)
 * body: 00433f30-0043456c
 */

void FUN_00433f30(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float local_c [2];
  
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_Vehicle_Suspension_Data_00598bb8);
  FUN_004c5930(0,10,0x28,(byte *)s_Wheelspring_Constant_All_00598bd0);
  FUN_004c5930(0,10,0x3c,(byte *)s_Wheelspring_Dampening_All_00598bec);
  FUN_004c5930(0,10,0x50,(byte *)s_Stabilizer_All_00598c08);
  FUN_004c5930(0,10,100,(byte *)s_Wheelspring_Constant_Front_00598c18);
  FUN_004c5930(0,10,0x78,(byte *)s_Wheelspring_Dampening_Front_00598c34);
  FUN_004c5930(0,10,0x8c,(byte *)s_Stabilizer_Front_00598c50);
  FUN_004c5930(0,10,0xa0,(byte *)s_Wheelspring_Constant_Rear_00598c64);
  FUN_004c5930(0,10,0xb4,(byte *)s_Wheelspring_Dampening_Rear_00598c80);
  FUN_004c5930(0,10,200,(byte *)s_Stabilizer_Rear_00598c9c);
  FUN_004c5930(0,0xfa,0x28,&DAT_00598cac);
  FUN_004c5930(0,0xfa,0x3c,&DAT_00598cb0);
  FUN_004c5930(0,0xfa,0x50,&DAT_00598cb4);
  FUN_004c5930(0,0xfa,100,&DAT_00598cb8);
  FUN_004c5930(0,0xfa,0x78,&DAT_00598cbc);
  FUN_004c5930(0,0xfa,0x8c,&DAT_00598cc0);
  FUN_004c5930(0,0xfa,0xa0,&DAT_00598cc4);
  FUN_004c5930(0,0xfa,0xb4,&DAT_00598cc8);
  FUN_004c5930(0,0xfa,200,&DAT_00598ccc);
  iVar1 = FUN_00432f40(9,0);
  do {
    if (iVar1 == -1) {
      return;
    }
    switch(iVar1) {
    case 0:
      local_c[0] = *(float *)(&DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      FUN_00433020(local_c,500.0,0x28);
      iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(float *)(&DAT_006b2dac + iVar2) = local_c[0];
      *(float *)(&DAT_006b2de8 + iVar2) = local_c[0];
      FUN_004c5930(0,0xfa,100,(byte *)s__f_00598cd0);
      FUN_004c5930(0,0xfa,0xa0,(byte *)s__f_00598cdc);
      goto switchD_0043420a_default;
    case 1:
      local_c[0] = *(float *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      FUN_00433020(local_c,500.0,0x3c);
      iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(float *)(&DAT_006b2dc0 + iVar2) = local_c[0];
      *(float *)(&DAT_006b2dfc + iVar2) = local_c[0];
      FUN_004c5930(0,0xfa,0x78,(byte *)s__f_00598ce8);
      FUN_004c5930(0,0xfa,0xb4,(byte *)s__f_00598cf4);
      goto switchD_0043420a_default;
    case 2:
      local_c[0] = *(float *)(&DAT_006b2dd4 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      FUN_00433020(local_c,500.0,0x50);
      iVar2 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(float *)(&DAT_006b2dd4 + iVar2) = local_c[0];
      *(float *)(&DAT_006b2e10 + iVar2) = local_c[0];
      FUN_004c5930(0,0xfa,0x8c,(byte *)s__f_00598d00);
      FUN_004c5930(0,0xfa,200,(byte *)s__f_00598d0c);
      goto switchD_0043420a_default;
    case 3:
      iVar2 = 100;
      pfVar3 = (float *)(&DAT_006b2dac + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 4:
      iVar2 = 0x78;
      pfVar3 = (float *)(&DAT_006b2dc0 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 5:
      iVar2 = 0x8c;
      pfVar3 = (float *)(&DAT_006b2dd4 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 6:
      iVar2 = 0xa0;
      pfVar3 = (float *)(&DAT_006b2de8 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 7:
      iVar2 = 0xb4;
      pfVar3 = (float *)(&DAT_006b2dfc + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      break;
    case 8:
      iVar2 = 200;
      pfVar3 = (float *)(&DAT_006b2e10 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      break;
    default:
      goto switchD_0043420a_default;
    }
    FUN_00433020(pfVar3,500.0,iVar2);
switchD_0043420a_default:
    iVar1 = FUN_00432f40(9,iVar1);
  } while( true );
}


