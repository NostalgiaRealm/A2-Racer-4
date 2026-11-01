
/* ==== TWinControl.dyn_0210 @ 00429b50 ==== 
 * signature: undefined __register TWinControl.dyn_0210(int * param_1, int * param_2)
 * body: 00429b50-00429b81
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0210(int *param_1,int *param_2)

{
  bool bVar1;
  
  if ((((short)param_2[1] == 1) || ((short)param_2[1] == 2)) &&
     (bVar1 = FUN_00428528((HWND)param_2[2],param_2), bVar1)) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


