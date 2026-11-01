
/* ==== TDaviGraphicButton.dyn_b013 @ 00469904 ==== 
 * signature: undefined TDaviGraphicButton.dyn_b013(void)
 * body: 00469904-00469973
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicButton_dyn_b013(int *param_1)

{
  int iVar1;
  
  TControl_dyn_b013(param_1);
  *(undefined1 *)(param_1 + 0x84) = 1;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  param_1[0x8c] = *(int *)(iVar1 + 0x108);
  param_1[0x8d] = *(int *)(iVar1 + 0x10c);
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(int **)(iVar1 + 0x10c) = param_1;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(*param_1 + 0xc4);
  (**(code **)(*param_1 + 0x74))();
  if (*(short *)((int)param_1 + 0x222) != 0) {
    (*(code *)param_1[0x88])(param_1[0x89],param_1);
  }
  return;
}


