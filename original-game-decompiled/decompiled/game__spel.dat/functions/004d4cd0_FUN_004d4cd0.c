
/* ==== FUN_004d4cd0 @ 004d4cd0 ==== 
 * signature: int * __stdcall FUN_004d4cd0(int * param_1, char * param_2)
 * body: 004d4cd0-004d4e89
 */

int * FUN_004d4cd0(int *param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int local_18;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056ffb8;
  pvStack_10 = ExceptionList;
  uVar8 = 0xffffffff;
  pcVar10 = param_2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar5 != '\0');
  bVar3 = false;
  uVar9 = ~uVar8 - 1;
  uVar8 = *(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1);
  if (((int)uVar8 < 1) || (uVar8 <= uVar9)) {
    local_18 = 0;
  }
  else {
    local_18 = uVar8 - uVar9;
  }
  ExceptionList = &pvStack_10;
  bVar4 = FUN_004d4c50(param_1);
  local_8 = 0;
  if (!bVar4) {
    FUN_0054c6db();
    local_8 = 0xffffffff;
    cVar5 = FUN_0054eb4d();
    if ((cVar5 == '\0') &&
       (iVar7 = *(int *)(*param_1 + 4), (*(byte *)(iVar7 + 0xc + (int)param_1) & 2) != 0)) {
      bVar3 = false;
      if (((*(byte *)((int)param_1 + iVar7 + 4) & 6) == 0) &&
         (iVar7 = (**(code **)(**(int **)((int)param_1 + iVar7 + 0x28) + 0x2c))(), iVar7 == -1)) {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_0054c6db();
      }
    }
    ExceptionList = pvStack_10;
    return param_1;
  }
  local_8 = 1;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 0x1c0) != 0x40) {
    for (; local_18 != 0; local_18 = local_18 + -1) {
      bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
      piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
      uVar8 = *(uint *)piVar6[8];
      if (uVar8 == 0) {
LAB_004d4dac:
        uVar8 = (**(code **)(*piVar6 + 4))(bVar1);
      }
      else {
        iVar7 = *(int *)piVar6[0xc];
        if (iVar7 + uVar8 <= uVar8) goto LAB_004d4dac;
        *(int *)piVar6[0xc] = iVar7 + -1;
        pbVar2 = *(byte **)piVar6[8];
        *(byte **)piVar6[8] = pbVar2 + 1;
        *pbVar2 = bVar1;
        uVar8 = (uint)bVar1;
      }
      if (uVar8 == 0xffffffff) {
        bVar3 = true;
        break;
      }
    }
    if (bVar3) goto LAB_004d4e74;
  }
  uVar8 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) + 0x1c))
                    (param_2,uVar9);
  if (uVar8 != uVar9) {
    *(undefined4 *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) = 0;
    piVar6 = (int *)FUN_004d4eb3();
    return piVar6;
  }
  for (; local_18 != 0; local_18 = local_18 + -1) {
    bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    piVar6 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28);
    uVar8 = *(uint *)piVar6[8];
    if (uVar8 == 0) {
LAB_004d4e59:
      uVar8 = (**(code **)(*piVar6 + 4))(bVar1);
    }
    else {
      iVar7 = *(int *)piVar6[0xc];
      if (iVar7 + uVar8 <= uVar8) goto LAB_004d4e59;
      *(int *)piVar6[0xc] = iVar7 + -1;
      pbVar2 = *(byte **)piVar6[8];
      *(byte **)piVar6[8] = pbVar2 + 1;
      *pbVar2 = bVar1;
      uVar8 = (uint)bVar1;
    }
    if (uVar8 == 0xffffffff) break;
  }
LAB_004d4e74:
  *(undefined4 *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) = 0;
  piVar6 = (int *)FUN_004d4eb3();
  return piVar6;
}


