
/* ==== TCustomForm.dyn_001a @ 0044a0bc ==== 
 * signature: undefined TCustomForm.dyn_001a(void)
 * body: 0044a0bc-0044a0de
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_001a(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TWinControl_dyn_001a(param_1,param_2);
  if (*(int *)(param_2 + 4) == 0x2f) {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


