
/* ==== TMediaPlayer.vmt_00c @ 004a1a68 ==== 
 * signature: undefined TMediaPlayer.vmt_00c(void)
 * body: 004a1a68-004a1a89
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMediaPlayer_vmt_00c(int *param_1)

{
  TControl_vmt_00c(param_1);
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(char *)((int)param_1 + 0x305) != '\0')) {
    FUN_004a2970(param_1);
  }
  return;
}


