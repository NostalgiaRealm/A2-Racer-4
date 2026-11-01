
/* ==== FUN_0049f360 @ 0049f360 ==== 
 * signature: undefined4 * __fastcall FUN_0049f360(undefined4 * param_1)
 * body: 0049f360-0049f4be
 */

undefined4 * __fastcall FUN_0049f360(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_15;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056eb76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 6) = local_15;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar7 = param_1 + 10;
  *(undefined1 *)puVar7 = local_15;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar4 = 0xffffffff;
  *param_1 = &PTR_FUN_005764c0;
  pcVar9 = &DAT_00712694;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_4 = 1;
  uVar3 = FUN_00402a00(param_1 + 6,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar6 = (undefined4 *)&DAT_00712694;
    puVar8 = (undefined4 *)param_1[7];
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    param_1[8] = uVar4;
    *(undefined1 *)(uVar4 + param_1[7]) = 0;
  }
  uVar4 = 0xffffffff;
  pcVar9 = &DAT_00712694;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  iVar2 = param_1[0xb];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      FUN_004028f0(puVar7,'\x01');
      goto LAB_0049f497;
    }
    if ((0x1f < (uint)param_1[0xd]) || ((uint)param_1[0xd] < uVar4)) {
      FUN_004028f0(puVar7,'\x01');
      goto LAB_0049f467;
    }
  }
  else {
    if (uVar4 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(puVar7,'\0');
      goto LAB_0049f497;
    }
LAB_0049f467:
    FUN_00402b20(uVar4);
  }
  puVar7 = (undefined4 *)&DAT_00712694;
  puVar6 = (undefined4 *)param_1[0xb];
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  param_1[0xc] = uVar4;
  *(undefined1 *)(param_1[0xb] + uVar4) = 0;
LAB_0049f497:
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 100;
  ExceptionList = pvStack_c;
  return param_1;
}


