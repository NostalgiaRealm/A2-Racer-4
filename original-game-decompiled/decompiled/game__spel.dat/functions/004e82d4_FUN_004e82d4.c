
/* ==== FUN_004e82d4 @ 004e82d4 ==== 
 * signature: undefined1 * __stdcall FUN_004e82d4(void)
 * body: 004e82d4-004e830a
 */

undefined1 * FUN_004e82d4(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,'\0');
  uVar2 = 0xffffffff;
  pcVar3 = s_CAST_D_>S_005b7764;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(_uStack00000018,(undefined4 *)s_CAST_D_>S_005b7764,~uVar2 - 1);
  return _uStack00000018;
}


