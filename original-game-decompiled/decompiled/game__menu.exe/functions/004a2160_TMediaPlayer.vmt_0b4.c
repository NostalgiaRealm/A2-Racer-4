
/* ==== TMediaPlayer.vmt_0b4 @ 004a2160 ==== 
 * signature: undefined TMediaPlayer.vmt_0b4(void)
 * body: 004a2160-004a21d3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMediaPlayer_vmt_0b4(int *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[0x7c];
  TBrush_set_Style((int *)piVar1[5],'\x01');
  TPen_set_Color((int *)piVar1[4],0x80000006);
  TPen_set_Width((int *)piVar1[4],1);
  FUN_004191b8(piVar1,0,0,param_1[0xf],param_1[0xe]);
  iVar3 = 0;
  bVar2 = 0;
  do {
    if ((char)param_1[(uint)bVar2 * 4 + 0x7e] != '\0') {
      FUN_004a1e64(param_1,bVar2,iVar3);
      iVar3 = iVar3 + param_1[0xa9] + -1;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 != 9);
  return;
}


