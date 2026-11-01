
/* ==== TfrmMainScreen.btnInternetClick @ 0049da14 ==== 
 * signature: undefined __register TfrmMainScreen.btnInternetClick(int param_1)
 * body: 0049da14-0049da42
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMainScreen_btnInternetClick(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004988f8();
  if (iVar1 == 1) {
    FUN_004910f0(*(LPCSTR *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x40));
    *(undefined1 *)(param_1 + 0x33c) = 1;
  }
  return;
}


