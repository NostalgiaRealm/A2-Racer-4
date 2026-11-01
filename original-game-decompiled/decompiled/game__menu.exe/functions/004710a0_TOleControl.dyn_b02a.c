
/* ==== TOleControl.dyn_b02a @ 004710a0 ==== 
 * signature: undefined TOleControl.dyn_b02a(void)
 * body: 004710a0-004710e4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_b02a(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00444864(param_1);
  if ((piVar1 == (int *)0x0) || (param_1 == (int *)piVar1[0x99])) {
    if (param_1[0x85] != 0) {
      (**(code **)(*(int *)param_1[0x85] + 0x18))();
    }
    if ((piVar1 != (int *)0x0) && (param_1 == (int *)piVar1[0x82])) {
      FUN_00471494();
    }
  }
  return;
}


