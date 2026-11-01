
/* ==== unit_189_initialization @ 00486f48 ==== 
 * signature: undefined unit_189_initialization(void)
 * body: 00486f48-00487100
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_189_initialization(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *puStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  undefined *puStack_c;
  undefined4 *puStack_8;
  
  puStack_2c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_c = (undefined *)0x0;
  puStack_10 = (undefined4 *)0x0;
  puStack_14 = (undefined4 *)0x0;
  iStack_18 = 0;
  puStack_1c = (undefined4 *)0x0;
  puStack_30 = &UNK_00487101;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  bVar3 = _DAT_004ad344 == 0;
  _DAT_004ad344 = _DAT_004ad344 + -1;
  if (bVar3) {
    FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&puStack_c);
    FUN_004089a0(puStack_c,(int *)&puStack_8);
    FUN_00403ee4((int *)&puStack_8,(undefined4 *)"MenuCaps.ini");
    DAT_004ad2e8 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',puStack_8);
    (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,"Default","Caption",&puStack_10,"<No Value>");
    FUN_00403cb0(&DAT_004ad2ec,puStack_10);
    (**(code **)*DAT_004ad2e8)(DAT_004ad2e8,"Default",&UNK_00487164,&puStack_14,0);
    FUN_00403cb0(&DAT_004ad2f0,puStack_14);
    DAT_004ad2f4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,"Default",&UNK_00487174,1);
    DAT_004ad2f8 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,"Default","FontSize",10);
    DAT_004ad2fc = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,"Default","BtnFontSize",10);
    DAT_004ad300 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,"Default","FontColor",0xffffff);
    DAT_004ad304 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,"Default","BtnFontColor",0xffffff);
    _DAT_004ad308 =
         (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,"Default","DisabledFontColor",0xc0c0c0);
    iVar2 = 0;
    puVar1 = (undefined4 *)0x4ad31c;
    do {
      uVar4 = 100;
      FUN_004085ac(iVar2,(int *)&puStack_1c);
      FUN_00403f28(&iStack_18,(undefined4 *)"ColWidth",puStack_1c);
      uVar4 = (**(code **)(*DAT_004ad2e8 + 8))(DAT_004ad2e8,"Default",iStack_18,uVar4);
      *puVar1 = uVar4;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 10);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &UNK_00487108;
  puStack_30 = (undefined *)0x487100;
  FUN_00403c80((int *)&puStack_1c,6);
  return;
}


