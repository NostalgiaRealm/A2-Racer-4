
/* ==== TDaviSpeedButton.dyn_b018 @ 00475ee4 ==== 
 * signature: undefined TDaviSpeedButton.dyn_b018(void)
 * body: 00475ee4-00475f2f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_b018(int *param_1,int param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_2 + 4) == param_1[0x4e]) &&
     (piVar1 = *(int **)(param_2 + 8), param_1 != piVar1)) {
    if ((*(char *)((int)piVar1 + 0x131) != '\0') && (*(char *)((int)param_1 + 0x131) != '\0')) {
      *(undefined1 *)((int)param_1 + 0x131) = 0;
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      (**(code **)(*param_1 + 0x74))();
    }
    *(char *)(param_1 + 0x4a) = (char)piVar1[0x4a];
  }
  return;
}


