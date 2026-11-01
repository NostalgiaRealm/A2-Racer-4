
/* ==== TCustomTabControl.dyn_b024 @ 00485368 ==== 
 * signature: undefined TCustomTabControl.dyn_b024(void)
 * body: 00485368-0048538e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomTabControl_dyn_b024(int *param_1,undefined4 *param_2)

{
  TWinControl_dyn_b024((int)param_1,(int)param_2);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_2 = 0x15;
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


