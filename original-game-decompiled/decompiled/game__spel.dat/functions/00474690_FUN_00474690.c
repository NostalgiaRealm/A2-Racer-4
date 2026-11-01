
/* ==== FUN_00474690 @ 00474690 ==== 
 * signature: undefined __cdecl FUN_00474690(undefined4 * param_1, int * param_2, void * param_3)
 * body: 00474690-00474933
 */

void __cdecl FUN_00474690(undefined4 *param_1,int *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 auStack_11c [16];
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80 [6];
  undefined4 local_68;
  undefined4 local_64 [12];
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_24 [6];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b4b0;
  local_c = ExceptionList;
  iVar10 = *param_2;
  local_68 = 0;
  local_8c = 0.0;
  local_88 = 0.0;
  local_84 = 0.0;
  local_cc = 0x4746ed;
  ExceptionList = &local_c;
  pvVar8 = FUN_00479a80(param_3,&local_a4,0);
  iVar4 = *(int *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474707;
  pvVar8 = FUN_00479a80(param_3,&local_a4,1);
  dVar1 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474725;
  pvVar8 = FUN_00479a80(param_3,&local_a4,2);
  dVar2 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474743;
  pvVar8 = FUN_00479a80(param_3,&local_a4,3);
  dVar3 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_a4);
  local_cc = 0x474761;
  pvVar8 = FUN_00479a80(param_3,local_80,4);
  local_a4 = (float)*(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(local_80);
  local_cc = 0x47477f;
  pvVar8 = FUN_00479a80(param_3,local_80,5);
  local_a0 = (float)*(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(local_80);
  local_cc = 0x47479d;
  pvVar8 = FUN_00479a80(param_3,local_80,6);
  local_9c = (float)*(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(local_80);
  iVar11 = DAT_0073b0d0 + *(int *)(iVar10 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  puVar12 = (undefined4 *)(iVar11 + 0x10);
  puVar13 = local_64;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  if (iVar4 == 1) {
    local_84 = (float)dVar3 + *(float *)(iVar11 + 0x58);
    local_88 = (float)dVar2 + *(float *)(iVar11 + 0x54);
    local_8c = (float)dVar1 + *(float *)(iVar11 + 0x50);
    local_a0 = -local_a0;
  }
  else {
    local_34 = local_34 + (float)dVar1;
    local_30 = local_30 + (float)dVar2;
    local_2c = local_2c + (float)dVar3;
  }
  iVar10 = DAT_0073b0d0 + *(int *)(iVar10 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
  uVar5 = *(undefined4 *)(iVar10 + 0x74);
  uVar6 = *(undefined4 *)(iVar10 + 0x78);
  local_cc = 0x47489b;
  pvVar8 = FUN_00479a80(param_3,local_24,0);
  uVar7 = *(undefined4 *)((int)pvVar8 + 0x10);
  local_4 = 0;
  local_dc = local_a4;
  local_d8 = local_a0;
  local_d4 = local_9c;
  puVar12 = local_64;
  puVar13 = auStack_11c;
  local_d0 = uVar5;
  local_cc = uVar6;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  FUN_0045d170(uVar7);
  local_4 = 0xffffffff;
  FUN_004cf650(local_24);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  ExceptionList = local_c;
  return;
}


