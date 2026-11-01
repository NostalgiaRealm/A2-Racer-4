
/* ==== TDaviSpeedButton.set_Down @ 00475d64 ==== 
 * signature: undefined TDaviSpeedButton.set_Down(void)
 * body: 00475d64-00475dcd
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_Down(int *param_1,char param_2)

{
  if (param_1[0x4e] == 0) {
    param_2 = '\0';
  }
  if ((param_2 != *(char *)((int)param_1 + 0x131)) &&
     ((*(char *)((int)param_1 + 0x131) == '\0' || ((char)param_1[0x4a] != '\0')))) {
    *(char *)((int)param_1 + 0x131) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0x161) = 0;
      (**(code **)(*param_1 + 0x78))();
    }
    else {
      if (*(char *)((int)param_1 + 0x161) == '\0') {
        (**(code **)(*param_1 + 0x74))();
      }
      *(undefined1 *)((int)param_1 + 0x161) = 3;
    }
    if (param_2 != '\0') {
      FUN_00475d2c(param_1);
    }
  }
  return;
}


