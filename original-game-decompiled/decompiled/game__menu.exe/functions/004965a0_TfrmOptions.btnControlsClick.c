
/* ==== TfrmOptions.btnControlsClick @ 004965a0 ==== 
 * signature: undefined TfrmOptions.btnControlsClick(void)
 * body: 004965a0-00496627
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_btnControlsClick(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x318) + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00498378(*(undefined4 *)(*(int *)(param_1 + 900) + 0xc));
    return;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 800) + 0xb8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x324) + 0xb8))();
    if (cVar1 == '\0') {
      FUN_00403c40("Unknown or invalid controler type selected");
    }
    else {
      FUN_004981f0(param_1,*(undefined4 *)(*(int *)(param_1 + 900) + 0xc));
    }
  }
  else {
    FUN_004982b4(param_1,*(undefined4 *)(*(int *)(param_1 + 900) + 0xc));
  }
  return;
}


