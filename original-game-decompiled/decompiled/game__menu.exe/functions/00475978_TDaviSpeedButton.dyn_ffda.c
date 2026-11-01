
/* ==== TDaviSpeedButton.dyn_ffda @ 00475978 ==== 
 * signature: undefined TDaviSpeedButton.dyn_ffda(void)
 * body: 00475978-004759cc
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_ffda
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  char cVar1;
  
  TControl_dyn_ffda((int)param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x131) == '\0') {
        *(undefined1 *)((int)param_1 + 0x161) = 2;
        (**(code **)(*param_1 + 0x74))();
      }
      *(undefined1 *)((int)param_1 + 0x132) = 1;
    }
  }
  return;
}


