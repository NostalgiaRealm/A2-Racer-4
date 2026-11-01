
/* ==== FUN_00440be8 @ 00440be8 ==== 
 * signature: undefined FUN_00440be8(void)
 * body: 00440be8-00440c60;00440c68-00440c6c
 */

void FUN_00440be8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_18 [16];
  int iStack_8;
  
  if (*(short *)(param_1 + 0x80) != 0) {
    *(ushort *)(param_1 + 0x82) = *(ushort *)(param_1 + 0x82) | 0x10;
    return;
  }
  puStack_20 = (undefined1 *)0x440c16;
  iStack_8 = param_1;
  FUN_0044077c(param_1);
  puStack_24 = &UNK_00440c61;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  SystemParametersInfoA(0x30,0,auStack_18,0);
  FUN_00440b60(iStack_8,param_2,auStack_18);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x440c68;
  *(ushort *)(iStack_8 + 0x82) = *(ushort *)(iStack_8 + 0x82) & 0xffef;
  puStack_24 = (undefined *)0x440c60;
  FUN_00440784(iStack_8,uStack_28,puVar1);
  return;
}


