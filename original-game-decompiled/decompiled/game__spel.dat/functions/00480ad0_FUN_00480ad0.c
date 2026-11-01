
/* ==== FUN_00480ad0 @ 00480ad0 ==== 
 * signature: undefined __stdcall FUN_00480ad0(void * param_1)
 * body: 00480ad0-00480c13
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480ad0(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 *local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c3b4;
  local_c = ExceptionList;
  local_1c = (float)CONCAT31(local_1c._1_3_,param_1._0_1_);
  uVar4 = 0xffffffff;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0.0;
  local_10 = 0;
  pcVar7 = (char *)&DAT_005aa058;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(&local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    puVar6 = &DAT_005aa058;
    puVar8 = local_18;
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
    *(undefined1 *)((int)local_18 + uVar4) = 0;
    local_14 = (float)uVar4;
  }
  pfVar10 = &local_28;
  pfVar9 = &local_1c;
  local_4 = 0;
  iVar3 = FUN_0047bc10((int)param_1);
  FUN_00480f70(iVar3,(int)pfVar9,(int)pfVar10);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  local_28 = _DAT_007126cc * local_28;
  local_24 = local_24 * _DAT_007126cc;
  local_20 = local_20 * _DAT_007126cc;
  local_1c = local_28;
  local_18 = (undefined4 *)local_24;
  local_14 = local_20;
  FUN_0047bc90(param_1,&local_28);
  ExceptionList = local_c;
  return;
}


