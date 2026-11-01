
/* ==== FUN_004806c0 @ 004806c0 ==== 
 * signature: undefined __stdcall FUN_004806c0(int * param_1)
 * body: 004806c0-004807cd
 */

void FUN_004806c0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c368;
  pvStack_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  uVar4 = 0xffffffff;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  pcVar6 = s_Scale_005aa050;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_Scale_005aa050;
    pcVar7 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  puVar9 = &local_28;
  puVar8 = local_1c;
  local_4 = 0;
  iVar3 = FUN_0047bc10((int)param_1);
  FUN_00480f70(iVar3,(int)puVar8,(int)puVar9);
  local_4 = 0xffffffff;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  (**(code **)(*param_1 + 0x24))(&local_28);
  ExceptionList = local_10;
  return;
}


