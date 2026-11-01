
/* ==== FUN_00493ed0 @ 00493ed0 ==== 
 * signature: undefined FUN_00493ed0(void)
 * body: 00493ed0-00494180
 */

void FUN_00493ed0(undefined4 param_1,short param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int *extraout_EDX;
  undefined4 extraout_EDX_00;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_164;
  code *pcStack_160;
  int *piVar3;
  
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)(param_2 + 1);
  uVar2 = in(param_2 + 1);
  piVar3 = (int *)CONCAT31((int3)((uint)param_1 >> 8),uVar2);
  *(undefined4 *)(unaff_EBP + -0x14c) = 0;
  *(undefined4 *)(unaff_EBP + -0x144) = 0;
  *(undefined4 *)(unaff_EBP + -0x148) = 0;
  *(undefined4 *)(unaff_EBP + -0x13c) = 0;
  *(undefined4 *)(unaff_EBP + -0x140) = 0;
  *(undefined4 *)(unaff_EBP + -0x114) = 0;
  *(undefined4 *)(unaff_EBP + -0x10c) = 0;
  *(undefined4 *)(unaff_EBP + -0x110) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -8) = 0;
  pcStack_160 = thunk_FUN_004036bc;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  FUN_00402ee4(*piVar3,(byte *)(unaff_EBP + -0x108));
  FUN_00403e80((int *)(unaff_EBP + -8),(byte *)(unaff_EBP + -0x108));
  FUN_00403f9c((int *)(unaff_EBP + -4),3);
  puVar1 = *(undefined4 **)(unaff_EBP + -4);
  uVar4 = FUN_0045f46c();
  FUN_0045fb90(uVar4,puVar1,0);
  FUN_004085ac(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14),
               (int *)(unaff_EBP + -0x110));
  FUN_00403f28((int *)(unaff_EBP + -0x10c),(undefined4 *)"Data.MenuStuff.CurrentPlayer : ",
               *(undefined4 **)(unaff_EBP + -0x110));
  iVar5 = *(int *)(unaff_EBP + -0x10c);
  uVar4 = FUN_0045f46c();
  FUN_0045fe88(uVar4,iVar5);
  iVar5 = FUN_0049421c((int)piVar3,
                       *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 8));
  TGDIButton_set_Definition((int *)piVar3[0xc3],iVar5);
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),(byte *)(unaff_EBP + -0x138));
  FUN_00403e80((int *)(unaff_EBP + -0x114),(byte *)(unaff_EBP + -0x138));
  TGroupBox_set_Caption(piVar3[0xc3],*(uint **)(unaff_EBP + -0x114));
  uVar6 = FUN_0045e8a0(piVar3[0xcb]);
  FUN_004085ac(uVar6,(int *)(unaff_EBP + -0x140));
  FUN_00403f28((int *)(unaff_EBP + -0x13c),(undefined4 *)"flcount : ",
               *(undefined4 **)(unaff_EBP + -0x140));
  iVar5 = *(int *)(unaff_EBP + -0x13c);
  uVar4 = FUN_0045f46c();
  FUN_0045fe88(uVar4,iVar5);
  iVar5 = 0;
  do {
    piVar7 = (int *)(unaff_EBP + -0x148);
    uVar4 = iVar5 + 1;
    if (SCARRY4(iVar5,1)) {
      uVar4 = thunk_FUN_00402808(uVar4);
      piVar7 = extraout_EDX;
    }
    FUN_004085ac(uVar4,piVar7);
    FUN_00403f28((int *)(unaff_EBP + -0x144),(undefined4 *)&DAT_004941fc,
                 *(undefined4 **)(unaff_EBP + -0x148));
    piVar7 = (int *)FUN_00415a80((int)piVar3,*(char **)(unaff_EBP + -0x144));
    iVar8 = FUN_0045e8a0(piVar3[0xcb]);
    if (iVar5 < iVar8) {
      iVar8 = FUN_00494200((int)piVar3,iVar5);
      iVar8 = FUN_0049421c((int)piVar3,*(int *)(*(int *)(iVar8 + 0xc) + 0x3c));
      TGDIButton_set_Definition(piVar7,iVar8);
      iVar8 = FUN_00494200((int)piVar3,iVar5);
      FUN_00403e80((int *)(unaff_EBP + -0x14c),(byte *)(*(int *)(iVar8 + 0xc) + 8));
      TGroupBox_set_Caption((int)piVar7,*(uint **)(unaff_EBP + -0x14c));
      piVar7[3] = iVar5;
      FUN_0042ec14(piVar7,extraout_EDX_00,extraout_ECX);
    }
    else {
      TGDIButton_set_Definition(piVar7,piVar3[0xbf]);
      TGroupBox_set_Caption((int)piVar7,*(uint **)(PTR_DAT_004ab8b4 + 0x40));
      piVar7[3] = -1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  iVar5 = FUN_0045e8a0(piVar3[0xcb]);
  (**(code **)(*(int *)piVar3[0xbe] + 0x5c))((int *)piVar3[0xbe],0 < iVar5);
  uVar4 = FUN_0045f46c();
  FUN_0045fc70(uVar4);
  *in_FS_OFFSET = "UpdateScreen";
  FUN_00403c80((int *)(unaff_EBP + -0x14c),5);
  FUN_00403c80((int *)(unaff_EBP + -0x114),3);
  FUN_00403c80((int *)(unaff_EBP + -8),2);
  return;
}


