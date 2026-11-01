
/* ==== TPanel.set_BorderStyle @ 00450aa8 ==== 
 * signature: undefined TPanel.set_BorderStyle(void)
 * body: 00450aa8-00450abb
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPanel_set_BorderStyle(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x204)) {
    *(char *)(param_1 + 0x204) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


