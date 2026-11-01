
/* ==== TfrmWinFinal.timSample1Timer @ 004a4444 ==== 
 * signature: undefined TfrmWinFinal.timSample1Timer(void)
 * body: 004a4444-004a453e
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmWinFinal_timSample1Timer(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_1c = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  puStack_10 = (undefined4 *)0x0;
  puStack_14 = (undefined4 *)0x0;
  puStack_20 = &UNK_004a453f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  TTimer_set_Enabled(*(int *)(param_1 + 0x304),'\0');
  iVar1 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_00480b08(*(int *)(iVar1 + 0x10),(int *)&puStack_c);
  FUN_00403f28(&iStack_8,(undefined4 *)&UNK_004a4554,puStack_c);
  uVar2 = FUN_00482a0c(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xb0),iStack_8);
  iVar1 = (int)((longlong)(int)uVar2 * 1000);
  if ((longlong)iVar1 != (longlong)(int)uVar2 * 1000) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar1 = extraout_EDX;
  }
  iVar3 = iVar1 + 0x5dc;
  if (SCARRY4(iVar1,0x5dc)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_EDX_00;
  }
  if (iVar3 < 0) {
    thunk_FUN_00402808(uVar2);
    iVar3 = extraout_EDX_01;
  }
  TTimer_set_Interval(*(int *)(param_1 + 0x308),iVar3);
  TTimer_set_Enabled(*(int *)(param_1 + 0x308),'\x01');
  iVar1 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_00480b08(*(int *)(iVar1 + 0x10),(int *)&puStack_14);
  FUN_00403f28((int *)&puStack_10,(undefined4 *)&UNK_004a4554,puStack_14);
  FUN_00480448(*(int **)PTR_DAT_004ab694,puStack_10);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &UNK_004a4546;
  puStack_20 = (undefined *)0x4a453e;
  FUN_00403c80((int *)&puStack_14,4);
  return;
}


