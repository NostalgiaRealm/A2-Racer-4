
/* ==== FUN_0044f590 @ 0044f590 ==== 
 * signature: undefined __cdecl FUN_0044f590(undefined4 * param_1, undefined4 * param_2)
 * body: 0044f590-0044f95e
 */

void __cdecl FUN_0044f590(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  double local_30 [2];
  float local_20;
  float local_1c;
  float local_18;
  float local_14 [4];
  
  FUN_004c3fa0((byte *)s__>_Inverting_collision_structure_005a2348);
  puVar4 = param_2;
  puVar5 = param_1;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004c3fa0((byte *)s_Source__object1____d__object_2___005a236c);
  param_1[2] = param_2[3];
  param_1[3] = param_2[2];
  pfVar2 = (float *)FUN_004066c0(local_30,(float)param_2[4] * 10.0,(float)param_2[5] * 10.0,
                                 (float)param_2[6] * 10.0);
  fVar1 = *pfVar2;
  local_1c = pfVar2[1];
  local_18 = pfVar2[2];
  local_20 = fVar1;
  FUN_004c3fa0((byte *)s_Source__point_____f___f___f___005a2394);
  FUN_004c3fa0((byte *)s_Object1_y_angle____f__005a23b4);
  lVar6 = __ftol();
  pfVar2 = (float *)FUN_004b2a10((float *)local_30,fVar1,local_1c,local_18,(uint)lVar6);
  local_20 = *pfVar2;
  local_1c = pfVar2[1];
  local_18 = pfVar2[2];
  FUN_004c3fa0((byte *)s_Rotating__vector_____f___f___f___005a23cc);
  iVar3 = *(int *)(param_2[2] * 0xf0 + 0x24 + DAT_00715e50);
  local_20 = local_20 + *(float *)(DAT_0073b0d0 + iVar3 + 0x50 + iVar3 * 0xa8);
  iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
  local_1c = local_1c + *(float *)(iVar3 + 0x54);
  local_18 = local_18 + *(float *)(iVar3 + 0x58);
  FUN_004c3fa0((byte *)s_Translating__position_____f___f__005a23f0);
  iVar3 = *(int *)(param_2[3] * 0xf0 + 0x24 + DAT_00715e50);
  local_20 = local_20 - *(float *)(DAT_0073b0d0 + iVar3 + 0x50 + iVar3 * 0xa8);
  iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
  local_1c = local_1c - *(float *)(iVar3 + 0x54);
  local_18 = local_18 - *(float *)(iVar3 + 0x58);
  local_30[0] = (double)local_18;
  FUN_004c3fa0((byte *)s_Translating__position2_____f___f_005a2430);
  lVar6 = __ftol();
  pfVar2 = (float *)FUN_004b2a10(local_14,local_20,local_1c,local_18,(uint)lVar6);
  local_20 = *pfVar2;
  local_1c = pfVar2[1];
  local_18 = pfVar2[2];
  FUN_004c3fa0((byte *)s_Rotating__angle____f__vector_____005a2470);
  param_1[4] = local_20 * 0.1;
  param_1[5] = local_1c * 0.1;
  param_1[6] = local_18 * 0.1;
  return;
}


