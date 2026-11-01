
/* ==== TCustomForm.dyn_b00e @ 0043cfe8 ==== 
 * signature: undefined __register TCustomForm.dyn_b00e(int * param_1)
 * body: 0043cfe8-0043d005
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b00e(int *param_1)

{
  TWinControl_dyn_b00e(param_1);
  if (param_1[0x88] != 0) {
    TCanvas_set_Font(param_1[0x88]);
  }
  return;
}


