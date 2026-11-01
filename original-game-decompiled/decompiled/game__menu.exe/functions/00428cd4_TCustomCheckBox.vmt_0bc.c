
/* ==== TCustomCheckBox.vmt_0bc @ 00428cd4 ==== 
 * signature: undefined TCustomCheckBox.vmt_0bc(void)
 * body: 00428cd4-00428d10
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomCheckBox_vmt_0bc(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x1fa);
  if (cVar1 == '\0') {
    if (*(char *)((int)param_1 + 0x1f9) == '\0') {
      TCheckBox_set_State(param_1,'\x01');
      return;
    }
    TCheckBox_set_State(param_1,'\x02');
  }
  else {
    if (cVar1 == '\x01') {
      TCheckBox_set_State(param_1,'\0');
      return;
    }
    if (cVar1 == '\x02') {
      TCheckBox_set_State(param_1,'\x01');
    }
  }
  return;
}


