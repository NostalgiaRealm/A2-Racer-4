
/* ==== TMediaPlayer.set_DeviceType @ 004a36d4 ==== 
 * signature: undefined TMediaPlayer.set_DeviceType(void)
 * body: 004a36d4-004a36e2
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMediaPlayer_set_DeviceType(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2dc)) {
    *(char *)(param_1 + 0x2dc) = param_2;
  }
  return;
}


