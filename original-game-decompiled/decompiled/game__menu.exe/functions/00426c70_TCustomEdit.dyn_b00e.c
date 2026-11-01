
/* ==== TCustomEdit.dyn_b00e @ 00426c70 ==== 
 * signature: undefined __register TCustomEdit.dyn_b00e(int * param_1)
 * body: 00426c70-00426c94
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomEdit_dyn_b00e(int *param_1)

{
  TWinControl_dyn_b00e(param_1);
  if (((*(byte *)((int)param_1 + 0x41) & 2) != 0) &&
     (((*(byte *)(param_1 + 8) & 0x10) == 0 || ((*(byte *)(param_1 + 8) & 1) == 0)))) {
    FUN_00426af8(param_1);
  }
  return;
}


