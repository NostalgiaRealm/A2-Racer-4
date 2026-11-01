
/* ==== TCustomDockForm.dyn_b02c @ 0044a704 ==== 
 * signature: undefined TCustomDockForm.dyn_b02c(void)
 * body: 0044a704-0044a759
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomDockForm_dyn_b02c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 auStack_1c [4];
  
  TWinControl_dyn_b02c(param_1);
  if (*(int *)(param_2 + 8) == 0) {
    FUN_0042f720(param_1,0xb039,0,*(undefined4 *)(param_2 + 4));
    piVar1 = *(int **)(param_2 + 4);
    if (param_1 == piVar1[0x24]) {
      FUN_0042e13c((int)piVar1,auStack_1c);
      FUN_00403178(piVar1,0xffffffff,auStack_1c);
    }
  }
  return;
}


