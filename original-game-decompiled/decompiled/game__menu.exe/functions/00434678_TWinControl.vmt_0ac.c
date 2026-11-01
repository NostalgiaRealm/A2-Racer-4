
/* ==== TWinControl.vmt_0ac @ 00434678 ==== 
 * signature: undefined __register TWinControl.vmt_0ac(int param_1)
 * body: 00434678-0043468d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_0ac(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
  }
  return;
}


