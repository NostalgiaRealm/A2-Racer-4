
/* ==== TDaviObject.Destroy @ 00453c14 ==== 
 * signature: undefined __register TDaviObject.Destroy(int * param_1, char param_2)
 * body: 00453c14-00453c75
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDaviObject_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *pcStack_138;
  undefined4 uStack_134;
  code *pcStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  
  puStack_120 = (undefined1 *)0x453c2a;
  piVar1 = FUN_004032fc(param_1,param_2);
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  pcStack_130 = thunk_FUN_00403408;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  *in_FS_OFFSET = uStack_140;
  pcStack_138 = FUN_00453c7d;
  uStack_13c = 0x453c75;
  puStack_12c = &stack0xfffffffc;
  puStack_120 = &stack0xfffffffc;
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  return;
}


