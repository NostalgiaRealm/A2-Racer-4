
/* ==== TForm.set_BorderStyle @ 00447320 ==== 
 * signature: undefined __register TForm.set_BorderStyle(int param_1, char param_2)
 * body: 00447320-00447356
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_BorderStyle(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != *(char *)(param_1 + 0x211)) {
    *(char *)(param_1 + 0x211) = param_2;
    if ((param_2 == '\x02') || (param_2 == '\x05')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    TScrollBox_set_AutoScroll(param_1,cVar1);
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      FUN_00431e04(param_1);
    }
  }
  return;
}


