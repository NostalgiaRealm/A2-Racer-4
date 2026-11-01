
/* ==== TfrmHighScoreDlg.GDIFormShow @ 00494f50 ==== 
 * signature: undefined TfrmHighScoreDlg.GDIFormShow(void)
 * body: 00494f50-00494f9d
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmHighScoreDlg_GDIFormShow(int *param_1)

{
  int *piVar1;
  
  TfrmCoolDialog_GDIFormShow(param_1);
  piVar1 = (int *)param_1[0xbe];
  *(undefined1 *)(piVar1 + 0x7a) = 1;
  (**(code **)(*piVar1 + 0xb0))();
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)&UNK_00494fa8);
  TGDIButton_set_Definition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x88));
  return;
}


