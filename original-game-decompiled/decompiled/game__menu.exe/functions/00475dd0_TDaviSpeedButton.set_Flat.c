
/* ==== TDaviSpeedButton.set_Flat @ 00475dd0 ==== 
 * signature: undefined TDaviSpeedButton.set_Flat(void)
 * body: 00475dd0-00475e07
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_Flat(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x133)) {
    *(char *)((int)param_1 + 0x133) = param_2;
    if (param_2 == '\0') {
      param_1[0x10] = param_1[0x10] | 0x40;
    }
    else {
      param_1[0x10] = param_1[0x10] & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


