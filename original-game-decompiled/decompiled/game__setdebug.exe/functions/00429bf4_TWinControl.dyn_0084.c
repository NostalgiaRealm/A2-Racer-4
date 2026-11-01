
/* ==== TWinControl.dyn_0084 @ 00429bf4 ==== 
 * signature: undefined __register TWinControl.dyn_0084(int * param_1, int param_2)
 * body: 00429bf4-00429c14
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0084(int *param_1,int param_2)

{
  if (((*(byte *)(param_1 + 8) & 0x10) != 0) && (param_1[9] != 0)) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (**(code **)(*param_1 + -0x10))();
  return;
}


