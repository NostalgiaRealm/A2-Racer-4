
/* ==== FUN_00480500 @ 00480500 ==== 
 * signature: undefined __thiscall FUN_00480500(void * this, int * param_1)
 * body: 00480500-004806b1
 */

void __thiscall FUN_00480500(void *this,int *param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 *puVar12;
  float *pfVar13;
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
  pcStack_8 = FUN_0056c356;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004807d0(this,param_1);
  local_1c[0] = param_1._0_1_;
  uVar6 = 0xffffffff;
  local_28 = -1.0;
  local_20 = 0.0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  fVar11 = (float10)fptan((float10)3.1415927 * (float10)0.5 * (float10)0.5);
  fVar1 = (float)(fVar11 * (float10)0.9900000095367432);
  fVar3 = 1.3333334 / ((float)DAT_005b3798 / (float)DAT_005b379c);
  pcVar9 = (char *)&DAT_005aa044;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6 - 1;
  local_24 = fVar3;
  uVar4 = FUN_00402a00(local_1c,uVar6,'\x01');
  if ((char)uVar4 != '\0') {
    puVar8 = &DAT_005aa044;
    puVar10 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar6) = 0;
    local_14 = uVar6;
  }
  pfVar13 = &local_28;
  puVar12 = local_1c;
  local_4 = 0;
  iVar5 = FUN_0047bc10((int)param_1);
  uVar4 = FUN_00480f70(iVar5,(int)puVar12,(int)pfVar13);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
    }
  }
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  if ((char)uVar4 != '\0') {
    local_28 = (float)(fVar11 * (float10)0.9900000095367432 * (float10)0.003125) * local_28 - 1.0;
    local_24 = (1.0 - fVar1 * 0.004166667 * local_24) * fVar3;
    local_20 = local_20 * fVar1 * 0.003125;
    FUN_0047bc50(param_1,&local_28);
  }
  ExceptionList = local_c;
  return;
}


