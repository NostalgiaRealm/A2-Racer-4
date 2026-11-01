
/* ==== TCustomControl.vmt_0a8 @ 0042c280 ==== 
 * signature: undefined TCustomControl.vmt_0a8(void)
 * body: 0042c280-0042c2fa
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomControl_vmt_0a8(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x42c298;
  FUN_00417174(param_1[0x7c]);
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_1c = (code *)0x42c2b6;
  puStack_10 = &stack0xfffffffc;
  FUN_004174b0((int *)param_1[0x7c],param_2);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_004235a0(param_1[0x7c]);
  (**(code **)(*param_1 + 0xb4))();
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0042c302;
  pcStack_20 = (code *)0x42c2fa;
  FUN_004174b0((int *)param_1[0x7c],0);
  return;
}


