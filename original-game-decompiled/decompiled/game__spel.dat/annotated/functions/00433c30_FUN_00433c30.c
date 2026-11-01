
/* ==== FUN_00433c30 @ 00433c30 ==== 
 * signature: undefined __stdcall FUN_00433c30(void)
 * body: 00433c30-00433f21
 */

void FUN_00433c30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4) + 1;
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_Vehicle_Gearbox_Data_00598b0c);
  FUN_004c5930(0,10,0x28,(byte *)s_Number_Of_Gears_00598b24);
  iVar1 = 0;
  if (0 < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4)) {
    iVar3 = 0x3c;
    do {
      iVar1 = iVar1 + 1;
      FUN_004c5930(0,10,iVar3,(byte *)s_Gear_Ratio__d_00598b34);
      iVar3 = iVar3 + 0x14;
    } while (iVar1 < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4));
  }
  FUN_004c5930(0,0xfa,0x28,&DAT_00598b44);
  iVar1 = 0;
  if (0 < *(int *)(&DAT_006b2c08 + (DAT_006c34fc * 0x9a + DAT_006fbb50) * 4)) {
    iVar3 = 0x3c;
    do {
      FUN_004c5930(0,0xfa,iVar3,&DAT_00598b48);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar1 < *(int *)(&DAT_006b2c08 + (DAT_006c34fc * 0x9a + DAT_006fbb50) * 4));
  }
  for (iVar1 = FUN_00432f40(iVar2,0); iVar1 != -1; iVar1 = FUN_00432f40(iVar2,iVar1)) {
    if (iVar1 == 0) {
      FUN_00433100((int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4),1,0x28,1,6);
      iVar3 = *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4);
      iVar2 = iVar3 + 1;
      if (iVar3 < 6) {
        iVar3 = (iVar3 * 5 + 0xf) * 4;
        do {
          FUN_004c5930(0,0,iVar3,(byte *)s__00598b4c);
          iVar3 = iVar3 + 0x14;
        } while (iVar3 < 0xb4);
      }
      iVar3 = 0;
      if (0 < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4)) {
        iVar4 = 0x3c;
        do {
          iVar3 = iVar3 + 1;
          FUN_004c5930(0,10,iVar4,(byte *)s_Gear_Ratio__d_00598ba4);
          FUN_004c5930(0,0xfa,iVar4,&DAT_00598bb4);
          iVar4 = iVar4 + 0x14;
        } while (iVar3 < *(int *)(&DAT_006b2c08 + (DAT_006fbb50 + DAT_006c34fc * 0x9a) * 4));
      }
    }
    else {
      FUN_00433020((float *)(&DAT_006b2c90 + (iVar1 + DAT_006fbb50 * 6 + DAT_006c34fc * 0x9a) * 4),
                   0.1,(iVar1 * 5 + 10) * 4);
    }
  }
  return;
}


