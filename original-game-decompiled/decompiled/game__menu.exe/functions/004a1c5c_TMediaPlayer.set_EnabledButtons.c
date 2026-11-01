
/* ==== TMediaPlayer.set_EnabledButtons @ 004a1c5c ==== 
 * signature: undefined TMediaPlayer.set_EnabledButtons(void)
 * body: 004a1c5c-004a1c9d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMediaPlayer_set_EnabledButtons(int *param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
  *(undefined2 *)((int)param_1 + 0x28a) = param_2;
  uVar1 = 0;
  do {
    bVar2 = (byte)uVar1 < 0xf;
    if ((byte)uVar1 < 0x10) {
      bVar2 = (*(byte *)((int)param_1 + ((int)(uVar1 & 0x7f) >> 3) + 0x28a) >> (uVar1 & 7) & 1) != 0
      ;
    }
    *(bool *)((int)param_1 + (uVar1 & 0xff) * 0x10 + 0x1f9) = bVar2;
    uVar1 = uVar1 + 1;
  } while ((char)uVar1 != '\t');
  (**(code **)(*param_1 + 0x74))();
  return;
}


