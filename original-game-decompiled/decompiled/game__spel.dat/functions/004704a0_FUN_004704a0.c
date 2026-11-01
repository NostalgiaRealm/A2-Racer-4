
/* ==== FUN_004704a0 @ 004704a0 ==== 
 * signature: undefined4 * __fastcall FUN_004704a0(undefined4 * param_1)
 * body: 004704a0-004705fd
 */

undefined4 * __fastcall FUN_004704a0(undefined4 *param_1)

{
  undefined4 *this;
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 local_15;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b141;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = &PTR_FUN_00576984;
  *(undefined1 *)(param_1 + 2) = local_15;
  pvVar3 = operator_new(0x18);
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  param_1[3] = pvVar3;
  param_1[4] = 0;
  param_1[1] = &PTR_FUN_00576974;
  this = param_1 + 5;
  *(undefined1 *)this = local_15;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004730d0(param_1 + 0xc);
  uVar5 = 0xffffffff;
  *param_1 = &PTR_FUN_005769e8;
  pcVar9 = (char *)&DAT_005a8a68;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar4 = FUN_00402a00(this,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    puVar7 = &DAT_005a8a68;
    puVar10 = (undefined4 *)param_1[6];
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    param_1[7] = uVar5;
    *(undefined1 *)(param_1[6] + uVar5) = 0;
  }
  pcVar9 = (char *)param_1[6];
  if (((pcVar9 != (char *)0x0) && (pcVar9[-1] != '\0')) && (pcVar9[-1] != -1)) {
    FUN_004028f0(this,'\x01');
    uVar5 = 0xffffffff;
    pcVar11 = pcVar9;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(this,(undefined4 *)pcVar9,~uVar5 - 1);
  }
  iVar2 = param_1[7];
  iVar8 = -1;
  if (iVar2 != -1) {
    iVar8 = iVar2;
  }
  if (iVar8 != 0) {
    FUN_005580e0((undefined4 *)param_1[6],(undefined4 *)((int)param_1[6] + iVar8),iVar2 - iVar8);
    uVar5 = param_1[7] - iVar8;
    uVar4 = FUN_00402a00(this,uVar5,'\0');
    if ((char)uVar4 != '\0') {
      param_1[7] = uVar5;
      *(undefined1 *)(param_1[6] + uVar5) = 0;
    }
  }
  param_1[9] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  ExceptionList = local_c;
  return param_1;
}


