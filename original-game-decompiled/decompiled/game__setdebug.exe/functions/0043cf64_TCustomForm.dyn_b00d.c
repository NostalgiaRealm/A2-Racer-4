
/* ==== TCustomForm.dyn_b00d @ 0043cf64 ==== 
 * signature: undefined TCustomForm.dyn_b00d(void)
 * body: 0043cf64-0043cf84
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b00d(int *param_1)

{
  TWinControl_dyn_b00d(param_1);
  if (param_1[0x88] != 0) {
    TBrush_set_Color(*(int **)(param_1[0x88] + 0x14),param_1[0x18]);
  }
  return;
}


