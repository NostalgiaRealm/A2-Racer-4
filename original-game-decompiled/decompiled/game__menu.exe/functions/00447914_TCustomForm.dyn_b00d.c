
/* ==== TCustomForm.dyn_b00d @ 00447914 ==== 
 * signature: undefined TCustomForm.dyn_b00d(void)
 * body: 00447914-00447934
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


