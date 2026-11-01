
/* ==== TRadioButton.dyn_b006 @ 00429120 ==== 
 * signature: undefined TRadioButton.dyn_b006(void)
 * body: 00429120-00429194
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TRadioButton_dyn_b006(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  int iStack_8;
  
  puStack_18 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_1c = &UNK_00429195;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TGroupBox_get_Caption((int)param_1,&iStack_8);
  cVar1 = FUN_004447f4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),iStack_8);
  if (cVar1 != '\0') {
    cVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xb0))();
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_0042917f;
    }
  }
  TWinControl_dyn_b006((int)param_1,param_2);
LAB_0042917f:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_0042919c;
  puStack_1c = (undefined *)0x429194;
  FUN_00403c5c(&iStack_8);
  return;
}


