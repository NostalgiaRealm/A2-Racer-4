
/* ==== FUN_00482a0c @ 00482a0c ==== 
 * signature: undefined FUN_00482a0c(void)
 * body: 00482a0c-00482a9a
 */

void FUN_00482a0c(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  int iStack_c;
  undefined4 *puStack_8;
  
  iStack_c = 0;
  puStack_18 = (undefined1 *)0x482a25;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_1c = &UNK_00482a9b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00403f28(&iStack_c,puStack_8,(undefined4 *)&UNK_00482ab4);
  iVar1 = FUN_004636a0(*(undefined4 *)(param_1 + 0x14),iStack_c);
  uVar2 = FUN_00480b74();
  if ((longlong)(int)((longlong)iVar1 * (longlong)(int)uVar2) !=
      (longlong)iVar1 * (longlong)(int)uVar2) {
    thunk_FUN_00402808(uVar2);
  }
  uVar2 = FUN_00402ad4();
  if ((int)uVar2 >> 0x1f != extraout_EDX) {
    thunk_FUN_00402808(uVar2);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_00482aa2;
  puStack_1c = (undefined *)0x482a9a;
  FUN_00403c80(&iStack_c,2);
  return;
}


