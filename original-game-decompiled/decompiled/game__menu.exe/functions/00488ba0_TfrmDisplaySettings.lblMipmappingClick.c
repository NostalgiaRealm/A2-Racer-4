
/* ==== TfrmDisplaySettings.lblMipmappingClick @ 00488ba0 ==== 
 * signature: undefined TfrmDisplaySettings.lblMipmappingClick(void)
 * body: 00488ba0-00488bd4
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDisplaySettings_lblMipmappingClick(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = FUN_00487b9c(param_1);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_1 + 0x348);
    uVar3 = (**(code **)(*piVar1 + 0xb4))();
    (**(code **)(*piVar1 + 0xb8))(piVar1,uVar3 ^ 1);
  }
  return;
}


