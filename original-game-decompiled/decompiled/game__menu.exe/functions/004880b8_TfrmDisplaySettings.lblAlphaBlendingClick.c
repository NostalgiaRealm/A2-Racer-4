
/* ==== TfrmDisplaySettings.lblAlphaBlendingClick @ 004880b8 ==== 
 * signature: undefined TfrmDisplaySettings.lblAlphaBlendingClick(void)
 * body: 004880b8-004880e1
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDisplaySettings_lblAlphaBlendingClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x330);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


