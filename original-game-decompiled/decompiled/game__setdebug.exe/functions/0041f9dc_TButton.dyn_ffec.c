
/* ==== TButton.dyn_ffec @ 0041f9dc ==== 
 * signature: undefined TButton.dyn_ffec(void)
 * body: 0041f9dc-0041f9fe
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TButton_dyn_ffec(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00439eb4(param_1);
  if (piVar1 != (int *)0x0) {
    piVar1[0x8d] = param_1[0x7f];
  }
  TControl_dyn_ffec((int)param_1);
  return;
}


