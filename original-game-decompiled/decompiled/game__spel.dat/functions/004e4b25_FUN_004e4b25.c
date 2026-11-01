
/* ==== FUN_004e4b25 @ 004e4b25 ==== 
 * signature: undefined1 * __stdcall FUN_004e4b25(void)
 * body: 004e4b25-004e4b5b
 */

undefined1 * FUN_004e4b25(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,'\0');
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_005b7540;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(_uStack00000018,(undefined4 *)&DAT_005b7540,~uVar2 - 1);
  return _uStack00000018;
}


