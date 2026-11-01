
/* ==== TDaviSpeedButton.dyn_b013 @ 00476058 ==== 
 * signature: undefined TDaviSpeedButton.dyn_b013(void)
 * body: 00476058-00476098
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_b013(int *param_1)

{
  char cVar1;
  
  TControl_dyn_b013(param_1);
  (**(code **)(*param_1 + 0x88))();
  if ((*(char *)((int)param_1 + 0x133) != '\0') && (*(char *)((int)param_1 + 0x145) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      *(undefined1 *)((int)param_1 + 0x145) = 1;
      (**(code **)(*param_1 + 0x74))();
    }
  }
  return;
}


