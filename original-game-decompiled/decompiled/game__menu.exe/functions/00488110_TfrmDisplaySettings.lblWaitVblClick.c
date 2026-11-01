
/* ==== TfrmDisplaySettings.lblWaitVblClick @ 00488110 ==== 
 * signature: undefined TfrmDisplaySettings.lblWaitVblClick(void)
 * body: 00488110-00488139
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDisplaySettings_lblWaitVblClick(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x338);
  uVar2 = (**(code **)(*piVar1 + 0xb4))();
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar2 ^ 1);
  return;
}


