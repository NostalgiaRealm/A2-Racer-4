
/* ==== FUN_004e4908 @ 004e4908 ==== 
 * signature: undefined1 * __stdcall FUN_004e4908(void)
 * body: 004e4908-004e4961
 */

undefined1 * FUN_004e4908(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,'\0');
  uVar3 = 0xffffffff;
  pcVar6 = (char *)&DAT_005b7564;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(_uStack00000018,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar5 = &DAT_005b7564;
    puVar7 = *(undefined4 **)(_uStack00000018 + 4);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(_uStack00000018,uVar3);
  }
  return _uStack00000018;
}


