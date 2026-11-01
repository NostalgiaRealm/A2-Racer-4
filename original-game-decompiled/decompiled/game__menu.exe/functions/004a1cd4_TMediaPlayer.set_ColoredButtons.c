
/* ==== TMediaPlayer.set_ColoredButtons @ 004a1cd4 ==== 
 * signature: undefined TMediaPlayer.set_ColoredButtons(void)
 * body: 004a1cd4-004a1d15
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMediaPlayer_set_ColoredButtons(int *param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
  *(undefined2 *)(param_1 + 0xa3) = param_2;
  uVar1 = 0;
  do {
    bVar2 = (byte)uVar1 < 0xf;
    if ((byte)uVar1 < 0x10) {
      bVar2 = (*(byte *)((int)param_1 + ((int)(uVar1 & 0x7f) >> 3) + 0x28c) >> (uVar1 & 7) & 1) != 0
      ;
    }
    *(bool *)((int)param_1 + (uVar1 & 0xff) * 0x10 + 0x1fa) = bVar2;
    uVar1 = uVar1 + 1;
  } while ((char)uVar1 != '\t');
  (**(code **)(*param_1 + 0x74))();
  return;
}


