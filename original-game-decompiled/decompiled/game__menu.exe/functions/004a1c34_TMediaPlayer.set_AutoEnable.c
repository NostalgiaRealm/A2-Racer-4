
/* ==== TMediaPlayer.set_AutoEnable @ 004a1c34 ==== 
 * signature: undefined TMediaPlayer.set_AutoEnable(void)
 * body: 004a1c34-004a1c5b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMediaPlayer_set_AutoEnable(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xc1]) {
    *(char *)(param_1 + 0xc1) = param_2;
    if (param_2 == '\0') {
      TMediaPlayer_set_EnabledButtons(param_1,*(undefined2 *)((int)param_1 + 0x28a));
    }
    else {
      FUN_004a1ca0(param_1);
    }
  }
  return;
}


