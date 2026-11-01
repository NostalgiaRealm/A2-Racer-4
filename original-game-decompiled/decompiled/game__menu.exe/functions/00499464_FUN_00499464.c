
/* ==== FUN_00499464 @ 00499464 ==== 
 * signature: undefined FUN_00499464(void)
 * body: 00499464-00499516
 */

void FUN_00499464(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  uint **ppuVar2;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint *puStack_c;
  uint *puStack_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_c = (uint *)0x0;
  uStack_10 = 0;
  iStack_14 = 0;
  iStack_18 = 0;
  puStack_24 = &UNK_00499517;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar1 = FUN_004993b8();
  FUN_004085ac(*(undefined4 *)(iVar1 + 8),(int *)&puStack_8);
  TGroupBox_set_Caption(*(int *)(param_1 + 0x304),puStack_8);
  iVar1 = FUN_004995e0(param_1);
  TGroupBox_set_Caption(*(int *)(param_1 + 0x300),*(uint **)(iVar1 + 0x2c));
  ppuVar2 = &puStack_c;
  iVar1 = FUN_004995e0(param_1);
  FUN_004085ac(*(undefined4 *)(iVar1 + 0x30),&iStack_18);
  iStack_14 = iStack_18;
  uStack_10 = CONCAT31(uStack_10._1_3_,0xb);
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x30),&iStack_14,0,(int *)ppuVar2);
  TGroupBox_set_Caption(*(int *)(param_1 + 0x308),puStack_c);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &UNK_0049951e;
  puStack_24 = (undefined *)0x499509;
  FUN_00403c5c(&iStack_18);
  puStack_24 = (undefined *)0x499516;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


