
/* ==== FUN_004a70c0 @ 004a70c0 ==== 
 * signature: undefined FUN_004a70c0(void)
 * body: 004a70c0-004a711f
 */

void FUN_004a70c0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_14 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  puStack_18 = &UNK_004a7120;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  FUN_004085ac(*(undefined4 *)(param_1 + 0x38),(int *)&puStack_c);
  FUN_00403f28(&iStack_8,(undefined4 *)"setting renderfocus to : ",puStack_c);
  iVar1 = iStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,iVar1);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_004a7127;
  puStack_18 = (undefined *)0x4a711f;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


