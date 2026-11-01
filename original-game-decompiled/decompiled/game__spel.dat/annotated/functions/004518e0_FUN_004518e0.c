
/* ==== FUN_004518e0 @ 004518e0 ==== 
 * signature: undefined __cdecl FUN_004518e0(int param_1)
 * body: 004518e0-00451d18
 */

void __cdecl FUN_004518e0(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60 [3];
  undefined4 local_54 [3];
  undefined4 local_48 [17];
  
  iVar4 = param_1 * 0xf0;
  iVar3 = *(int *)(iVar4 + 0x24 + DAT_00715e50);
  iVar6 = *(int *)(DAT_0073b0d0 + iVar3 + iVar3 * 0xa8);
  iVar3 = DAT_0073b0d0 + iVar3 + iVar3 * 0xa8;
  if ((iVar6 == 1) || (iVar6 != 2)) {
    iVar6 = *(int *)(iVar3 + 0x99);
  }
  else {
    iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) * 9 + 4 + DAT_0073b168) +
                             *(int *)(iVar3 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  local_c4 = 0x40000000;
  local_c0 = 2.0;
  local_bc = 2.0;
  *(undefined4 *)(iVar3 + 0x80) = 0x40000000;
  *(undefined4 *)(iVar3 + 0x84) = 0x40000000;
  *(undefined4 *)(iVar3 + 0x88) = 0x40000000;
  puVar5 = (undefined4 *)(DAT_0073b0d0 + *(int *)(iVar4 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar7 = local_48;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar8 = 0;
  iVar4 = *(int *)(iVar4 + 0x24 + DAT_00715e50);
  iVar3 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
  local_84 = *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
  local_80 = *(float *)(iVar3 + 4);
  local_7c = *(float *)(iVar3 + 8);
  iVar3 = DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  local_78 = *(float *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  local_74 = *(float *)(iVar3 + 4);
  local_70 = *(float *)(iVar3 + 8);
  iVar6 = iVar6 * 0xac;
  if (0 < *(int *)(iVar6 + 0x84 + DAT_0073b5c8)) {
    do {
      iVar3 = *(int *)(iVar6 + 0x80 + DAT_0073b5c8);
      iVar4 = iVar8 * 0x20;
      local_c8 = *(float *)(iVar3 + 8 + iVar4);
      local_cc = *(float *)(iVar3 + 4 + iVar4);
      local_d0 = *(float *)(iVar3 + iVar4);
      pfVar2 = (float *)FUN_004b42a0(local_60,&local_d0,(int)local_48);
      local_d0 = *pfVar2;
      local_cc = pfVar2[1];
      local_c8 = pfVar2[2];
      if (iVar8 == 0) {
        FUN_004c5930(0,0,0xf0,(byte *)(s__vertex_x__06f__y__06f__z__06f_005a28bf + 1));
      }
      pfVar2 = (float *)FUN_004b4070(local_54,(int)local_48);
      local_9c = *pfVar2;
      local_d0 = local_84 + local_d0;
      local_98 = pfVar2[1];
      local_94 = pfVar2[2];
      local_cc = local_80 + local_cc;
      local_c8 = local_7c + local_c8;
      if (iVar8 == 0) {
        FUN_004c5930(0,0,0x104,(byte *)s_vertex_x__06f__y__06f__z__06f_005a28e0);
      }
      local_b8 = local_d0 - local_78;
      local_c0 = local_cc - local_74;
      local_bc = local_c8 - local_70;
      local_ac = SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
      local_b8 = local_b8 / local_ac;
      local_b4 = local_c0 / local_ac;
      local_b0 = local_bc / local_ac;
      if (iVar8 == 0) {
        FUN_004c5930(0,0,0x118,(byte *)s_eye_x__06f__y__06f__z__06f_005a2900);
      }
      fVar1 = local_b8 * local_9c + local_98 * local_b4 + local_94 * local_b0;
      fVar1 = fVar1 + fVar1;
      local_6c = local_9c * fVar1;
      local_68 = local_98 * fVar1;
      local_a8 = local_6c - local_b8;
      local_a4 = local_68 - local_b4;
      local_a0 = fVar1 * local_94 - local_b0;
      local_90 = local_a8;
      local_8c = local_a4;
      local_88 = local_a0;
      if (iVar8 == 0) {
        FUN_004c5930(0,0,300,(byte *)s_reflect_x__06f__y__06f__z__06f_005a291c);
      }
      fVar1 = (local_a0 + 1.0) * (local_a0 + 1.0) + local_8c * local_8c + local_90 * local_90;
      if (fVar1 == 0.0) {
        fVar1 = 1.0;
      }
      else {
        fVar1 = SQRT(fVar1);
      }
      iVar8 = iVar8 + 1;
      *(float *)(*(int *)(iVar6 + 0x80 + DAT_0073b5c8) + 0x18 + iVar4) =
           local_90 / (fVar1 + fVar1) + 0.5;
      *(float *)(*(int *)(iVar6 + 0x80 + DAT_0073b5c8) + 0x1c + iVar4) =
           local_8c / (fVar1 + fVar1) + 0.5;
    } while (iVar8 < *(int *)(iVar6 + 0x84 + DAT_0073b5c8));
  }
  return;
}


