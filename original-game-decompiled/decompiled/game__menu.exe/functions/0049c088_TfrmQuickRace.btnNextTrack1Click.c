
/* ==== TfrmQuickRace.btnNextTrack1Click @ 0049c088 ==== 
 * signature: undefined TfrmQuickRace.btnNextTrack1Click(void)
 * body: 0049c088-0049c15e
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQuickRace_btnNextTrack1Click(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  puStack_11c = &UNK_0049c15f;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,3);
  uVar2 = FUN_0049c3b4(param_1);
  iVar3 = FUN_0049c768(param_1);
  iVar3 = FUN_00462abc(iVar3);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402808(uVar4);
  }
  if (uVar2 == uVar4) {
    FUN_0049c198(param_1,0);
  }
  else {
    uVar2 = FUN_0049c3b4(param_1);
    if (SCARRY4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0049c198(param_1);
  }
  FUN_0049c3c8(param_1);
  *in_FS_OFFSET = "btnNextTrackClick";
  FUN_00403c80(&iStack_c,2);
  return;
}


