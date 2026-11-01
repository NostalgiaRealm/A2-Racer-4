
/* ==== FUN_00487c68 @ 00487c68 ==== 
 * signature: undefined FUN_00487c68(void)
 * body: 00487c68-00487d0c
 */

void FUN_00487c68(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_18;
  undefined1 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  int iStack_8;
  
  puStack_24 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_28 = &UNK_00487d0d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar1 = FUN_00487b80(in_stack_00000004 + 0x48);
  if (0xffff < *(uint *)(in_stack_00000004 + 8)) {
    thunk_FUN_00402808(uVar1);
  }
  if (0xffff < *(uint *)(in_stack_00000004 + 0xc)) {
    thunk_FUN_00402808(*(uint *)(in_stack_00000004 + 0xc));
  }
  iVar2 = FUN_00487440();
  if (iVar2 != -1) {
    uStack_18 = *(undefined4 *)(in_stack_00000004 + 0xc);
    uStack_14 = 0;
    uStack_10 = *(undefined4 *)(in_stack_00000004 + 8);
    uStack_c = 0;
    FUN_00409254(&UNK_00487d28,&uStack_18,1,&iStack_8);
    (**(code **)(*in_stack_00000008 + 0x38))(in_stack_00000008,iStack_8,iVar2);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &UNK_00487d14;
  puStack_28 = (undefined *)0x487d0c;
  FUN_00403c5c(&iStack_8);
  return;
}


