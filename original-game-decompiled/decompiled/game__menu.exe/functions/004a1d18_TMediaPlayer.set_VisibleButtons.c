
/* ==== TMediaPlayer.set_VisibleButtons @ 004a1d18 ==== 
 * signature: undefined TMediaPlayer.set_VisibleButtons(void)
 * body: 004a1d18-004a1d85
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMediaPlayer_set_VisibleButtons(int *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  *(undefined2 *)(param_1 + 0xa2) = param_2;
  uVar1 = 0;
  do {
    bVar3 = (byte)uVar1 < 0xf;
    if ((byte)uVar1 < 0x10) {
      bVar3 = (*(byte *)((int)param_1 + ((int)(uVar1 & 0x7f) >> 3) + 0x288) >> (uVar1 & 7) & 1) != 0
      ;
    }
    *(bool *)(param_1 + (uVar1 & 0xff) * 4 + 0x7e) = bVar3;
    uVar1 = uVar1 + 1;
  } while ((char)uVar1 != '\t');
  if ((*(byte *)(param_1 + 8) & 0x40) != 0) {
    iVar2 = FUN_004a1d88(param_1);
    param_1[0xa9] = (param_1[0xe] + -1) / iVar2 + 1;
    (**(code **)(*param_1 + 0x74))();
    return;
  }
  FUN_004a1db0(param_1);
  return;
}


