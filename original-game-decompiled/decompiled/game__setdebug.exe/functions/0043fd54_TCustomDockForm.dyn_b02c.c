
/* ==== TCustomDockForm.dyn_b02c @ 0043fd54 ==== 
 * signature: undefined TCustomDockForm.dyn_b02c(void)
 * body: 0043fd54-0043fda9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomDockForm_dyn_b02c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 auStack_1c [4];
  
  TWinControl_dyn_b02c(param_1);
  if (*(int *)(param_2 + 8) == 0) {
    FUN_00425780(param_1,0xb039,0,*(undefined4 *)(param_2 + 4));
    piVar1 = *(int **)(param_2 + 4);
    if (param_1 == piVar1[0x24]) {
      FUN_004241fc((int)piVar1,auStack_1c);
      FUN_00402ef0(piVar1,0xffffffff,auStack_1c);
    }
  }
  return;
}


