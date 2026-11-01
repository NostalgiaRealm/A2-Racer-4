
/* ==== TfrmException2.btnOkClick @ 004a7ff0 ==== 
 * signature: undefined __register TfrmException2.btnOkClick(int param_1)
 * body: 004a7ff0-004a803f
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmException2_btnOkClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2ec) + 0xb4))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x234) = 6;
    return;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2f0) + 0xb4))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x234) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 7;
  }
  return;
}


