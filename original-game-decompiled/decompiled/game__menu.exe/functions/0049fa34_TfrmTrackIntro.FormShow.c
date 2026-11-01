
/* ==== TfrmTrackIntro.FormShow @ 0049fa34 ==== 
 * signature: undefined TfrmTrackIntro.FormShow(void)
 * body: 0049fa34-0049fae4
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmTrackIntro_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
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
  puStack_11c = &UNK_0049fae5;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TGameMenuScreen_FormShow();
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)&UNK_0049fb20);
  TTimer_set_Enabled(param_1[0xbc],'\x01');
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


