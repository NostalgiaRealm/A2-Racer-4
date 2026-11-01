
/* ==== TMediaPlayer.Destroy @ 004a1a18 ==== 
 * signature: undefined TMediaPlayer.Destroy(void)
 * body: 004a1a18-004a1a64
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMediaPlayer_Destroy(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 uStack_c;
  
  uStack_c = param_3;
  piVar1 = FUN_004032fc(param_1,param_2);
  if (*(ushort *)((int)piVar1 + 0x2da) != 0) {
    mciSendCommandA((uint)*(ushort *)((int)piVar1 + 0x2da),0x804,2,(DWORD_PTR)&uStack_c);
  }
  FUN_004a1bfc((int)piVar1);
  TCustomControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


