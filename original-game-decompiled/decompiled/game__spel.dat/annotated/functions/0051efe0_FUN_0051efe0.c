
/* ==== FUN_0051efe0 @ 0051efe0 ==== 
 * signature: undefined __fastcall FUN_0051efe0(int param_1)
 * body: 0051efe0-0051f31b
 */

void __fastcall FUN_0051efe0(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int local_78;
  int local_74;
  int local_6c;
  byte local_68 [8];
  int local_60 [3];
  byte local_54 [12];
  int local_48 [3];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00574028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005018c0(local_1c,0x400,0x10,0xffffffff);
  local_4 = 0;
  local_78 = 0;
  FUN_005018c0(local_2c,0x400,0xc,0);
  local_4._0_1_ = 1;
  FUN_005018c0(local_3c,0x400,8,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar4 = (uint)*(ushort *)(param_1 + 2);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    piVar7 = *(int **)(*(int *)(param_1 + 4) + uVar4 * 4);
    local_74 = (int)(short)piVar7[3];
    piVar10 = piVar7;
    if (-1 < local_74 + -1) {
      do {
        piVar5 = piVar10 + 4;
        iVar8 = *piVar7;
        local_48[0] = (piVar10[5] & 0xffffU) * 0x10 + iVar8 + (int)piVar7;
        local_48[1] = (piVar10[6] & 0xffffU) * 0x10 + iVar8 + (int)piVar7;
        local_48[2] = (piVar10[7] & 0xffffU) * 0x10 + iVar8 + (int)piVar7;
        iVar8 = 0;
        do {
          pbVar1 = *(byte **)((int)local_48 + iVar8);
          iVar3 = FUN_00501940(local_1c,pbVar1);
          if (iVar3 < 0) {
            FUN_005019c0(local_1c,pbVar1,local_78);
            iVar3 = local_78;
            local_78 = local_78 + 1;
          }
          *(int *)((int)local_60 + iVar8) = iVar3;
          iVar8 = iVar8 + 4;
        } while (iVar8 < 0xc);
        FUN_0051f320(local_54,local_60[0],local_60[1],local_60[2]);
        iVar8 = FUN_00501940(local_2c,local_54);
        if (iVar8 == 0) {
          FUN_005019c0(local_2c,local_54,piVar5);
        }
        iVar8 = 0;
        piVar10 = local_60;
        do {
          iVar8 = iVar8 + 1;
          FUN_0051f340(local_68,*piVar10,local_60[iVar8 % 3]);
          iVar3 = FUN_00501940(local_3c,local_68);
          if (iVar3 == 0) {
            FUN_005019c0(local_3c,local_68,piVar5);
          }
          piVar10 = piVar10 + 1;
        } while (iVar8 < 3);
        local_74 = local_74 + -1;
        piVar10 = piVar5;
      } while (local_74 != 0);
    }
  }
  puVar2 = *(uint **)(param_1 + 8);
  local_6c = (int)(short)puVar2[3];
  puVar9 = puVar2;
  if (-1 < local_6c + -1) {
    do {
      puVar6 = puVar9 + 4;
      uVar4 = *puVar2;
      local_48[0] = (puVar9[5] & 0xffff) * 0x10 + uVar4 + (int)puVar2;
      local_48[1] = (puVar9[6] & 0xffff) * 0x10 + uVar4 + (int)puVar2;
      local_48[2] = (puVar9[7] & 0xffff) * 0x10 + uVar4 + (int)puVar2;
      iVar8 = 0;
      do {
        iVar3 = FUN_00501940(local_1c,*(byte **)((int)local_48 + iVar8));
        *(int *)((int)local_60 + iVar8) = iVar3;
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0xc);
      FUN_0051f320(local_54,local_60[0],local_60[1],local_60[2]);
      iVar8 = FUN_00501940(local_2c,local_54);
      if (iVar8 == 0) {
        *puVar6 = *puVar6 | 0x80000000;
      }
      iVar8 = 0;
      piVar7 = local_60;
      puVar9 = puVar6;
      do {
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + 1;
        FUN_0051f340(local_68,*piVar7,local_60[iVar8 % 3]);
        iVar3 = FUN_00501940(local_3c,local_68);
        if (iVar3 == 0) {
          *puVar9 = *puVar9 | 0x80000000;
        }
        piVar7 = piVar7 + 1;
      } while (iVar8 < 3);
      local_6c = local_6c + -1;
      puVar9 = puVar6;
    } while (local_6c != 0);
  }
  local_4._0_1_ = 1;
  FUN_005018f0((int)local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005018f0((int)local_2c);
  local_4 = 0xffffffff;
  FUN_005018f0((int)local_1c);
  ExceptionList = local_c;
  return;
}


