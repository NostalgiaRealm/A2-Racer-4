
/* ==== FUN_0044bb88 @ 0044bb88 ==== 
 * signature: undefined FUN_0044bb88(void)
 * body: 0044bb88-0044bc00;0044bc08-0044bc0c
 */

void FUN_0044bb88(int param_1,undefined4 param_2)

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
  puStack_20 = (undefined1 *)0x44bbb6;
  iStack_8 = param_1;
  FUN_0044b71c(param_1);
  puStack_24 = &UNK_0044bc01;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  SystemParametersInfoA(0x30,0,auStack_18,0);
  FUN_0044bb00(iStack_8,param_2,auStack_18);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x44bc08;
  *(ushort *)(iStack_8 + 0x82) = *(ushort *)(iStack_8 + 0x82) & 0xffef;
  puStack_24 = (undefined *)0x44bc00;
  FUN_0044b724(iStack_8,uStack_28,puVar1);
  return;
}


