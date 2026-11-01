
/* ==== TCustomComboBox.dyn_bc2c @ 00428690 ==== 
 * signature: undefined __register TCustomComboBox.dyn_bc2c(int * param_1, int param_2)
 * body: 00428690-004286bd
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomComboBox_dyn_bc2c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(iVar1 + 0x10) = param_1[0x7f];
  if (*(char *)((int)param_1 + 0x1fa) == '\x04') {
    (**(code **)(*param_1 + 0xc0))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x10);
  }
  return;
}


