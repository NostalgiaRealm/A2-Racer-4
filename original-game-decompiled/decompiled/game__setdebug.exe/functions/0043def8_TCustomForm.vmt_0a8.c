
/* ==== TCustomForm.vmt_0a8 @ 0043def8 ==== 
 * signature: undefined TCustomForm.vmt_0a8(void)
 * body: 0043def8-0043df81
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_0a8(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x43df10;
  FUN_00417174(param_1[0x88]);
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_1c = (code *)0x43df2e;
  puStack_10 = &stack0xfffffffc;
  FUN_004174b0((int *)param_1[0x88],param_2);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_1[0x8e] == 0) {
    pcStack_1c = (code *)&stack0xfffffffc;
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  else {
    pcStack_1c = (code *)&stack0xfffffffc;
    (**(code **)(*(int *)param_1[0x8e] + 0x28))();
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0043df89;
  pcStack_20 = (code *)0x43df81;
  FUN_004174b0((int *)param_1[0x88],0);
  return;
}


