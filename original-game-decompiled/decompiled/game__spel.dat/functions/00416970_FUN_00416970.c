
/* ==== FUN_00416970 @ 00416970 ==== 
 * signature: undefined1 * __fastcall FUN_00416970(undefined1 * param_1)
 * body: 00416970-00416ac1
 */

undefined1 * __fastcall FUN_00416970(undefined1 *param_1)

{
  undefined1 *this;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_11;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00569b21;
  pvStack_c = ExceptionList;
  this = param_1 + 4;
  ExceptionList = &pvStack_c;
  *this = local_11;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_4 = 0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_00576408;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = local_11;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)(param_1 + 0x1c) = puVar3;
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_005763f8;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = local_11;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *(undefined1 **)(param_1 + 0x24) = puVar3;
  uVar4 = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar7 = &DAT_005d2ac0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 8);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      FUN_004028f0(this,'\x01');
      goto LAB_00416aa1;
    }
    if ((0x1f < *(uint *)(param_1 + 0x10)) || (*(uint *)(param_1 + 0x10) < uVar4)) {
      FUN_004028f0(this,'\x01');
      goto LAB_00416a71;
    }
  }
  else {
    if (uVar4 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(this,'\0');
      goto LAB_00416aa1;
    }
LAB_00416a71:
    FUN_00402b20(uVar4);
  }
  puVar6 = (undefined4 *)&DAT_005d2ac0;
  puVar8 = *(undefined4 **)(param_1 + 8);
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
  *(uint *)(param_1 + 0xc) = uVar4;
  *(undefined1 *)(*(int *)(param_1 + 8) + uVar4) = 0;
LAB_00416aa1:
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


