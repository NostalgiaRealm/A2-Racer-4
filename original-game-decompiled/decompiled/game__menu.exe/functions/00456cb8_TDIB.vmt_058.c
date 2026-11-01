
/* ==== TDIB.vmt_058 @ 00456cb8 ==== 
 * signature: undefined TDIB.vmt_058(void)
 * body: 00456cb8-00456cfb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_058(int *param_1,undefined4 param_2,HGLOBAL param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x456ccb;
  piVar1 = FUN_00456c20((int *)FUN_00456bf8,'\x01',param_3);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  (**(code **)(*param_1 + 0x30))(param_1,piVar1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00456d03;
  pcStack_14 = (code *)0x456cfb;
  FUN_00402f9c(piVar1);
  return;
}


