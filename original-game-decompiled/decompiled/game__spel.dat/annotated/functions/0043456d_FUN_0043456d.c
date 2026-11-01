
/* ==== FUN_0043456d @ 0043456d ==== 
 * signature: undefined __fastcall FUN_0043456d(char * param_1, int param_2)
 * body: 0043456d-0043456f
 */

void __fastcall FUN_0043456d(char *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar5;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar6;
  int unaff_EBX;
  int unaff_ESI;
  byte in_CF;
  int iVar7;
  float *pfVar8;
  int iStack_5;
  undefined1 uStack_1;
  
  *(int *)(param_2 + 0x43) = *(int *)(param_2 + 0x43) + in_EAX + (uint)in_CF;
  *(char *)(unaff_ESI + 0x4f004343) = *(char *)(unaff_ESI + 0x4f004343) + (char)param_1;
  param_1[0x44] = param_1[0x44] + (char)((uint)(unaff_EBX + 2) >> 8);
  cVar5 = (char)((uint)in_EAX >> 8);
  *(char *)(unaff_EBX + -0x32ffbcb9) = *(char *)(unaff_EBX + -0x32ffbcb9) + cVar5;
  *param_1 = *param_1 + cVar5;
  pcVar1 = (char *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + (char)param_2) + -0x6f6f6f70);
  *pcVar1 = *pcVar1 + (char)param_2 + '\x01';
  FUN_00431b00();
  FUN_004c5930(0,10,0,(byte *)s_Vehicle_Wheel_Data_00598d18);
  FUN_004c5930(0,10,0x28,(byte *)s_Front_Wheel_Set_00598d2c);
  FUN_004c5930(0,10,0x3c,(byte *)s_Front_Wheel_Factor_00598d3c);
  FUN_004c5930(0,10,0x50,(byte *)s_Rear_Wheel_Set_00598d50);
  FUN_004c5930(0,10,100,(byte *)s_Rear_Wheel_Factor_00598d60);
  FUN_004c5930(0,10,0x78,(byte *)s_Wheel_Radius_00598d74);
  iVar3 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
  iStack_5 = FUN_00432ef0(*(float *)(&DAT_006b2d0c + iVar3),*(float *)(&DAT_006b2d20 + iVar3),
                          *(float *)(&DAT_006b2d34 + iVar3));
  FUN_004c5930(0,0xfa,0x28,&DAT_00598d84);
  FUN_004c5930(0,0xfa,0x3c,&DAT_00598d88);
  iVar3 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
  iVar4 = FUN_00432ef0(*(float *)(&DAT_006b2d5c + iVar3),*(float *)(&DAT_006b2d70 + iVar3),
                       *(float *)(&DAT_006b2d84 + iVar3));
  uStack_1 = (undefined1)iVar4;
  FUN_004c5930(0,0xfa,0x50,&DAT_00598d8c);
  FUN_004c5930(0,0xfa,100,&DAT_00598d90);
  FUN_004c5930(0,0xfa,0x78,&DAT_00598d94);
  iVar3 = FUN_00432f40(5,0);
  do {
    if (iVar3 == -1) {
      return;
    }
    switch(iVar3) {
    case 0:
      FUN_00433100(&iStack_5,1,0x28,0,9);
      iVar6 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2d0c + iVar6) = (&DAT_00597eb4)[iStack_5 * 3];
      uVar2 = (&DAT_00597ebc)[iStack_5 * 3];
      *(undefined4 *)(&DAT_006b2d20 + iVar6) = (&DAT_00597eb8)[iStack_5 * 3];
      *(undefined4 *)(&DAT_006b2d34 + iVar6) = uVar2;
      break;
    case 1:
      iVar6 = 0x3c;
      pfVar8 = (float *)(&DAT_006b2d48 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      goto LAB_004348c1;
    case 2:
      FUN_00433100((int *)&uStack_1,1,0x50,0,9);
      iVar7 = CONCAT31((int3)((uint)iVar4 >> 8),uStack_1);
      iVar6 = (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4;
      *(undefined4 *)(&DAT_006b2d5c + iVar6) = (&DAT_00597eb4)[iVar7 * 3];
      uVar2 = (&DAT_00597ebc)[iVar7 * 3];
      *(undefined4 *)(&DAT_006b2d70 + iVar6) = (&DAT_00597eb8)[iVar7 * 3];
      *(undefined4 *)(&DAT_006b2d84 + iVar6) = uVar2;
      break;
    case 3:
      iVar6 = 100;
      pfVar8 = (float *)(&DAT_006b2d98 + (DAT_006fbb44 + DAT_006c34fc * 0x9a) * 4);
      goto LAB_004348c1;
    case 4:
      iVar6 = 0x78;
      pfVar8 = (float *)(&DAT_006b2e24 + DAT_006c34fc * 0x268);
LAB_004348c1:
      FUN_00433020(pfVar8,0.1,iVar6);
    }
    iVar3 = FUN_00432f40(5,iVar3);
  } while( true );
}


