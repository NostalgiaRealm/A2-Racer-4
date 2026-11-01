
/* ==== FUN_00513900 @ 00513900 ==== 
 * signature: undefined4 * __thiscall FUN_00513900(void * this, int param_1)
 * body: 00513900-00513ccb
 */

undefined4 * __thiscall FUN_00513900(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  void *pvVar5;
  int *piVar6;
  ushort *puVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  int local_80;
  ushort local_78;
  ushort local_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  ushort local_70;
  ushort local_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50 [3];
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_20;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00573fb3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar2 = operator_new(0x10);
  local_c = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_005010f0(puVar2,8);
    *puVar2 = &PTR_FUN_00578b20;
  }
  *(undefined4 **)((int)this + 8) = puVar2;
  if (param_1 == 0) {
    ExceptionList = local_14;
    return this;
  }
  local_78 = 0;
  local_76 = 0;
  uStack_74 = 0;
  uStack_72 = 0;
  local_70 = 0;
  local_6e = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  local_c = 2;
  puVar9 = local_50;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + 0x10);
  local_80 = 3;
  do {
    local_64 = puVar2[-1];
    local_68 = puVar2[-2];
    local_60 = *puVar2;
    local_44 = *(undefined8 *)(puVar2 + -4);
    local_5c = puVar2[1];
    local_20 = 0;
    pvVar5 = *(void **)((int)this + 8);
    local_3c = local_68;
    uStack_38 = local_64;
    local_34 = local_60;
    local_30 = local_5c;
    uVar3 = FUN_0051e0a0((byte *)&local_44);
    uVar3 = FUN_005013d0(pvVar5,&local_44,uVar3);
    *puVar9 = uVar3;
    if (uVar3 == 0) {
      pbVar4 = operator_new(0x28);
      pbVar10 = (byte *)0x0;
      if (pbVar4 != (byte *)0x0) {
        pbVar4[0x24] = 0;
        pbVar4[0x25] = 0;
        pbVar4[0x26] = 0;
        pbVar4[0x27] = 0;
        pbVar10 = pbVar4;
      }
      local_58 = local_34;
      *(undefined8 *)pbVar10 = local_44;
      local_54 = local_30;
      *(undefined4 *)(pbVar10 + 0x10) = local_34;
      *(ulonglong *)(pbVar10 + 8) = CONCAT44(uStack_38,local_3c);
      *(undefined4 *)(pbVar10 + 0x14) = local_30;
      pvVar5 = *(void **)((int)this + 8);
      *puVar9 = (uint)pbVar10;
      uVar3 = FUN_0051e0a0(pbVar10);
      FUN_00501220(pvVar5,(uint)pbVar10,uVar3);
    }
    puVar2 = puVar2 + 8;
    puVar9 = puVar9 + 1;
    local_80 = local_80 + -1;
  } while (local_80 != 0);
  puVar2 = FUN_00521640(local_50[0],local_50[1],local_50[2]);
  puVar2[5] = puVar2[4];
  *(undefined4 **)(puVar2[4] + 0x14) = puVar2;
  pvVar5 = operator_new(0xc);
  *(undefined4 *)((int)pvVar5 + 4) = 0;
  puVar2[7] = pvVar5;
  *(void **)(puVar2[4] + 0x1c) = pvVar5;
  if (local_78 <= local_76) {
    FUN_004f6060(&local_78);
  }
  *(undefined4 **)(CONCAT22(uStack_72,uStack_74) + (uint)local_76 * 4) = puVar2;
  local_76 = local_76 + 1;
  uVar1 = puVar2[4];
  if (local_78 <= local_76) {
    FUN_004f6060(&local_78);
  }
  *(undefined4 *)(CONCAT22(uStack_72,uStack_74) + (uint)local_76 * 4) = uVar1;
  local_76 = local_76 + 1;
  if (local_70 <= local_6e) {
    FUN_004f6060(&local_70);
  }
  *(void **)(CONCAT22(uStack_6a,uStack_6c) + (uint)local_6e * 4) = pvVar5;
  local_6e = local_6e + 1;
  FUN_005217f0((undefined4 *)&local_44);
  local_c._0_1_ = 3;
  uVar3 = FUN_00521840(&local_44,(int)&local_78);
  piVar6 = (int *)FUN_004f5ad0(uVar3,0x10);
  piVar12 = piVar6;
  for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)piVar12 = 0;
    piVar12 = (int *)((int)piVar12 + 1);
  }
  FUN_00521bb0(&local_44,piVar6);
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_00521c80((int *)&local_44);
  puVar7 = (ushort *)CONCAT22(uStack_72,uStack_74);
  uVar3 = (uint)local_76;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    if (*(undefined4 **)(puVar7 + uVar3 * 2) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(puVar7 + uVar3 * 2))(1);
      puVar7 = (ushort *)CONCAT22(uStack_72,uStack_74);
    }
  }
  iVar11 = local_6e - 1;
  if (-1 < iVar11) {
    do {
      FUN_0054b339(*(LPVOID *)(CONCAT22(uStack_6a,uStack_6c) + iVar11 * 4));
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    puVar7 = (ushort *)CONCAT22(uStack_72,uStack_74);
  }
  puVar2 = (undefined4 *)CONCAT22(uStack_6a,uStack_6c);
  if (puVar2 != &local_68) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar2);
      puVar7 = (ushort *)CONCAT22(uStack_72,uStack_74);
      puVar2 = (undefined4 *)0x0;
      uStack_6c = 0;
      uStack_6a = 0;
    }
    local_70 = 0;
  }
  local_6e = 0;
  if (puVar7 != &local_70) {
    if (puVar7 != (ushort *)0x0) {
      FUN_00559d4e(puVar7);
      puVar2 = (undefined4 *)CONCAT22(uStack_6a,uStack_6c);
      puVar7 = (ushort *)0x0;
      uStack_74 = 0;
      uStack_72 = 0;
    }
    local_78 = 0;
  }
  local_76 = 0;
  *(int **)((int)this + 4) = piVar6;
  if (puVar2 != &local_68) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar2);
      puVar7 = (ushort *)CONCAT22(uStack_72,uStack_74);
      uStack_6c = 0;
      uStack_6a = 0;
    }
    local_70 = 0;
  }
  local_6e = 0;
  if ((puVar7 != &local_70) && (puVar7 != (ushort *)0x0)) {
    FUN_00559d4e(puVar7);
  }
  ExceptionList = local_14;
  return this;
}


