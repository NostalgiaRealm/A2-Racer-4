
/* ==== TWinControl.dyn_b033 @ 00431e1c ==== 
 * signature: undefined __register TWinControl.dyn_b033(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00431e1c-00431e56
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b033(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  FUN_00431dbc(param_1);
  FUN_00431f54(param_1);
  if ((cVar1 != '\0') && (param_1[0x53] != 0)) {
    SetFocus((HWND)param_1[0x53]);
  }
  return;
}


