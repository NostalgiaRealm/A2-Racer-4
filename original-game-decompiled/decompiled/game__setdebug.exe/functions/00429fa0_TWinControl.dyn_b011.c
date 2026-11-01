
/* ==== TWinControl.dyn_b011 @ 00429fa0 ==== 
 * signature: undefined TWinControl.dyn_b011(void)
 * body: 00429fa0-00429fdc
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b011(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x160) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TScrollBox_set_Ctl3D(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x138));
    }
    else {
      TScrollBox_set_Ctl3D(param_1,*(int *)(param_2 + 8) != 0);
    }
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  return;
}


