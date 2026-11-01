
/* ==== TfrmWinFinal.FormShowScreen @ 004a45b4 ==== 
 * signature: undefined TfrmWinFinal.FormShowScreen(void)
 * body: 004a45b4-004a461f
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmWinFinal_FormShowScreen(int param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int extraout_EDX_01;
  
  uVar1 = FUN_00482a0c(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xb0),&UNK_004a4628);
  iVar2 = (int)((longlong)(int)uVar1 * 1000);
  if ((longlong)iVar2 != (longlong)(int)uVar1 * 1000) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  iVar3 = iVar2 + 0x5dc;
  if (SCARRY4(iVar2,0x5dc)) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_EDX_00;
  }
  if (iVar3 < 0) {
    thunk_FUN_00402808(uVar1);
    iVar3 = extraout_EDX_01;
  }
  TTimer_set_Interval(*(int *)(param_1 + 0x304),iVar3);
  TTimer_set_Enabled(*(int *)(param_1 + 0x304),'\x01');
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)&UNK_004a4628);
  return;
}


