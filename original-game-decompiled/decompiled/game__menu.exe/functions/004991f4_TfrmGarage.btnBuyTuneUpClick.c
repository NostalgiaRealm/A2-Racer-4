
/* ==== TfrmGarage.btnBuyTuneUpClick @ 004991f4 ==== 
 * signature: undefined TfrmGarage.btnBuyTuneUpClick(void)
 * body: 004991f4-0049936e
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmGarage_btnBuyTuneUpClick(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_118 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_11c = &UNK_0049936f;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,1);
  if ((char)param_1[0xd3] == '\x04') {
    iVar4 = FUN_0048e6d4(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xcc),4);
    iVar4 = *(int *)(iVar4 + 0x30);
    iVar5 = FUN_004993b8();
    if (*(int *)(iVar5 + 8) < iVar4) {
      FUN_004986d0(param_1);
    }
    else {
      iVar4 = FUN_004993b8();
      if (*(int *)(iVar4 + 0x10) < 100) {
        FUN_004807cc(*(int *)PTR_DAT_004ab694,(undefined4 *)&UNK_004993b0);
        FUN_004993b8();
        FUN_0048dc4c();
        FUN_004996a0(param_1);
        FUN_00499464(param_1);
        FUN_00499600((int)param_1);
      }
    }
  }
  else {
    iVar4 = FUN_004993b8();
    cVar2 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_1[0xd3]));
    if (cVar2 == '\0') {
      iVar4 = FUN_004993b8();
      iVar4 = *(int *)(iVar4 + 8);
      iVar5 = FUN_004995e0(param_1);
      if (iVar4 < *(int *)(iVar5 + 0x30)) {
        FUN_004986d0(param_1);
      }
      else {
        FUN_004807cc(*(int *)PTR_DAT_004ab694,(undefined4 *)&UNK_004993b0);
        uVar6 = FUN_004993b8();
        FUN_0048d9d8(uVar6,(char)param_1[0xd3]);
        FUN_00499464(param_1);
        FUN_004996a0(param_1);
        FUN_00499600((int)param_1);
      }
    }
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "btnBuyTuneUpClick";
  FUN_00403c80(&iStack_c,2);
  return;
}


