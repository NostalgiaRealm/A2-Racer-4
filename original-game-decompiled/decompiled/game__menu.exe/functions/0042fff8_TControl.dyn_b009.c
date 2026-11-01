
/* ==== TControl.dyn_b009 @ 0042fff8 ==== 
 * signature: undefined TControl.dyn_b009(void)
 * body: 0042fff8-00430025
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_b009(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x4a) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      TGroupBox_set_Color(param_1,*(int *)(*(int *)(param_1 + 0x24) + 0x60));
    }
    else {
      TGroupBox_set_Color(param_1,*(int *)(param_2 + 8));
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return;
}


