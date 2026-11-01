
/* ==== FUN_004dbc56 @ 004dbc56 ==== 
 * signature: undefined1 * __stdcall FUN_004dbc56(void)
 * body: 004dbc56-004dbc8c
 */

undefined1 * FUN_004dbc56(void)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  char *pcVar3;
  undefined1 uStack00000018;
  
  uVar2 = 0xffffffff;
  *(undefined4 *)(_uStack00000018 + 4) = in_EAX;
  *(undefined4 *)(_uStack00000018 + 8) = in_EAX;
  *(undefined4 *)(_uStack00000018 + 0xc) = in_EAX;
  *_uStack00000018 = uStack00000018;
  pcVar3 = s_String_005b73c8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(_uStack00000018,(undefined4 *)s_String_005b73c8,~uVar2 - 1);
  return _uStack00000018;
}


