
/* ==== FUN_0044bf10 @ 0044bf10 ==== 
 * signature: undefined __stdcall FUN_0044bf10(void)
 * body: 0044bf10-0044bfba
 */

void FUN_0044bf10(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_00448610(0,(&DAT_006fa618)[DAT_006fb898 * 0x25] * 1000,0);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a12c8);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_005a3eec = FUN_004c3cd0(s_PLAYER_005a12ec,s_checkpoint_speed_005a12d8);
  if (DAT_005a3eec < 1) {
    DAT_005a3eec = 0x32;
  }
  iVar1 = FUN_004c3cd0(s_PLAYER_005a1308,s_checkpoint_value_005a12f4);
  DAT_006fcf8c = iVar1 * DAT_005a3eec;
  if (DAT_006fcf8c < 1) {
    DAT_006fcf8c = 5000;
  }
  FUN_00448610(0xb,DAT_006fcf8c,1);
  return;
}


