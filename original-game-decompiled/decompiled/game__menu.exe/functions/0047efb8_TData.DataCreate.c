
/* ==== TData.DataCreate @ 0047efb8 ==== 
 * signature: undefined TData.DataCreate(void)
 * body: 0047efb8-0047f1e1;0047f206-0047f376
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TData_DataCreate(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  int iStack_134;
  int iStack_130;
  undefined4 *puStack_12c;
  int iStack_128;
  undefined *puStack_124;
  undefined *puStack_120;
  undefined *puStack_11c;
  undefined *puStack_118;
  undefined4 *puStack_114;
  byte abStack_110 [188];
  undefined4 uStack_54;
  char *pcStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined *puStack_44;
  undefined1 *puStack_40;
  undefined *puStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  char *pcStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_1c = &stack0xfffffffc;
  iVar4 = 0x26;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_20 = &UNK_0047f377;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_28 = 0x47efeb;
  piStack_8 = param_1;
  FUN_00402ee4(*param_1,abStack_110);
  uStack_28 = 0x47eff9;
  FUN_00403e80((int *)&stack0xfffffff0,abStack_110);
  puStack_2c = &UNK_0047f390;
  pcStack_30 = "DataCreate";
  puStack_34 = (undefined4 *)0x47f013;
  FUN_00403f9c((int *)&puStack_c,3);
  puStack_34 = puStack_c;
  uStack_38 = 0x47f01c;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_34;
  puStack_34 = (undefined4 *)0x47f028;
  FUN_0045fb90(uVar2,puVar1,0);
  puStack_34 = (undefined4 *)0x47f02d;
  FUN_0045f46c();
  puStack_34 = (undefined4 *)0x47f032;
  FUN_0045fed8();
  puStack_34 = (undefined4 *)0x47f03e;
  piVar3 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX);
  piStack_8[0x37] = (int)piVar3;
  puStack_34 = (undefined4 *)0x47f055;
  TFont_set_Name(piVar3,(undefined4 *)"Arial");
  puStack_34 = (undefined4 *)0x47f05a;
  FUN_00402a48();
  puStack_34 = (undefined4 *)0x47f06c;
  FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&puStack_118);
  puStack_34 = (undefined4 *)0x47f07d;
  FUN_004089a0(puStack_118,(int *)&puStack_114);
  puStack_34 = (undefined4 *)0x47f090;
  FUN_00403cb0(piStack_8 + 0x2e,puStack_114);
  puStack_34 = (undefined4 *)0x47f098;
  FUN_0047f6e8(piStack_8);
  puStack_34 = (undefined4 *)0x47f0b1;
  FUN_00403f28((int *)&puStack_11c,(undefined4 *)piStack_8[0x2e],(undefined4 *)"menu.ini");
  puStack_34 = (undefined4 *)0x47f0bc;
  FUN_00481104(puStack_11c);
  puStack_34 = (undefined4 *)0x47f0d5;
  FUN_00403f28((int *)&puStack_120,(undefined4 *)piStack_8[0x2e],(undefined4 *)"game.ini");
  puStack_34 = (undefined4 *)0x47f0e0;
  FUN_00481104(puStack_120);
  puStack_34 = (undefined4 *)0x47f0f9;
  FUN_00403f28((int *)&puStack_124,(undefined4 *)piStack_8[0x2e],(undefined4 *)"raser.ini");
  puStack_34 = (undefined4 *)0x47f104;
  FUN_00481104(puStack_124);
  puStack_34 = (undefined4 *)0x47f10c;
  FUN_004803ac(piStack_8);
  puStack_34 = (undefined4 *)0x47f125;
  FUN_00403f28(&iStack_128,(undefined4 *)piStack_8[0x2e],(undefined4 *)"MenuRcs");
  puStack_34 = (undefined4 *)0x47f137;
  iVar4 = FUN_00463140(&UNK_00462d6c,1,iStack_128);
  piStack_8[0x2b] = iVar4;
  puStack_34 = (undefined4 *)piStack_8[0x2e];
  uStack_38 = *(undefined4 *)PTR_DAT_004ab7e0;
  puStack_3c = (undefined *)0x47f162;
  iVar4 = FUN_00481d24(&UNK_00481bc8,1,iVar4);
  piStack_8[0x2c] = iVar4;
  puStack_3c = (undefined *)piStack_8[0x2e];
  puStack_40 = (undefined1 *)0x47f18a;
  iVar4 = FUN_004895fc(&UNK_004895d8,1,piStack_8[0x2b]);
  piStack_8[0x2d] = iVar4;
  puStack_40 = (undefined1 *)0x47f1a1;
  FUN_004825f8(piStack_8[0x2c]);
  puStack_40 = (undefined1 *)0x47f1a9;
  FUN_00480828(piStack_8);
  puStack_44 = &UNK_0047f1e2;
  piStack_48 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &piStack_48;
  piStack_4c = (int *)&UNK_0047f410;
  pcStack_50 = "hunny.acs";
  uStack_54 = 0x47f1cf;
  puStack_40 = &stack0xfffffffc;
  iVar4 = FUN_0047dac8(&UNK_0047daa8,1,0);
  piVar3 = piStack_48;
  piStack_8[0x28] = iVar4;
  *in_FS_OFFSET = pcStack_50;
  piStack_48 = (int *)0x47f212;
  piVar3 = (int *)TStatic_vmt_004(&PTR_TStatic_vmt_000_0048ddb4,1,piVar3);
  piStack_8[0x33] = (int)piVar3;
  piStack_48 = (int *)0x47f236;
  FUN_00403f28((int *)&puStack_12c,(undefined4 *)piStack_8[0x2e],(undefined4 *)"static.ini");
  piStack_48 = (int *)0x47f243;
  FUN_0048e148(piVar3,puStack_12c);
  piStack_48 = (int *)0x47f251;
  piStack_48 = (int *)(**(code **)(*(int *)piStack_8[0x33] + 8))();
  piStack_4c = (int *)0x47f257;
  uVar2 = FUN_0045f46c();
  piVar3 = piStack_48;
  piStack_48 = (int *)0x47f262;
  FUN_0045fd98(uVar2,0x47f46c,piVar3);
  piStack_48 = (int *)0x47f26e;
  iVar4 = TMenuIni_vmt_004(&UNK_0048ecf8,1);
  piStack_8[0x31] = iVar4;
  piStack_4c = &iStack_130;
  piStack_48 = (int *)0x47f296;
  FUN_00403f28(piStack_4c,(undefined4 *)piStack_8[0x2e],(undefined4 *)"menu.ini");
  piStack_48 = (int *)0x47f2a3;
  FUN_004604d8(iVar4,iStack_130);
  piStack_48 = (int *)0x47f2b1;
  piStack_48 = (int *)(**(code **)(*(int *)piStack_8[0x31] + 8))();
  piStack_4c = (int *)0x47f2b7;
  uVar2 = FUN_0045f46c();
  piVar3 = piStack_48;
  piStack_48 = (int *)0x47f2c2;
  FUN_0045fd98(uVar2,0x47f47c,piVar3);
  if (*(char *)(piStack_8[0x31] + 8) == '\0') {
    piStack_48 = (int *)0x47f2dd;
    iVar4 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
    piStack_8[0x35] = iVar4;
    piStack_48 = (int *)0x47f2f2;
    iVar4 = TGameIni_vmt_004(&PTR_TGameIni_vmt_000_0048a238,1);
    piStack_8[0x32] = iVar4;
    piStack_48 = (int *)0x47f316;
    FUN_00403f28(&iStack_134,(undefined4 *)piStack_8[0x2e],(undefined4 *)"game.ini");
    piStack_48 = (int *)0x47f323;
    FUN_0048a804(iVar4,iStack_134);
    piStack_48 = (int *)0x47f331;
    piStack_48 = (int *)(**(code **)(*(int *)piStack_8[0x32] + 8))();
    piStack_4c = (int *)0x47f337;
    uVar2 = FUN_0045f46c();
    piVar3 = piStack_48;
    piStack_48 = (int *)0x47f342;
    FUN_0045fd98(uVar2,0x47f498,piVar3);
  }
  piStack_48 = (int *)0x47f347;
  uVar2 = FUN_0045f46c();
  piStack_48 = (int *)0x47f34c;
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = puStack_44;
  puStack_3c = &UNK_0047f37e;
  puStack_40 = (undefined1 *)0x47f369;
  FUN_00403c80(&iStack_134,9);
  puStack_40 = (undefined1 *)0x47f376;
  FUN_00403c80((int *)&stack0xfffffff0,2);
  return;
}


