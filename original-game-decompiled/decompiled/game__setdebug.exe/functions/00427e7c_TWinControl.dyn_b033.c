
/* ==== TWinControl.dyn_b033 @ 00427e7c ==== 
 * signature: undefined __register TWinControl.dyn_b033(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00427e7c-00427eb6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b033(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00402ef0(param_1,param_2,param_3);
  FUN_00427e1c(param_1);
  FUN_00427fb4(param_1);
  if ((cVar1 != '\0') && (param_1[0x53] != 0)) {
    SetFocus((HWND)param_1[0x53]);
  }
  return;
}


