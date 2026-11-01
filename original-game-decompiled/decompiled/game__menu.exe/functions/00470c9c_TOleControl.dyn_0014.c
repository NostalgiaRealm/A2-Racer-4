
/* ==== TOleControl.dyn_0014 @ 00470c9c ==== 
 * signature: undefined TOleControl.dyn_0014(void)
 * body: 00470c9c-00470cb9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_0014(int *param_1,int param_2)

{
  if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
    (**(code **)(*param_1 + -0x10))();
    return;
  }
  TWinControl_dyn_0014(param_1,param_2);
  return;
}


