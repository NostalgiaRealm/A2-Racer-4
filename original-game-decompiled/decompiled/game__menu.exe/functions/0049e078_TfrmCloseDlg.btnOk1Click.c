
/* ==== TfrmCloseDlg.btnOk1Click @ 0049e078 ==== 
 * signature: undefined TfrmCloseDlg.btnOk1Click(void)
 * body: 0049e078-0049e0a9
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCloseDlg_btnOk1Click(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2fc) + 0xb8))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x234) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x234) = 3;
  return;
}


