
/* ==== FUN_004e4ae3 @ 004e4ae3 ==== 
 * signature: undefined1 * __stdcall FUN_004e4ae3(void)
 * body: 004e4ae3-004e4b24
 */

undefined1 * FUN_004e4ae3(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_005b7544;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(_uStack00000018,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    puVar5 = (undefined4 *)&DAT_005b7544;
    puVar6 = *(undefined4 **)(_uStack00000018 + 4);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_004029e0(_uStack00000018,uVar4);
  }
  return _uStack00000018;
}


