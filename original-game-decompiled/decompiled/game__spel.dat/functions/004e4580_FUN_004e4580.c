
/* ==== FUN_004e4580 @ 004e4580 ==== 
 * signature: undefined1 * __cdecl FUN_004e4580(undefined1 * param_1, int param_2)
 * body: 004e4580-004e4625
 */

undefined1 * __cdecl FUN_004e4580(undefined1 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = param_1._0_1_;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar3 = 0xffffffff;
    pcVar6 = (char *)&DAT_005b751c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(param_1,uVar3,'\x01');
    if ((char)uVar2 == '\0') {
      return param_1;
    }
    puVar5 = &DAT_005b751c;
  }
  else {
    *param_1 = param_1._0_1_;
    uVar3 = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar6 = (char *)&DAT_005b7520;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(param_1,uVar3,'\x01');
    if ((char)uVar2 == '\0') {
      return param_1;
    }
    puVar5 = &DAT_005b7520;
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
  return param_1;
}


