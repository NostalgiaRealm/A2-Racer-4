
/* ==== FUN_004308d0 @ 004308d0 ==== 
 * signature: undefined __thiscall FUN_004308d0(void * this, float * param_1)
 * body: 004308d0-00430e03
 */

void __thiscall FUN_004308d0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [16];
  
  pfVar4 = (float *)FUN_004b42a0(&local_98,(float *)((int)this + 0x1c),
                                 DAT_0073b0d0 +
                                 *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  iVar5 = *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50);
  local_64 = *pfVar4 + *(float *)(iVar5 + DAT_0073b0d0 + 0x50 + iVar5 * 0xa8);
  iVar5 = iVar5 + DAT_0073b0d0 + 0x50 + iVar5 * 0xa8;
  local_60 = pfVar4[1] + *(float *)(iVar5 + 4);
  local_5c = pfVar4[2] + *(float *)(iVar5 + 8);
  pfVar4 = (float *)FUN_004b42a0(&local_98,(float *)((int)this + 0x10),
                                 DAT_0073b0d0 +
                                 *(int *)(*(int *)((int)this + 4) * 0xf0 + 0x24 + DAT_00715e50) *
                                 0xa9 + 0x10);
  local_7c = *pfVar4;
  iVar5 = *(int *)(*(int *)((int)this + 4) * 0xf0 + 0x24 + DAT_00715e50);
  iVar6 = iVar5 + DAT_0073b0d0;
  local_70 = local_64 - (local_7c + *(float *)(iVar6 + 0x50 + iVar5 * 0xa8));
  local_6c = local_60 - (pfVar4[1] + *(float *)(iVar6 + 0x54 + iVar5 * 0xa8));
  local_78 = 0;
  local_68 = local_5c - (pfVar4[2] + *(float *)(iVar6 + iVar5 * 0xa8 + 0x58));
  local_5c = *(float *)((int)this + 0x1c) * 0.1;
  local_8c = *(float *)(*(int *)this * 0xf0 + 0xcc + DAT_00715e50);
  iVar5 = *(int *)this * 0xf0 + DAT_00715e50;
  local_74 = local_8c * local_5c;
  local_98 = local_8c * *(float *)((int)this + 0x24) * -0.1 + *(float *)(iVar5 + 0xbc);
  local_94 = *(float *)(iVar5 + 0xc0) + 0.0;
  local_90 = local_74 + *(float *)(iVar5 + 0xc4);
  local_4c = local_98;
  local_48 = local_94;
  local_44 = local_90;
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_4c,
                                 DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x10);
  local_4c = *pfVar4;
  local_48 = pfVar4[1];
  local_78 = 0;
  local_44 = pfVar4[2];
  local_5c = *(float *)((int)this + 0x10) * 0.1;
  iVar5 = *(int *)((int)this + 4) * 0xf0 + DAT_00715e50;
  local_8c = *(float *)(iVar5 + 0xcc);
  local_74 = local_8c * local_5c;
  local_98 = local_8c * *(float *)((int)this + 0x18) * -0.1 + *(float *)(iVar5 + 0xbc);
  local_94 = *(float *)(iVar5 + 0xc0) + 0.0;
  local_90 = local_74 + *(float *)(iVar5 + 0xc4);
  local_58 = local_98;
  local_54 = local_94;
  local_50 = local_90;
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_58,
                                 DAT_0073b0d0 + *(int *)(iVar5 + 0x24) * 0xa9 + 0x10);
  local_58 = *pfVar4;
  local_54 = pfVar4[1];
  local_98 = local_4c - local_58;
  local_50 = pfVar4[2];
  local_94 = local_48 - local_54;
  local_90 = local_44 - local_50;
  local_88 = local_98;
  local_84 = local_94;
  local_80 = local_90;
  iVar5 = FUN_004b4310(local_40,(undefined4 *)
                                (DAT_0073b0d0 +
                                 *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10))
  ;
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_88,iVar5);
  local_88 = *pfVar4;
  local_84 = pfVar4[1];
  local_80 = pfVar4[2];
  iVar5 = FUN_004b4310(local_40,(undefined4 *)
                                (DAT_0073b0d0 +
                                 *(int *)(*(int *)this * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10))
  ;
  pfVar4 = (float *)FUN_004b42a0(&local_98,&local_70,iVar5);
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = pfVar4[1];
  fVar3 = *(float *)((int)this + 8);
  local_88 = -local_88 * fVar3 - *pfVar4 * fVar1;
  local_80 = -local_80 * fVar3 - fVar1 * pfVar4[2];
  if (local_88 <= 40000.0) {
    if (local_88 < -40000.0) {
      local_88 = -40000.0;
    }
  }
  else {
    local_88 = 40000.0;
  }
  if (local_80 <= 80000.0) {
    if (local_80 < -80000.0) {
      local_80 = -80000.0;
    }
  }
  else {
    local_80 = 80000.0;
  }
  *param_1 = local_88;
  param_1[1] = -local_84 * fVar3 - fVar2 * fVar1;
  param_1[2] = local_80;
  return;
}


