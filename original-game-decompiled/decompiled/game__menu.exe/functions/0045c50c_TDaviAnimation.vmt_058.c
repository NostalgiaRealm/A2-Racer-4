
/* ==== TDaviAnimation.vmt_058 @ 0045c50c ==== 
 * signature: undefined TDaviAnimation.vmt_058(void)
 * body: 0045c50c-0045c5c2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_058(int *param_1,short param_2,HGLOBAL param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  code *pcStack_13c;
  code *pcStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  char *pcStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte abStack_110 [256];
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  puStack_11c = &stack0xfffffffc;
  iStack_c = 0;
  iStack_10 = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0x82) {
    iStack_128 = 0x45c545;
    FUN_00402ee4(*param_1,abStack_110);
    iStack_128 = 0x45c553;
    FUN_00403e80(&iStack_10,abStack_110);
    iStack_128 = iStack_10;
    pcStack_12c = ".LoadFromClipboardFormat";
    puStack_130 = &DAT_0045c620;
    pcStack_134 = "Wrong clipboard data format.";
    pcStack_138 = (code *)0x45c572;
    FUN_00403f9c(&iStack_c,4);
    pcStack_138 = (code *)0x45c584;
    FUN_00403c40(iStack_c);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  pcStack_138 = (code *)0x45c592;
  piStack_8 = FUN_0045b860((int *)FUN_0045b838,'\x01',param_3);
  pcStack_13c = thunk_FUN_004036bc;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  pcStack_138 = (code *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x50))(param_1,piStack_8);
  *in_FS_OFFSET = uStack_140;
  pcStack_138 = FUN_0045c5ca;
  pcStack_13c = (code *)0x45c5c2;
  FUN_00402f9c(piStack_8);
  return;
}


