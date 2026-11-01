
/* ==== FUN_00427ff4 @ 00427ff4 ==== 
 * signature: undefined FUN_00427ff4(void)
 * body: 00427ff4-0042803a
 */

void FUN_00427ff4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  pcStack_24 = (code *)&stack0xfffffffc;
  puStack_1c = &DAT_0042804c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00428042;
  pcStack_28 = (code *)0x428035;
  FUN_004233d4();
  pcStack_28 = (code *)0x42803a;
  FUN_0041a3d0();
  return;
}


