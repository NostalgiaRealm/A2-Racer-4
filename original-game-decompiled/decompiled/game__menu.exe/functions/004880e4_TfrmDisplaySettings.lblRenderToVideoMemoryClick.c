
/* ==== TfrmDisplaySettings.lblRenderToVideoMemoryClick @ 004880e4 ==== 
 * signature: undefined TfrmDisplaySettings.lblRenderToVideoMemoryClick(void)
 * body: 004880e4-0048810d
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDisplaySettings_lblRenderToVideoMemoryClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x334);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


