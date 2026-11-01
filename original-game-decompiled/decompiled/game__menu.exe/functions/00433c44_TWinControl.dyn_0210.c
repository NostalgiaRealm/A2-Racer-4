
/* ==== TWinControl.dyn_0210 @ 00433c44 ==== 
 * signature: undefined __register TWinControl.dyn_0210(int * param_1, int * param_2)
 * body: 00433c44-00433c75
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0210(int *param_1,int *param_2)

{
  bool bVar1;
  
  if ((((short)param_2[1] == 1) || ((short)param_2[1] == 2)) &&
     (bVar1 = FUN_004324c8((HWND)param_2[2],param_2), bVar1)) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


