
/* ==== FUN_00431f94 @ 00431f94 ==== 
 * signature: undefined FUN_00431f94(void)
 * body: 00431f94-00431fda
 */

void FUN_00431f94(int param_1)

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
  puStack_1c = &DAT_00431fec;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00431fe2;
  pcStack_28 = (code *)0x431fd5;
  FUN_0042d314();
  pcStack_28 = (code *)0x431fda;
  FUN_0041cbf4();
  return;
}


