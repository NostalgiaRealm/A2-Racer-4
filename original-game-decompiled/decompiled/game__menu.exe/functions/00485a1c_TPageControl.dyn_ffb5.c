
/* ==== TPageControl.dyn_ffb5 @ 00485a1c ==== 
 * signature: undefined __register TPageControl.dyn_ffb5(int * param_1)
 * body: 00485a1c-00485a56
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_ffb5(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0xc0))();
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = FUN_00444864(param_1);
    if ((piVar1 != (int *)0x0) && (piVar1[0x8e] != 0)) {
      (**(code **)(*(int *)piVar1[0x8e] + 0xc))();
    }
  }
  TCustomTabControl_dyn_ffb5((int)param_1);
  return;
}


