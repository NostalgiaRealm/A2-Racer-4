
/* ==== TWinControl.dyn_b039 @ 0042948c ==== 
 * signature: undefined __register TWinControl.dyn_b039(int param_1, int param_2)
 * body: 0042948c-004294b1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b039(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  if ((*(char *)(param_1 + 0x17c) != '\0') && (*(int *)(param_1 + 0x148) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x28))
              (*(int **)(param_1 + 0x148),*(undefined4 *)(param_2 + 8));
  }
  return;
}


