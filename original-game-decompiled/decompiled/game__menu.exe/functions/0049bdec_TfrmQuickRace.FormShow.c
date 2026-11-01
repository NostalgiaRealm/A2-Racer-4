
/* ==== TfrmQuickRace.FormShow @ 0049bdec ==== 
 * signature: undefined TfrmQuickRace.FormShow(void)
 * body: 0049bdec-0049bed3
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQuickRace_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
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
  puStack_118 = &UNK_0049bed4;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_0049c868(param_1);
  FUN_0049c198(param_1,*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 0xc));
  FUN_0049c4d8(param_1,*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc) + 8));
  *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 1;
  FUN_0049c3c8(param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


