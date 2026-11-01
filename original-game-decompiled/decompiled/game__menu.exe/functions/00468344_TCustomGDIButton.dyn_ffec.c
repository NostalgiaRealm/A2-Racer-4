
/* ==== TCustomGDIButton.dyn_ffec @ 00468344 ==== 
 * signature: undefined __register TCustomGDIButton.dyn_ffec(int * param_1)
 * body: 00468344-0046837d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomGDIButton_dyn_ffec(int *param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  piVar1 = (int *)FUN_004656b4((int)param_1);
  piVar1 = FUN_00444864(piVar1);
  if (piVar1 != (int *)0x0) {
    piVar1[0x8d] = param_1[99];
  }
  (**(code **)(*param_1 + 0x74))();
  TControl_dyn_ffec((int)param_1);
  return;
}


