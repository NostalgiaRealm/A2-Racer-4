
/* ==== TControl.dyn_b03d @ 00426088 ==== 
 * signature: undefined TControl.dyn_b03d(void)
 * body: 00426088-004260a7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_b03d(int *param_1)

{
  if ((char)param_1[0x14] != '\0') {
    if (param_1[9] != 0) {
      (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)(param_1[9] + 0x4f));
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


