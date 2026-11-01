
/* ==== FUN_00406a10 @ 00406a10 ==== 
 * signature: undefined4 __thiscall FUN_00406a10(void * this, void * param_1)
 * body: 00406a10-00406ccb
 */

uint __thiscall FUN_00406a10(void *this,void *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  uint local_1dc;
  uint local_1d8;
  CHAR local_1d0 [8];
  CHAR local_1c8 [8];
  byte local_1c0 [64];
  byte local_180 [64];
  char local_140 [64];
  byte local_100 [128];
  byte local_80 [128];
  
  iVar3 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Cop_Settings_00590024);
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004c3b60(pcVar4);
  uVar5 = FUN_004c3cd0(s_COP_TYPES_0059003c,s_COUNT_00590034);
  local_1d8 = 0;
  local_1dc = uVar5;
  if (0 < (int)uVar5) {
    do {
      FUN_005587a3(local_1c8,&DAT_00590048);
      FUN_004c3d10(s_COP_TYPES_0059004c,local_1c8,(LPSTR)local_100,0x7f);
      iVar3 = FUN_004c3d60(local_100,(uint *)0x0);
      FUN_004a6980((uint)(iVar3 == 2),(byte *)s___s___d_Illegal_number_of_parame_0059007c);
      FUN_004c3f10(0,(char *)local_180,0x3f);
      uVar5 = 0xffffffff;
      pbVar9 = local_180;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar1 != 0);
      uVar2 = *(uint *)((int)param_1 + 8);
      uVar8 = ~uVar5 - 1;
      uVar5 = uVar2;
      if (uVar8 <= uVar2) {
        uVar5 = uVar8;
      }
      bVar11 = false;
      iVar3 = 0;
      bVar12 = true;
      pbVar9 = *(byte **)((int)param_1 + 4);
      pbVar10 = local_180;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar11 = *pbVar9 < *pbVar10;
        bVar12 = *pbVar9 == *pbVar10;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar12);
      if (!bVar12) {
        iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      }
      if (((iVar3 == 0) && (uVar8 <= uVar2)) && (uVar2 == uVar8)) {
        iVar3 = FUN_004c3ec0(1);
        FUN_004069e0(this,iVar3);
        iVar3 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_005900b4);
        pcVar4 = *(char **)(iVar3 + 4);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "";
        }
        FUN_004c3b60(pcVar4);
        local_1dc = FUN_004c3cd0(PTR_s_TRAFFIC_0058fd64,s_COUNT_005900c8);
        iVar3 = 0;
        if (0 < (int)local_1dc) {
          do {
            FUN_005587a3(local_1d0,&DAT_005900d0);
            FUN_004c3d10(PTR_s_TRAFFIC_0058fd64,local_1d0,(LPSTR)local_80,0x7f);
            iVar6 = FUN_004c3d60(local_80,(uint *)0x0);
            FUN_004a6980((uint)(iVar6 == 9),(byte *)s___s___d_Illegal_number_of_parame_005900f8);
            FUN_004c3f10(0,(char *)local_1c0,0x3f);
            uVar5 = 0xffffffff;
            pbVar9 = local_1c0;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              bVar1 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar1 != 0);
            uVar2 = *(uint *)((int)param_1 + 8);
            uVar8 = ~uVar5 - 1;
            uVar5 = uVar2;
            if (uVar8 <= uVar2) {
              uVar5 = uVar8;
            }
            bVar11 = false;
            iVar6 = 0;
            bVar12 = true;
            pbVar9 = *(byte **)((int)param_1 + 4);
            pbVar10 = local_1c0;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              bVar11 = *pbVar9 < *pbVar10;
              bVar12 = *pbVar9 == *pbVar10;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
            } while (bVar12);
            if (!bVar12) {
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            }
            if (((iVar6 == 0) && (uVar8 <= uVar2)) && (uVar2 == uVar8)) {
              FUN_004c3f10(1,local_140,0x3f);
              iVar3 = FUN_004b75a0(&DAT_00712130,local_140);
              FUN_004069d0(this,*(undefined4 *)
                                 (**(int **)(iVar3 * 9 + 4 + DAT_0073b168) * 0x10 + DAT_0073b120));
              uVar7 = FUN_004068a0(this,param_1);
              return CONCAT31((int3)((uint)uVar7 >> 8),1);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)local_1dc);
        }
      }
      uVar5 = local_1d8 + 1;
      local_1d8 = uVar5;
    } while ((int)uVar5 < (int)local_1dc);
  }
  return uVar5 & 0xffffff00;
}


