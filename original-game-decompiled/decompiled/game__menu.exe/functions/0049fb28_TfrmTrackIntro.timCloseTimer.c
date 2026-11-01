
/* ==== TfrmTrackIntro.timCloseTimer @ 0049fb28 ==== 
 * signature: undefined TfrmTrackIntro.timCloseTimer(void)
 * body: 0049fb28-0049fbcb
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmTrackIntro_timCloseTimer(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_0049fbcc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar4 = &UNK_0049fbe0;
  pcVar3 = "timCloseTimer";
  iVar5 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TTimer_set_Enabled(param_1[0xbc],'\0');
  (**(code **)(*param_1 + 0xe8))
            (param_1,&PTR_TWinControl_vmt_000_0049999c,*param_1,pcVar3,puVar4,iVar5);
  *in_FS_OFFSET = pcVar3;
  FUN_00403c80(&iStack_c,2);
  return;
}


