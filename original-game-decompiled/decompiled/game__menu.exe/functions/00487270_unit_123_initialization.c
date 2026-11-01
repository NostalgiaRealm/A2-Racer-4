
/* ==== unit_123_initialization @ 00487270 ==== 
 * signature: undefined __register unit_123_initialization(void)
 * body: 00487270-004873b5;004873bd-004873d7
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_123_initialization(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  code *pcStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  undefined *local_c;
  undefined4 *local_8;
  
  pcStack_34 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = 0;
  pcStack_38 = thunk_FUN_004036bc;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  bVar3 = _DAT_004ad420 == 0;
  _DAT_004ad420 = _DAT_004ad420 + -1;
  if (bVar3) {
    puStack_40 = (undefined1 *)0x4872aa;
    FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_c);
    puStack_40 = (undefined1 *)0x4872b5;
    FUN_004089a0(local_c,(int *)&local_8);
    puStack_40 = (undefined1 *)0x4872c2;
    FUN_00403ee4((int *)&local_8,(undefined4 *)"menu.ini");
    puStack_40 = (undefined1 *)0x4872d1;
    DAT_004ad424 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',local_8);
    pcStack_44 = thunk_FUN_004036bc;
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    iVar1 = 1;
    piVar2 = (int *)&DAT_004ad348;
    puStack_40 = &stack0xfffffffc;
    do {
      uVar5 = 0;
      ppuVar4 = &local_10;
      FUN_004085ac(iVar1,&local_14);
      (**(code **)*DAT_004ad424)(DAT_004ad424,"MenuStrings",local_14,ppuVar4,uVar5);
      FUN_00403cb0(piVar2,local_10);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 0x29);
    iVar1 = 1;
    piVar2 = (int *)&DAT_004ad3e8;
    do {
      uVar5 = 0;
      ppuVar4 = &local_18;
      FUN_004085ac(iVar1,&local_1c);
      (**(code **)*DAT_004ad424)(DAT_004ad424,"OrdinalWords",local_1c,ppuVar4,uVar5);
      FUN_00403cb0(piVar2,local_18);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 8);
    iVar1 = 1;
    piVar2 = (int *)&DAT_004ad404;
    do {
      uVar5 = 0;
      ppuVar4 = &local_20;
      FUN_004085ac(iVar1,&local_24);
      (**(code **)*DAT_004ad424)(DAT_004ad424,"OrdinalNumbers",local_24,ppuVar4,uVar5);
      FUN_00403cb0(piVar2,local_20);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 8);
    *in_FS_OFFSET = uStack_48;
    puStack_40 = (undefined1 *)0x4873bd;
    pcStack_44 = (code *)0x4873b5;
    FUN_00402f9c(DAT_004ad424);
    return;
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_004873df;
  pcStack_38 = (code *)0x4873d7;
  FUN_00403c80(&local_24,8);
  return;
}


