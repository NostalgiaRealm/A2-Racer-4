
/* ==== TfrmOptions.chkVideo3dClick @ 004959c4 ==== 
 * signature: undefined TfrmOptions.chkVideo3dClick(void)
 * body: 004959c4-00495a2b
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_chkVideo3dClick(int param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  FUN_00496684(param_1);
  FUN_004966c8(param_1);
  cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0x4c))();
  if ((cVar1 != '\0') ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0xb8))(), uVar2 = extraout_ECX,
     uVar3 = extraout_EDX, cVar1 == '\0')) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x36c) + 0x4c))();
    if (cVar1 != '\0') {
      return;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x36c) + 0xb8))();
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_00403178(*(int **)(param_1 + 0x360),uVar3,uVar2);
  return;
}


