
/* ==== TfrmException2.FormKeyPress @ 004a808c ==== 
 * signature: undefined TfrmException2.FormKeyPress(void)
 * body: 004a808c-004a80c2
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmException2_FormKeyPress(int param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((*param_3 == '\x03') && (*(char *)(*(int *)(param_1 + 0x2e4) + 0x47) != '\0')) {
    pcVar1 = (char *)(**(code **)(**(int **)(*(int *)(param_1 + 0x2e4) + 0x208) + 0x4c))();
    iVar2 = FUN_004297dc(pcVar1,extraout_EDX,extraout_ECX);
    FUN_00429484(iVar2,pcVar1);
  }
  return;
}


