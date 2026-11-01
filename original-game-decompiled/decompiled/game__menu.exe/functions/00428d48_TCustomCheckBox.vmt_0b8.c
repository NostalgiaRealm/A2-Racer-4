
/* ==== TCustomCheckBox.vmt_0b8 @ 00428d48 ==== 
 * signature: undefined TCustomCheckBox.vmt_0b8(void)
 * body: 00428d48-00428d5b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomCheckBox_vmt_0b8(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    TCheckBox_set_State(param_1,'\x01');
    return;
  }
  TCheckBox_set_State(param_1,'\0');
  return;
}


