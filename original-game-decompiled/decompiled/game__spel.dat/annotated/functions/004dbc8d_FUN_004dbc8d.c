
/* ==== FUN_004dbc8d @ 004dbc8d ==== 
 * signature: undefined1 * __stdcall FUN_004dbc8d(void)
 * body: 004dbc8d-004dbce8
 */

undefined1 * FUN_004dbc8d(void)

{
  char cVar1;
  char in_AL;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,in_AL);
  uVar3 = 0xffffffff;
  pcVar5 = s_Double_005b73c0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(_uStack00000018,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_Double_005b73c0;
    pcVar6 = *(char **)(_uStack00000018 + 4);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(uint *)(_uStack00000018 + 8) = uVar3;
    *(undefined1 *)(*(int *)(_uStack00000018 + 4) + uVar3) = 0;
  }
  return _uStack00000018;
}


