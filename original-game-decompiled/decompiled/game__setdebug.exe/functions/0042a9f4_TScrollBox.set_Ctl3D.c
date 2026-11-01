
/* ==== TScrollBox.set_Ctl3D @ 0042a9f4 ==== 
 * signature: undefined __register TScrollBox.set_Ctl3D(int param_1, char param_2)
 * body: 0042a9f4-0042aa17
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TScrollBox_set_Ctl3D(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x138)) {
    *(char *)(param_1 + 0x138) = param_2;
    *(undefined1 *)(param_1 + 0x160) = 0;
    FUN_00425780(param_1,0xb010,0,0);
  }
  return;
}


