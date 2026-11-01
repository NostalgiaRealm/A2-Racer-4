
/* ==== FUN_00521840 @ 00521840 ==== 
 * signature: int __thiscall FUN_00521840(void * this, int param_1)
 * body: 00521840-00521ba9
 */

int __thiscall FUN_00521840(void *this,int param_1)

{
  ushort uVar1;
  byte *pbVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int *local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00574101;
  local_c = ExceptionList;
  iVar8 = 0x10;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x2c) = param_1;
  uVar1 = *(ushort *)(param_1 + 2);
  *(uint *)((int)this + 0x1c) = (uint)uVar1;
  local_14 = 0x10;
  uVar4 = ((uint)uVar1 * 3) / 2;
  if (0x10 < uVar4) {
    do {
      iVar8 = iVar8 * 2;
      local_14 = iVar8;
    } while (iVar8 < (int)uVar4);
  }
  iVar8 = local_14;
  puVar5 = operator_new(0x10);
  local_4 = 0;
  local_10 = puVar5;
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    FUN_005010f0(puVar5,iVar8);
    *puVar5 = (uint)&PTR_FUN_00578b20;
  }
  local_4 = 0xffffffff;
  *(uint **)this = puVar5;
  local_1c = (int *)0x0;
  if (0 < *(int *)((int)this + 0x1c)) {
    do {
      local_18 = 3;
      iVar8 = *(int *)(*(int *)(param_1 + 4) + (int)local_1c * 4);
      *(int **)(iVar8 + 0xb8) = local_1c;
      piVar9 = (int *)(iVar8 + 0x20);
      do {
        pbVar2 = (byte *)*piVar9;
        pvVar3 = *(void **)this;
        uVar4 = FUN_0051e0a0(pbVar2);
        uVar4 = FUN_005013d0(pvVar3,pbVar2,uVar4);
        if (uVar4 == 0) {
          *(undefined4 *)(*piVar9 + 0x24) = *(undefined4 *)((int)this + 0x14);
          pvVar3 = *(void **)this;
          *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
          pbVar2 = (byte *)*piVar9;
          uVar4 = FUN_0051e0a0(pbVar2);
          FUN_00501220(pvVar3,(uint)pbVar2,uVar4);
          iVar8 = *piVar9;
          if (*(ushort *)((int)this + 4) <= *(ushort *)((int)this + 6)) {
            FUN_004f6060((ushort *)((int)this + 4));
          }
          *(int *)(*(int *)((int)this + 8) + (uint)*(ushort *)((int)this + 6) * 4) = iVar8;
          *(short *)((int)this + 6) = *(short *)((int)this + 6) + 1;
        }
        piVar9 = (int *)piVar9[2];
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_1c = (int *)((int)local_1c + 1);
    } while ((int)local_1c < *(int *)((int)this + 0x1c));
    local_18 = 0;
    iVar8 = local_14;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  local_10 = operator_new(0x10);
  local_4 = 1;
  if (local_10 == (uint *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_005018c0(local_10,iVar8 * 4,4,0xffffffff);
  }
  *(undefined4 **)((int)this + 0x20) = puVar6;
  local_4 = 0xffffffff;
  local_18 = 0;
  if (0 < *(int *)((int)this + 0x1c)) {
    do {
      iVar8 = local_18;
      iVar7 = *(int *)(*(int *)(param_1 + 4) + local_18 * 4);
      local_10 = operator_new(0x10);
      local_4 = 2;
      if (local_10 == (uint *)0x0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = FUN_0050fc60(local_10);
      }
      local_4 = 0xffffffff;
      uVar4 = *puVar5 ^ (*(uint *)(iVar7 + 0xb8) ^ *puVar5) & 0xfff;
      *puVar5 = uVar4;
      if (*(int *)(iVar7 + 0x14) == 0) {
        FUN_0055ab10((byte *)s_no_valid_pierce_index___Probably_005bebb4);
      }
      else {
        *puVar5 = (*(uint *)(*(int *)(iVar7 + 0x14) + 0xb8) & 0xfff) << 0xc | uVar4 & 0xff000fff;
      }
      iVar8 = iVar8 * 4;
      local_14 = 3;
      *puVar5 = *puVar5 & 0x80ffffff;
      local_1c = (int *)(iVar7 + 0x20);
      puVar10 = puVar5;
      do {
        puVar10 = puVar10 + 1;
        iVar8 = iVar8 + 1;
        *puVar10 = *puVar10 ^ (*(uint *)(*local_1c + 0x24) ^ *puVar10) & 0xffff;
        FUN_005019c0(*(void **)((int)this + 0x20),(byte *)&local_1c,iVar8);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
        local_1c = (int *)local_1c[2];
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      if (*(ushort *)((int)this + 0xc) <= *(ushort *)((int)this + 0xe)) {
        FUN_004f6060((ushort *)((int)this + 0xc));
      }
      *(uint **)(*(int *)((int)this + 0x10) + (uint)*(ushort *)((int)this + 0xe) * 4) = puVar5;
      *(short *)((int)this + 0xe) = *(short *)((int)this + 0xe) + 1;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)((int)this + 0x1c));
  }
  local_18 = 0;
  if (0 < *(int *)((int)this + 0x1c)) {
    local_1c = (int *)0xffffffff;
    do {
      local_14 = 3;
      puVar5 = *(uint **)(*(int *)((int)this + 0x10) + local_18 * 4);
      iVar8 = *(int *)(*(int *)(param_1 + 4) + local_18 * 4) + 0x20;
      piVar9 = local_1c;
      do {
        puVar5 = puVar5 + 1;
        local_10 = *(uint **)(iVar8 + 0x14);
        iVar7 = FUN_00501940(*(void **)((int)this + 0x20),(byte *)&local_10);
        *puVar5 = (iVar7 + (int)piVar9 & 0x7fffU) << 0x10 | *puVar5 & 0x8000ffff;
        iVar8 = *(int *)(iVar8 + 8);
        piVar9 = (int *)((int)piVar9 + -1);
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_18 < *(int *)((int)this + 0x1c));
  }
  ExceptionList = local_c;
  return (*(int *)((int)this + 0x14) + 1 + *(int *)((int)this + 0x1c)) * 0x10;
}


