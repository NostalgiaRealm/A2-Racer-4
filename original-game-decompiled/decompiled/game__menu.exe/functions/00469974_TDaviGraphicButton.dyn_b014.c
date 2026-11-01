
/* ==== TDaviGraphicButton.dyn_b014 @ 00469974 ==== 
 * signature: undefined TDaviGraphicButton.dyn_b014(void)
 * body: 00469974-004699d6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicButton_dyn_b014(int *param_1)

{
  int iVar1;
  
  TControl_dyn_b014(param_1);
  *(undefined1 *)(param_1 + 0x84) = 0;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(int *)(iVar1 + 0x108) = param_1[0x8c];
  *(int *)(iVar1 + 0x10c) = param_1[0x8d];
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  (**(code **)(*param_1 + 0x74))();
  if (*(short *)((int)param_1 + 0x22a) != 0) {
    (*(code *)param_1[0x8a])(param_1[0x8b],param_1);
  }
  return;
}


