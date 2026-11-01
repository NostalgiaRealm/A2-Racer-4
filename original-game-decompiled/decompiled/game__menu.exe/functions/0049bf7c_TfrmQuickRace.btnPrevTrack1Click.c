
/* ==== TfrmQuickRace.btnPrevTrack1Click @ 0049bf7c ==== 
 * signature: undefined TfrmQuickRace.btnPrevTrack1Click(void)
 * body: 0049bf7c-0049c04f
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQuickRace_btnPrevTrack1Click(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_0049c050;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,3);
  iVar3 = FUN_0049c3b4(param_1);
  if (iVar3 == 0) {
    iVar3 = FUN_0049c768(param_1);
    uVar2 = FUN_00462abc(iVar3);
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0049c198(param_1);
  }
  else {
    uVar2 = FUN_0049c3b4(param_1);
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0049c198(param_1);
  }
  FUN_0049c3c8(param_1);
  *in_FS_OFFSET = "btnPrevTrackClick";
  FUN_00403c80(&iStack_c,2);
  return;
}


