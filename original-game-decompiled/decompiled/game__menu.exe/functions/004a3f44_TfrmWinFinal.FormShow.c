
/* ==== TfrmWinFinal.FormShow @ 004a3f44 ==== 
 * signature: undefined TfrmWinFinal.FormShow(void)
 * body: 004a3f44-004a414a;004a416c-004a41a7
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmWinFinal_FormShow(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_15c;
  undefined *puStack_158;
  undefined1 *puStack_154;
  undefined *puStack_150;
  int iStack_14c;
  undefined *puStack_148;
  undefined4 *puStack_144;
  char *pcStack_140;
  undefined *puStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined *puStack_130;
  undefined1 *puStack_12c;
  int iStack_11c;
  int iStack_118;
  byte abStack_114 [256];
  int iStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_12c = &stack0xfffffffc;
  iStack_11c = 0;
  iStack_118 = 0;
  puStack_10 = (undefined4 *)0x0;
  iStack_14 = 0;
  puStack_c = (undefined4 *)0x0;
  puStack_130 = &UNK_004a41a8;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  iStack_138 = 0x4a3f8a;
  piStack_8 = param_1;
  FUN_00402ee4(*param_1,abStack_114);
  iStack_138 = 0x4a3f98;
  FUN_00403e80(&iStack_14,abStack_114);
  iStack_138 = iStack_14;
  puStack_13c = &UNK_004a41c0;
  pcStack_140 = "FormShow";
  puStack_144 = (undefined4 *)0x4a3fb2;
  FUN_00403f9c((int *)&puStack_10,3);
  puStack_144 = puStack_10;
  puStack_148 = (undefined *)0x4a3fbb;
  uVar4 = FUN_0045f46c();
  puVar3 = puStack_144;
  puStack_144 = (undefined4 *)0x4a3fc7;
  FUN_0045fb90(uVar4,puVar3,2);
  puStack_144 = (undefined4 *)0x4a3fd1;
  TBaseFormOneWay_FormShow((int)piStack_8);
  puStack_144 = (undefined4 *)0x4a3fe3;
  iVar5 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  puStack_144 = (undefined4 *)0x4a3ff4;
  TGroupBox_set_Caption(piStack_8[0xbf],*(uint **)(iVar5 + 0x1c));
  puStack_144 = (undefined4 *)0x4a400e;
  TControl_set_Left((int *)piStack_8[0xc0],*(undefined4 *)(piStack_8[0xc3] + 0x30));
  puStack_144 = (undefined4 *)0x4a4028;
  TControl_set_Top((int *)piStack_8[0xc0],*(undefined4 *)(piStack_8[0xc3] + 0x34));
  piVar1 = (int *)(piStack_8[0xc3] + 0x30);
  iVar5 = *(int *)(piStack_8[0xc4] + 0x30) - *piVar1;
  if (SBORROW4(*(int *)(piStack_8[0xc4] + 0x30),*piVar1)) {
    puStack_144 = (undefined4 *)0x4a4047;
    thunk_FUN_00402808(piStack_8[0xc3]);
    iVar5 = extraout_EDX;
  }
  puStack_144 = (undefined4 *)0x4a4055;
  TControl_set_Width((int *)piStack_8[0xc0],iVar5);
  piVar1 = (int *)(piStack_8[0xc3] + 0x34);
  iVar5 = *(int *)(piStack_8[0xc4] + 0x34) - *piVar1;
  if (SBORROW4(*(int *)(piStack_8[0xc4] + 0x34),*piVar1)) {
    puStack_144 = (undefined4 *)0x4a4074;
    thunk_FUN_00402808(piStack_8[0xc3]);
    iVar5 = extraout_EDX_00;
  }
  puStack_144 = (undefined4 *)0x4a4082;
  TControl_set_Height((int *)piStack_8[0xc0],iVar5);
  puStack_144 = *(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8);
  puStack_148 = &UNK_004a41e4;
  iStack_14c = 0x4a40a6;
  iVar5 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iStack_14c = 0x4a40b4;
  FUN_00480b08(*(int *)(iVar5 + 0x10),&iStack_118);
  iStack_14c = iStack_118;
  puStack_150 = &UNK_004a41f0;
  puStack_154 = (undefined1 *)0x4a40cc;
  FUN_00403f9c((int *)&puStack_c,4);
  puStack_158 = &UNK_004a414b;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  puStack_154 = &stack0xfffffffc;
  FUN_00403f28(&iStack_11c,(undefined4 *)"trying to play : ",puStack_c);
  iVar5 = iStack_11c;
  uVar4 = FUN_0045f46c();
  FUN_0045fe88(uVar4,iVar5);
  FUN_00403cb0((int *)(piStack_8[0xbe] + 0x300),puStack_c);
  FUN_004a2970((int *)piStack_8[0xbe]);
  FUN_004a36a4(piStack_8[0xbe],1);
  FUN_004a2c98((int *)piStack_8[0xbe]);
  puVar2 = puStack_154;
  *in_FS_OFFSET = uStack_15c;
  iVar5 = *(int *)piStack_8[0xbc];
  puStack_154 = (undefined1 *)0x4a417d;
  (**(code **)(iVar5 + 0xb4))((int *)piStack_8[0xbc],iVar5,puVar2);
  *in_FS_OFFSET = puStack_150;
  puStack_148 = &UNK_004a41af;
  iStack_14c = 0x4a419a;
  FUN_00403c80(&iStack_11c,2);
  iStack_14c = 0x4a41a7;
  FUN_00403c80(&iStack_14,3);
  return;
}


