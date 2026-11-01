
/* ==== FUN_0051df40 @ 0051df40 ==== 
 * signature: undefined __cdecl FUN_0051df40(undefined4 param_1, int param_2, int param_3)
 * body: 0051df40-0051e02a
 */

void __cdecl FUN_0051df40(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  size_t _Count;
  size_t _Count_00;
  char *pcVar4;
  char local_c8 [200];
  
  FUN_005587a3(local_c8,&DAT_005be400);
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar4 = local_c8;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_005587a3(local_c8 + (~uVar2 - 1),(byte *)&PTR_DAT_005bc6dc);
  }
  if (param_3 != 0) {
    uVar2 = 0xffffffff;
    pcVar4 = local_c8;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_005587a3(local_c8 + (~uVar2 - 1),(byte *)s__2_2g_005be3f8);
  }
  uVar2 = 0xffffffff;
  pcVar4 = local_c8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 1;
  DAT_0074c458 = DAT_0074c458 + iVar3;
  _Count = 0x1ff - iVar3;
  if ((int)_Count < 0) {
    _Count = 0;
  }
  _Count_00 = _Count;
  if ((0x4f < DAT_0074c458) && (0 < (int)_Count)) {
    _Count_00 = _Count - 1;
    DAT_0074c458 = iVar3;
    _strncat(&DAT_0074c258,&DAT_005ae60c,_Count);
  }
  _strncat(&DAT_0074c258,local_c8,_Count_00);
  return;
}


