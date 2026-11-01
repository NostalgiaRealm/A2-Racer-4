
/* ==== TCustomForm.dyn_001a @ 0043f70c ==== 
 * signature: undefined TCustomForm.dyn_001a(void)
 * body: 0043f70c-0043f72e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_001a(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  TWinControl_dyn_001a(param_1,param_2);
  if (*(int *)(param_2 + 4) == 0x2f) {
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


