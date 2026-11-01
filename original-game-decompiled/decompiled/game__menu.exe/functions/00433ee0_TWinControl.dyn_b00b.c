
/* ==== TWinControl.dyn_b00b @ 00433ee0 ==== 
 * signature: undefined __register TWinControl.dyn_b00b(int * param_1)
 * body: 00433ee0-00433f0c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b00b(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x47) == '\0') && (param_1[9] != 0)) {
    FUN_0043157c(param_1,'\0');
  }
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)) {
    FUN_00431f54(param_1);
  }
  return;
}


