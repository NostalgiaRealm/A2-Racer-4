
/* ==== TOleControl.dyn_b029 @ 00471050 ==== 
 * signature: undefined TOleControl.dyn_b029(void)
 * body: 00471050-0047109d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_b029(int *param_1)

{
  int *piVar1;
  undefined4 auStack_14 [4];
  
  piVar1 = FUN_00444864(param_1);
  if ((piVar1 == (int *)0x0) || (param_1 != (int *)piVar1[0x99])) {
    FUN_0042e13c((int)param_1,auStack_14);
    FUN_0043481c((int)param_1);
    (**(code **)(*(int *)param_1[0x80] + 0x2c))();
  }
  return;
}


