
/* ==== FUN_004dbce9 @ 004dbce9 ==== 
 * signature: undefined1 * __stdcall FUN_004dbce9(void)
 * body: 004dbce9-004dbd23
 */

undefined1 * FUN_004dbce9(void)

{
  char cVar1;
  char in_AL;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 uStack00000018;
  
  *_uStack00000018 = uStack00000018;
  FUN_004028f0(_uStack00000018,in_AL);
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_005b73bc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(_uStack00000018,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    puVar5 = (undefined4 *)&DAT_005b73bc;
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
    *(uint *)(_uStack00000018 + 8) = uVar4;
    *(undefined1 *)(*(int *)(_uStack00000018 + 4) + uVar4) = 0;
  }
  return _uStack00000018;
}


