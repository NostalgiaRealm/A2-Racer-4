
/* ==== TButton.dyn_ffec @ 004289d4 ==== 
 * signature: undefined TButton.dyn_ffec(void)
 * body: 004289d4-004289f6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TButton_dyn_ffec(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00444864(param_1);
  if (piVar1 != (int *)0x0) {
    piVar1[0x8d] = param_1[0x7f];
  }
  TControl_dyn_ffec((int)param_1);
  return;
}


