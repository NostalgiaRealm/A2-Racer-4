
/* ==== TMediaPlayer.dyn_0200 @ 004a2504 ==== 
 * signature: undefined TMediaPlayer.dyn_0200(void)
 * body: 004a2504-004a256b
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMediaPlayer_dyn_0200(int *param_1,int param_2)

{
  POINT pt;
  BOOL BVar1;
  LONG LStack_14;
  LONG LStack_10;
  
  if ((char)param_1[0xa4] != '\0') {
    FUN_0040f7d0((int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10),&LStack_14);
    pt.y = LStack_10;
    pt.x = LStack_14;
    BVar1 = PtInRect((RECT *)(param_1 + 0xa5),pt);
    if ((BVar1 != 0) != (bool)*(byte *)((int)param_1 + 0x291)) {
      *(byte *)((int)param_1 + 0x291) = *(byte *)((int)param_1 + 0x291) ^ 1;
      FUN_004a1e64(param_1,*(byte *)((int)param_1 + 0x292),param_1[0xa5]);
    }
  }
  return;
}


