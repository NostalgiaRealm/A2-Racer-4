
/* ==== TGroupBox.set_Ctl3D @ 00434b20 ==== 
 * signature: undefined __register TGroupBox.set_Ctl3D(int param_1, char param_2)
 * body: 00434b20-00434b43
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_Ctl3D(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x138)) {
    *(char *)(param_1 + 0x138) = param_2;
    *(undefined1 *)(param_1 + 0x160) = 0;
    FUN_0042f720(param_1,0xb010,0,0);
  }
  return;
}


