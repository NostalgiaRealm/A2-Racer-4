
/* ==== TDaviSpeedButton.dyn_ffd9 @ 00475a10 ==== 
 * signature: undefined TDaviSpeedButton.dyn_ffd9(void)
 * body: 00475a10-00475a9d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_ffd9(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uStack_6;
  
  TControl_dyn_ffd9(param_1,param_2,param_3,param_4);
  if (*(char *)((int)param_1 + 0x132) != '\0') {
    if (*(char *)((int)param_1 + 0x131) == '\0') {
      uStack_6 = '\0';
    }
    else {
      uStack_6 = '\x03';
    }
    if (-1 < param_3) {
      iVar1 = TForm_get_ClientWidth(param_1);
      if ((param_3 < iVar1) && (-1 < param_4)) {
        iVar1 = TForm_get_ClientHeight(param_1);
        if (param_4 <= iVar1) {
          if (*(char *)((int)param_1 + 0x131) == '\0') {
            uStack_6 = '\x02';
          }
          else {
            uStack_6 = '\x03';
          }
        }
      }
    }
    if (uStack_6 != *(char *)((int)param_1 + 0x161)) {
      *(char *)((int)param_1 + 0x161) = uStack_6;
      (**(code **)(*param_1 + 0x74))();
    }
  }
  return;
}


