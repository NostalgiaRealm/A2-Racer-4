
/* ==== TCustomMemo.dyn_ffbe @ 0042741c ==== 
 * signature: undefined TCustomMemo.dyn_ffbe(void)
 * body: 0042741c-0042743e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomMemo_dyn_ffbe(int param_1,char *param_2)

{
  TWinControl_dyn_ffbe(param_1,param_2);
  if ((*param_2 == '\r') && (*(char *)(param_1 + 0x20f) == '\0')) {
    *param_2 = '\0';
  }
  return;
}


