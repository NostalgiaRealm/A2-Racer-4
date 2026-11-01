
/* ==== FUN_00497dc0 @ 00497dc0 ==== 
 * signature: undefined __fastcall FUN_00497dc0(int param_1)
 * body: 00497dc0-00498024
 */

void __fastcall FUN_00497dc0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *this;
  byte *pbVar10;
  bool bVar11;
  undefined1 local_61;
  int local_60;
  undefined1 *local_58;
  int local_54;
  CHAR local_50 [8];
  CHAR local_48 [8];
  byte local_40 [32];
  CHAR local_20 [32];
  
  iVar4 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005adfc8);
  pcVar5 = *(char **)(iVar4 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  set_ini_filename(pcVar5);
  FUN_005587a3(local_50,&DAT_005adfd8);
  read_ini_string_setting(PTR_s_3D_Anims_005addec,local_50,local_20,0x1f);
  set_ini_filename(local_20);
  local_54 = read_ini_value_setting(PTR_s_PRIORITY_LIST_005adde4,PTR_s_COUNT_005adde8);
  local_60 = 0;
  if (0 < local_54) {
    do {
      FUN_005587a3(local_48,&DAT_005adfdc);
      read_ini_string_setting(PTR_s_PRIORITY_LIST_005adde4,local_48,(LPSTR)local_40,0x1f);
      pbVar6 = local_40;
      pbVar10 = PTR_s_CACHED_PIPELINE_1_005addd8;
      do {
        bVar1 = *pbVar6;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_00497eb3:
          iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00497eb8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_00497eb3;
        pbVar6 = pbVar6 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00497eb8:
      if (iVar4 != 0) {
        pbVar6 = local_40;
        pbVar10 = PTR_s_CACHED_PIPELINE_2_005adddc;
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00497eee:
            iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00497ef3;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00497eee;
          pbVar6 = pbVar6 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00497ef3:
        if (iVar4 != 0) {
          iVar4 = -1;
          pbVar6 = local_40;
          do {
            pbVar10 = pbVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pbVar10 = pbVar6 + 1;
            bVar1 = *pbVar6;
            pbVar6 = pbVar10;
          } while (bVar1 != 0);
          *(undefined4 *)(pbVar10 + -1) = DAT_005adfe0;
          pbVar10[3] = DAT_005adfe4;
        }
      }
      puVar7 = operator_new(0x10);
      this = (undefined1 *)0x0;
      if (puVar7 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar7 + 4) = 0;
        *(undefined4 *)(puVar7 + 8) = 0;
        *(undefined4 *)(puVar7 + 0xc) = 0;
        *puVar7 = local_61;
        this = puVar7;
      }
      uVar8 = 0xffffffff;
      pbVar6 = local_40;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      uVar9 = ~uVar8 - 1;
      local_58 = this;
      uVar8 = FUN_004095c0();
      if (uVar8 < uVar9) {
        FUN_0054b1b4();
      }
      iVar4 = *(int *)(this + 4);
      if (((iVar4 == 0) || (cVar2 = *(char *)(iVar4 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
        if (uVar9 != 0) {
          if ((0x1f < *(uint *)(this + 0xc)) || (*(uint *)(this + 0xc) < uVar9)) {
            FUN_004028f0(this,'\x01');
            goto LAB_00497f9f;
          }
          goto LAB_00497fa7;
        }
        FUN_004028f0(this,'\x01');
      }
      else if (uVar9 == 0) {
        *(char *)(iVar4 + -1) = cVar2 + -1;
        FUN_004028f0(this,'\0');
      }
      else {
LAB_00497f9f:
        FUN_00402b20(uVar9);
LAB_00497fa7:
        pbVar6 = local_40;
        pbVar10 = *(byte **)(this + 4);
        for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar10 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar10 = pbVar10 + 1;
        }
        FUN_004029e0(this,uVar9);
      }
      puVar3 = *(undefined4 **)(param_1 + 0x20);
      iVar4 = FUN_00449050(puVar3,puVar3[1]);
      puVar3[1] = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      FUN_004d2770((undefined4 *)(iVar4 + 8),&local_58);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      FUN_004c3fa0((byte *)s_Texture__s_added_to_the_priority_005adfe8);
      local_60 = local_60 + 1;
    } while (local_60 < local_54);
  }
  return;
}


