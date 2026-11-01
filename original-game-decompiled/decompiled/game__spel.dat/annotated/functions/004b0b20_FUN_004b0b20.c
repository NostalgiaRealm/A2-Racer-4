
/* ==== FUN_004b0b20 @ 004b0b20 ==== 
 * signature: undefined4 * __fastcall FUN_004b0b20(undefined4 * param_1)
 * body: 004b0b20-004b0e7e
 */

undefined4 * __fastcall FUN_004b0b20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f52c;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x3b;
  ExceptionList = &local_c;
  param_1[0x3e] = 0;
  _strncpy((char *)(param_1 + 0x40),s_Follow_positions_005b085c,0x19);
  _strncpy((char *)((int)param_1 + 0x119),s_D3DVECTOR_005b0850,0x19);
  if (param_1[0x3e] != 0) {
    FUN_004b1e00(puVar1);
  }
  *puVar1 = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x13e) = 0;
  _strncpy((char *)((int)param_1 + 0x146),s_Follow_orientations_005b083c,0x19);
  _strncpy((char *)((int)param_1 + 0x15f),s_D3DMATRIX_005b0830,0x19);
  FUN_004b2050((undefined4 *)((int)param_1 + 0x132));
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = DAT_00719ba8;
  param_1[3] = DAT_00719bac;
  param_1[4] = DAT_00719bb0;
  puVar6 = &DAT_0073b538;
  puVar7 = param_1 + 5;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 0;
  param_1[0x15] = DAT_00719ba8;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x16] = DAT_00719bac;
  param_1[0x17] = DAT_00719bb0;
  param_1[0x18] = DAT_00719ba8;
  param_1[0x19] = DAT_00719bac;
  uVar2 = DAT_00719bb0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = uVar2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x20] = 1;
  param_1[0x21] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x28] = DAT_00719ba8;
  param_1[0x29] = DAT_00719bac;
  uVar2 = DAT_00719bb0;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f800000;
  param_1[0x2f] = DAT_00719ba8;
  param_1[0x30] = DAT_00719bac;
  uVar2 = DAT_00719bb0;
  param_1[0x32] = 0xffffffff;
  param_1[0x31] = uVar2;
  param_1[0x33] = DAT_00719ba8;
  param_1[0x34] = DAT_00719bac;
  uVar2 = DAT_00719bb0;
  param_1[0x36] = 0xffffffff;
  param_1[0x35] = uVar2;
  param_1[0x37] = DAT_00719ba8;
  param_1[0x38] = DAT_00719bac;
  uVar2 = DAT_00719bb0;
  param_1[0x3a] = 0;
  param_1[0x39] = uVar2;
  if (param_1[0x3e] != 0) {
    FUN_004b1e00(puVar1);
  }
  pvVar3 = operator_new(0x3c);
  *puVar1 = pvVar3;
  param_1[0x3c] = 5;
  param_1[0x3d] = 0;
  pvVar3 = operator_new(5);
  param_1[0x3f] = pvVar3;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  param_1[0x3e] = 1;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    *(undefined1 *)(param_1[0x3f] + -1 + iVar4) = 0;
  } while (iVar4 < 5);
  puVar6 = (undefined4 *)((int)param_1 + 0x132);
  if (*(int *)((int)param_1 + 0x13e) != 0) {
    FUN_004b1e00(puVar6);
  }
  pvVar3 = operator_new(0x140);
  *puVar6 = pvVar3;
  *(undefined4 *)((int)param_1 + 0x136) = 5;
  *(undefined4 *)((int)param_1 + 0x13a) = 0;
  pvVar3 = operator_new(5);
  *(void **)((int)param_1 + 0x142) = pvVar3;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  *(undefined4 *)((int)param_1 + 0x13e) = 1;
  do {
    iVar5 = iVar5 + 1;
    *(undefined1 *)(*(int *)((int)param_1 + 0x142) + -1 + iVar5) = 0;
  } while (iVar5 < 5);
  iVar5 = 5;
  do {
    FUN_004b1e60((int)puVar1);
    FUN_004b1e60((int)puVar6);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ExceptionList = local_c;
  return param_1;
}


