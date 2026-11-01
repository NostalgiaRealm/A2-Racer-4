
/* ==== TControl.dyn_b008 @ 004260e8 ==== 
 * signature: undefined TControl.dyn_b008(void)
 * body: 004260e8-00426115
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_b008(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TLabel_set_Font(param_1);
    }
    else {
      TLabel_set_Font(param_1);
    }
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  return;
}


