
/* ==== FUN_004e37c0 @ 004e37c0 ==== 
 * signature: undefined __thiscall FUN_004e37c0(void * this, void * param_1, void * param_2)
 * body: 004e37c0-004e3960
 */

void __thiscall FUN_004e37c0(void *this,void *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571848;
  pvStack_c = ExceptionList;
  if (*(int *)((int)this + 8) == -2) {
    uVar5 = 0xffffffff;
    pcVar8 = (char *)&DAT_005b7508;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    ExceptionList = &pvStack_c;
    uVar3 = FUN_00402a00(param_1,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      puVar7 = &DAT_005b7508;
      puVar9 = *(undefined4 **)((int)param_1 + 4);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)((int)param_1 + 8) = uVar5;
      *(undefined1 *)(*(int *)((int)param_1 + 4) + uVar5) = 0;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    puVar4 = FUN_004d7610(local_1c);
    local_4 = 0;
    FUN_004093c0(param_1,puVar4,0,0xffffffff);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_004e382f;
      }
      FUN_0054b339((char *)(local_18 + -1));
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_004e382f:
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_00712694;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  if (0xfffffffd < uVar5) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)((int)param_2 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      FUN_004028f0(param_2,'\x01');
      ExceptionList = pvStack_c;
      return;
    }
    if ((*(uint *)((int)param_2 + 0xc) < 0x20) && (uVar5 <= *(uint *)((int)param_2 + 0xc)))
    goto LAB_004e392a;
    FUN_004028f0(param_2,'\x01');
  }
  else if (uVar5 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(param_2,'\0');
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00402b20(uVar5);
LAB_004e392a:
  puVar7 = (undefined4 *)&DAT_00712694;
  puVar9 = *(undefined4 **)((int)param_2 + 4);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(uint *)((int)param_2 + 8) = uVar5;
  *(undefined1 *)(*(int *)((int)param_2 + 4) + uVar5) = 0;
  ExceptionList = pvStack_c;
  return;
}


