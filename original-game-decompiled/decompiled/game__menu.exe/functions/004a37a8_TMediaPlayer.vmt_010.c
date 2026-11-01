
/* ==== TMediaPlayer.vmt_010 @ 004a37a8 ==== 
 * signature: undefined TMediaPlayer.vmt_010(void)
 * body: 004a37a8-004a37e4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMediaPlayer_vmt_010(int *param_1,int param_2,char param_3)

{
  TControl_vmt_010(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0xbd])) {
    if (*(char *)((int)param_1 + 0x2c9) != '\0') {
      FUN_004a37e8((int)param_1);
    }
    param_1[0xbd] = 0;
  }
  return;
}


