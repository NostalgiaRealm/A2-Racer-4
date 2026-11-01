
/* ==== FUN_004e8379 @ 004e8379 ==== 
 * signature: undefined1 * __stdcall FUN_004e8379(void)
 * body: 004e8379-004e83d2
 */

undefined1 * FUN_004e8379(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_CAST_S_>I_005b7740;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(_uStack00000018,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_CAST_S_>I_005b7740;
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
    FUN_004029e0(_uStack00000018,uVar3);
  }
  return _uStack00000018;
}


