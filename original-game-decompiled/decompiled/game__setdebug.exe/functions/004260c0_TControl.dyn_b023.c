
/* ==== TControl.dyn_b023 @ 004260c0 ==== 
 * signature: undefined __register TControl.dyn_b023(int param_1)
 * body: 004260c0-004260e4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_b023(int param_1)

{
  if (*(char *)(param_1 + 0x8a) != '\0') {
    TLabel_set_ShowHint(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x89));
    *(undefined1 *)(param_1 + 0x8a) = 1;
  }
  return;
}


