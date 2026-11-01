
/* ==== FUN_004e840a @ 004e840a ==== 
 * signature: undefined1 * __stdcall FUN_004e840a(void)
 * body: 004e840a-004e8440
 */

undefined1 * FUN_004e840a(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,'\0');
  uVar2 = 0xffffffff;
  pcVar3 = s_ROUND_005b772c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(_uStack00000018,(undefined4 *)s_ROUND_005b772c,~uVar2 - 1);
  return _uStack00000018;
}


