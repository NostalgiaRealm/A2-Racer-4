
/* ==== TForm.set_BorderIcons @ 0043c944 ==== 
 * signature: undefined TForm.set_BorderIcons(void)
 * body: 0043c944-0043c96e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_BorderIcons(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x210)) &&
     (*(char *)(param_1 + 0x210) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00427e64(param_1);
  }
  return;
}


