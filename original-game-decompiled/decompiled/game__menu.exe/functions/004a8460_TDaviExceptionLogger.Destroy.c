
/* ==== TDaviExceptionLogger.Destroy @ 004a8460 ==== 
 * signature: undefined TDaviExceptionLogger.Destroy(void)
 * body: 004a8460-004a84b6
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviExceptionLogger_Destroy(int *param_1,char param_2)

{
  bool bVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  byte bStack_9;
  int *piStack_8;
  
  puStack_10 = (undefined1 *)0x4a846b;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcVar2 = (char *)0x4a8484;
  puStack_10 = &stack0xfffffffc;
  bStack_9 = extraout_DL;
  bVar1 = FUN_004a818c();
  if (bVar1) {
    pcVar2 = "**Destroy: Exception logging ended ** ";
    FUN_004a86f8(*piStack_8,0,0,0x4a84d8);
  }
  *in_FS_OFFSET = pcVar2;
  pcStack_14 = FUN_004a84be;
  uStack_18 = 0x4a84b6;
  TObject_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}


