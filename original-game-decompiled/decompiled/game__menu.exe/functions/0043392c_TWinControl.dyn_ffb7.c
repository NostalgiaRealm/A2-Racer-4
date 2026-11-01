
/* ==== TWinControl.dyn_ffb7 @ 0043392c ==== 
 * signature: undefined TWinControl.dyn_ffb7(void)
 * body: 0043392c-0043396c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffb7(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  piVar1 = FUN_00444864(param_1);
  if ((piVar1 == (int *)0x0) || (param_1 == piVar1)) {
    uVar2 = FUN_0042f720((int)param_1,0xb043,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  else {
    FUN_00403178(piVar1,param_2,extraout_ECX);
  }
  return;
}


