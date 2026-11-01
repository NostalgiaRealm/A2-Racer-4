
/* ==== TfrmOptions.lblStartInfoOnClick @ 00495688 ==== 
 * signature: undefined TfrmOptions.lblStartInfoOnClick(void)
 * body: 00495688-004956b1
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_lblStartInfoOnClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x314);
  uVar2 = (**(code **)(*piVar1 + 0xb8))();
  (**(code **)(*piVar1 + 0xbc))(piVar1,uVar2 ^ 1);
  return;
}


