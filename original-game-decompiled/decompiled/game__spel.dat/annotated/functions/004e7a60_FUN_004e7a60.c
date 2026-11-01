
/* ==== FUN_004e7a60 @ 004e7a60 ==== 
 * signature: undefined1 * __cdecl FUN_004e7a60(undefined1 * param_1, int param_2)
 * body: 004e7a60-004e7d23
 */

undefined1 * __cdecl FUN_004e7a60(undefined1 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint *puVar11;
  undefined4 *puVar12;
  
  FUN_00559400();
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  uVar6 = 0xffffffff;
  do {
    pcVar10 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar3 = pcVar10 + -uVar6;
  pcVar10 = &stack0xffffffec;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  for (puVar4 = FUN_00559b90((uint *)&stack0xffffffec,'\\'); puVar4 != (uint *)0x0;
      puVar4 = FUN_00559b90((uint *)(uVar6 + (int)puVar4),'\\')) {
    uVar6 = 0xffffffff;
    pcVar3 = &DAT_005b76b8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar7 = 0xffffffff;
    puVar8 = puVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar2 = *puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while ((char)uVar2 != '\0');
    FUN_005580e0((uint *)(uVar6 + (int)puVar4),(undefined4 *)((int)puVar4 + 1),~uVar7 - 1);
    puVar8 = (uint *)&DAT_005b76b8;
    puVar11 = puVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar11 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar11 = (uint *)((int)puVar11 + 1);
    }
  }
  for (puVar4 = FUN_00559b90((uint *)&stack0xffffffec,'\"'); puVar4 != (uint *)0x0;
      puVar4 = FUN_00559b90((uint *)(uVar6 + (int)puVar4),'\"')) {
    uVar6 = 0xffffffff;
    pcVar3 = &DAT_005b76b4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar7 = 0xffffffff;
    puVar8 = puVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar2 = *puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while ((char)uVar2 != '\0');
    FUN_005580e0((uint *)(uVar6 + (int)puVar4),(undefined4 *)((int)puVar4 + 1),~uVar7 - 1);
    puVar8 = (uint *)&DAT_005b76b4;
    puVar11 = puVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar11 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar11 = (uint *)((int)puVar11 + 1);
    }
  }
  for (puVar4 = FUN_00559b90((uint *)&stack0xffffffec,'\n'); puVar4 != (uint *)0x0;
      puVar4 = FUN_00559b90((uint *)(uVar6 + (int)puVar4),'\n')) {
    uVar6 = 0xffffffff;
    pcVar3 = &DAT_005b76b0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar7 = 0xffffffff;
    puVar8 = puVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar2 = *puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while ((char)uVar2 != '\0');
    FUN_005580e0((uint *)(uVar6 + (int)puVar4),(undefined4 *)((int)puVar4 + 1),~uVar7 - 1);
    puVar8 = (uint *)&DAT_005b76b0;
    puVar11 = puVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar11 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar11 = (uint *)((int)puVar11 + 1);
    }
  }
  for (puVar4 = FUN_00559b90((uint *)&stack0xffffffec,'\t'); puVar4 != (uint *)0x0;
      puVar4 = FUN_00559b90((uint *)(uVar6 + (int)puVar4),'\t')) {
    uVar6 = 0xffffffff;
    pcVar3 = &DAT_005b76ac;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar7 = 0xffffffff;
    puVar8 = puVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar2 = *puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while ((char)uVar2 != '\0');
    FUN_005580e0((uint *)(uVar6 + (int)puVar4),(undefined4 *)((int)puVar4 + 1),~uVar7 - 1);
    puVar8 = (uint *)&DAT_005b76ac;
    puVar11 = puVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar11 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar11 = (uint *)((int)puVar11 + 1);
    }
  }
  for (puVar4 = FUN_00559b90((uint *)&stack0xffffffec,'\r'); puVar4 != (uint *)0x0;
      puVar4 = FUN_00559b90((uint *)(uVar6 + (int)puVar4),'\r')) {
    uVar6 = 0xffffffff;
    pcVar3 = &DAT_005b76a8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar7 = 0xffffffff;
    puVar8 = puVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar2 = *puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while ((char)uVar2 != '\0');
    FUN_005580e0((uint *)(uVar6 + (int)puVar4),(undefined4 *)((int)puVar4 + 1),~uVar7 - 1);
    puVar8 = (uint *)&DAT_005b76a8;
    puVar11 = puVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar11 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar11 = (uint *)((int)puVar11 + 1);
    }
  }
  param_2._3_1_ = (undefined1)((uint)&stack0xffffffec >> 0x18);
  *param_1 = param_2._3_1_;
  uVar6 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pcVar3 = &stack0xffffffec;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar5 = FUN_00402a00(param_1,uVar6,'\x01');
  if ((char)uVar5 != '\0') {
    puVar9 = (undefined4 *)&stack0xffffffec;
    puVar12 = *(undefined4 **)(param_1 + 4);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *(uint *)(param_1 + 8) = uVar6;
    *(undefined1 *)(*(int *)(param_1 + 4) + uVar6) = 0;
  }
  return param_1;
}


