
/* ==== TFinalizationList.Destroy @ 00452c20 ==== 
 * signature: undefined TFinalizationList.Destroy(void)
 * body: 00452c20-00452cd2
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TFinalizationList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  iStack_c = 0;
  puStack_118 = (undefined1 *)0x452c38;
  piVar1 = FUN_004032fc(param_1,param_2);
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  if (((char)piVar1[1] == '\0') && (puStack_118 = &stack0xfffffffc, piVar1 == DAT_004aab3c)) {
    puStack_118 = &stack0xfffffffc;
    FUN_00402ee4(*piVar1,abStack_10c);
    FUN_00403e80(&iStack_c,abStack_10c);
    pcStack_130 = ": Use class procedure Finalize instead of Destroy";
    FUN_00403f9c(&iStack_8,4);
    FUN_00403c40(iStack_8);
  }
  FUN_0040c968(piVar1 + 2);
  TDaviObject_Destroy(piVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403c80(&iStack_c,2);
  return;
}


