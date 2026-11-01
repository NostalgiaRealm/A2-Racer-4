
/* ==== TfrmDisplaySettings.lblBilinearFilteringClick @ 0048808c ==== 
 * signature: undefined TfrmDisplaySettings.lblBilinearFilteringClick(void)
 * body: 0048808c-004880b5
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDisplaySettings_lblBilinearFilteringClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x32c);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


