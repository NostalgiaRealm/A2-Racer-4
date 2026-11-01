
/* ==== FUN_0047fd20 @ 0047fd20 ==== 
 * signature: undefined __stdcall FUN_0047fd20(void * param_1)
 * body: 0047fd20-0047feaa
 */

void FUN_0047fd20(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float *pfVar11;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c225;
  local_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  uVar4 = 0xffffffff;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar7 = (char *)&DAT_005aa044;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    puVar6 = &DAT_005aa044;
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
    local_14 = uVar4;
  }
  pfVar11 = &local_28;
  puVar10 = local_1c;
  local_4 = 0;
  iVar3 = FUN_0047bc10((int)param_1);
  uVar2 = FUN_00480f70(iVar3,(int)puVar10,(int)pfVar11);
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
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  if ((char)uVar2 != '\0') {
    fVar9 = (float10)fptan((float10)3.1415927 * (float10)0.5 * (float10)0.5);
    fVar9 = fVar9 * (float10)0.9900000095367432;
    local_28 = (float)(fVar9 * (float10)0.003125 * (float10)local_28 - (float10)1.0);
    local_24 = (float)(((float10)1.0 - fVar9 * (float10)0.004166667 * (float10)local_24) *
                      ((float10)1.3333334 / ((float10)DAT_005b3798 / (float10)DAT_005b379c)));
    local_20 = (float)((float10)local_20 * fVar9 * (float10)0.003125);
    FUN_0047bc50(param_1,&local_28);
  }
  ExceptionList = local_c;
  return;
}


