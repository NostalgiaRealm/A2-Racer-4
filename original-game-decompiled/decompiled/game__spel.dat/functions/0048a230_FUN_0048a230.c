
/* ==== FUN_0048a230 @ 0048a230 ==== 
 * signature: undefined __fastcall FUN_0048a230(void * param_1)
 * body: 0048a230-0048a908
 */

void __fastcall FUN_0048a230(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 unaff_EDI;
  undefined4 *puVar13;
  char *pcVar14;
  byte *pbVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  float local_3c;
  float local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *puStack_2c;
  uint uStack_28;
  undefined1 auStack_20 [4];
  char *pcStack_1c;
  uint uStack_18;
  void *pvStack_14;
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056d7c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  local_3c = (float)FUN_00425300(iVar2);
  local_34 = 0x3f800000;
  local_30 = (undefined4 *)0x3f800000;
  local_38 = (float)(int)local_3c * 0.0009090909;
  *(float *)((int)param_1 + 0x248) = local_38;
  *(float *)((int)param_1 + 0x24c) = (float)DAT_006fba74 * 0.01;
  (**(code **)(**(int **)((int)param_1 + 0x244) + 0x24))(&local_38);
  puVar3 = (undefined4 *)FUN_0049ca10((void *)((int)param_1 + 0x128),&local_30);
  FUN_0047bc90(*(void **)((int)param_1 + 0x254),puVar3);
  puVar3 = (undefined4 *)FUN_0049ca10((void *)((int)param_1 + 0x1a0),&local_30);
  FUN_0047bc90(*(void **)((int)param_1 + 600),puVar3);
  if ((0 < *(int *)((int)param_1 + 0x360)) && (*(int *)((int)param_1 + 0x2c4) != 0)) {
    iVar2 = FUN_0049dd60(*(int *)((int)param_1 + 0x2c4));
    if (iVar2 == 100) {
      iVar2 = FUN_0049dd60(*(int *)((int)param_1 + 0x2d0));
      if (iVar2 < 100) {
        *(int *)((int)param_1 + 0x2c8) = *(int *)((int)param_1 + 0x260) + -1;
      }
    }
  }
  uVar18 = (undefined1)((uint)unaff_EBX >> 0x18);
  if ((*(int *)((int)param_1 + 0x2c4) == 0) ||
     (*(int *)((int)param_1 + 0x2c8) <= *(int *)((int)param_1 + 0x260))) {
    this = (void *)FUN_0048a010((int)param_1);
    if (this == (void *)0x0) {
      *(undefined4 *)((int)param_1 + 0x21c) = 0xffffffff;
      *(undefined4 *)((int)param_1 + 0x2c4) = 0;
      local_30 = (undefined4 *)CONCAT31(local_30._1_3_,uVar18);
      FUN_004028f0(&local_30,'\0');
      uVar6 = 0xffffffff;
      pcVar11 = (char *)&DAT_00712790;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar4 = FUN_00402a00(&local_30,uVar6,'\x01');
      if ((char)uVar4 != '\0') {
        puVar3 = &DAT_00712790;
        puVar10 = puStack_2c;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)puStack_2c + uVar6) = 0;
        uStack_28 = uVar6;
      }
      pcStack_8 = (code *)0x4;
      (**(code **)(**(int **)((int)param_1 + 0x220) + 0x48))(&local_30);
      pvStack_c = (void *)0xffffffff;
      if (local_30 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)local_30 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_30 + -1));
        }
        else {
          *(char *)((int)local_30 + -1) = cVar1 + -1;
        }
      }
      local_34 = CONCAT31(local_34._1_3_,(char)((uint)unaff_EBP >> 0x18));
      FUN_004028f0(&local_34,'\0');
      uVar6 = 0xffffffff;
      pcVar11 = (char *)&DAT_00712794;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      puVar3 = (undefined4 *)(~uVar6 - 1);
      uVar4 = FUN_00402a00(&local_34,(uint)puVar3,'\x01');
      if ((char)uVar4 != '\0') {
        puVar10 = &DAT_00712794;
        puVar13 = local_30;
        for (uVar6 = (uint)puVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar6 = (uint)puVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        *(undefined1 *)((int)local_30 + (int)puVar3) = 0;
        puStack_2c = puVar3;
      }
      pvStack_c = (void *)0x5;
      (**(code **)(**(int **)((int)param_1 + 0x224) + 0x48))(&local_34);
      pvStack_10 = (void *)0xffffffff;
      FUN_004028f0(&local_38,'\x01');
      local_38 = (float)CONCAT31(local_38._1_3_,(char)((uint)unaff_ESI >> 0x18));
      uVar6 = 0xffffffff;
      local_34 = 0;
      pcVar11 = &DAT_00712798;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      local_30 = (undefined4 *)0x0;
      puStack_2c = (undefined4 *)0x0;
      FUN_00402940(&local_38,(undefined4 *)&DAT_00712798,~uVar6 - 1);
      pvStack_10 = (void *)0x6;
      (**(code **)(**(int **)((int)param_1 + 0x228) + 0x48))(&local_38);
      pvStack_14 = (void *)0xffffffff;
      if (local_38 != 0.0) {
        cVar1 = *(char *)((int)local_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_38 + -1));
        }
        else {
          *(char *)((int)local_38 + -1) = cVar1 + -1;
        }
      }
      local_3c = (float)CONCAT31(local_3c._1_3_,(char)((uint)unaff_EDI >> 0x18));
      uVar6 = 0xffffffff;
      local_38 = 0.0;
      pcVar11 = &DAT_0071279c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      local_34 = 0;
      local_30 = (undefined4 *)0x0;
      FUN_00402940(&local_3c,(undefined4 *)&DAT_0071279c,~uVar6 - 1);
      pvStack_14 = (void *)0x7;
      (**(code **)(**(int **)((int)param_1 + 0x22c) + 0x48))(&local_3c);
      pcStack_8 = (code *)0xffffffff;
      if (puStack_2c != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_2c + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)puStack_2c + -1));
        }
        else {
          *(char *)((int)puStack_2c + -1) = cVar1 + -1;
        }
      }
      FUN_0048f090(param_1,0);
      if (*(int **)((int)param_1 + 0x250) != (int *)0x0) {
        (**(code **)(**(int **)((int)param_1 + 0x250) + 0x20))(0);
        *(undefined4 *)((int)param_1 + 0x250) = 0;
      }
    }
    else {
      if (*(int **)((int)param_1 + 0x250) != (int *)0x0) {
        (**(code **)(**(int **)((int)param_1 + 0x250) + 0x20))(0);
      }
      iVar2 = FUN_0049dd50((int)this);
      uVar4 = FUN_0049d230(iVar2);
      *(undefined4 *)((int)param_1 + 0x250) = uVar4;
      *(undefined1 *)((int)param_1 + 0x218) = 1;
      puVar5 = FUN_0049dda0(this,(undefined1 *)&local_30,0);
      pcStack_8 = (code *)0x0;
      (**(code **)(**(int **)((int)param_1 + 0x220) + 0x48))(puVar5);
      pvStack_c = (void *)0xffffffff;
      FUN_004028f0(&local_34,'\x01');
      puVar5 = FUN_0049dda0(this,(undefined1 *)&local_34,1);
      pvStack_c = (void *)0x1;
      (**(code **)(**(int **)((int)param_1 + 0x224) + 0x48))(puVar5);
      pvStack_10 = (void *)0xffffffff;
      if (local_34 != 0) {
        cVar1 = *(char *)(local_34 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_34 + -1));
        }
        else {
          *(char *)(local_34 + -1) = cVar1 + -1;
        }
      }
      puVar5 = FUN_0049dda0(this,(undefined1 *)&local_38,2);
      pvStack_10 = (void *)0x2;
      (**(code **)(**(int **)((int)param_1 + 0x228) + 0x48))(puVar5);
      pvStack_14 = (void *)0xffffffff;
      if (local_38 != 0.0) {
        cVar1 = *(char *)((int)local_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)local_38 + -1));
        }
        else {
          *(char *)((int)local_38 + -1) = cVar1 + -1;
        }
      }
      puVar5 = FUN_0049dda0(this,(undefined1 *)&local_3c,3);
      pvStack_14 = (void *)0x3;
      (**(code **)(**(int **)((int)param_1 + 0x22c) + 0x48))(puVar5);
      pcStack_8 = (code *)0xffffffff;
      if (puStack_2c != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_2c + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)((int)puStack_2c + -1));
        }
        else {
          *(char *)((int)puStack_2c + -1) = cVar1 + -1;
        }
      }
      *(void **)((int)param_1 + 0x2c4) = this;
      iVar2 = FUN_0049dd80((int)this);
      *(int *)((int)param_1 + 0x2c8) = iVar2 + *(int *)((int)param_1 + 0x260);
      uVar4 = FUN_0049df20((int)this);
      *(undefined4 *)((int)param_1 + 0x25c) = uVar4;
    }
  }
  if ((*(char *)((int)param_1 + 0x218) != '\0') && (*(int *)((int)param_1 + 0x34) == 2)) {
    (**(code **)(**(int **)((int)param_1 + 0x250) + 0x20))(1);
    iVar2 = FUN_0049df30(*(int *)((int)param_1 + 0x2c4));
    if (iVar2 == 0) {
      auStack_20[0] = uVar18;
      FUN_004028f0(auStack_20,'\0');
      uVar6 = 0xffffffff;
      pcVar11 = s_system_newmessage_005abb34;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar4 = FUN_00402a00(auStack_20,uVar6,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar11 = s_system_newmessage_005abb34;
        pcVar14 = pcStack_1c;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcStack_1c[uVar6] = '\0';
        uStack_18 = uVar6;
      }
      pcStack_8 = (code *)0x8;
      FUN_0048a910(param_1,(int)auStack_20,-1);
      pcStack_8 = (code *)0xffffffff;
      FUN_004028f0(auStack_20,'\x01');
    }
    FUN_00489800(*(int *)((int)param_1 + 0x25c));
    *(undefined1 *)((int)param_1 + 0x218) = 0;
  }
  if (*(int *)((int)param_1 + 0x21c) != -1) {
    iVar2 = FUN_0049dd50(*(int *)((int)param_1 + 0x2c4));
    iVar2 = FUN_0049d220(iVar2);
    uVar6 = 0xffffffff;
    pcVar11 = s_HONNEY_005abb48;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar7 = *(uint *)(iVar2 + 8);
    uVar8 = ~uVar6 - 1;
    uVar6 = uVar7;
    if (uVar8 <= uVar7) {
      uVar6 = uVar8;
    }
    bVar16 = false;
    iVar9 = 0;
    bVar17 = true;
    pbVar12 = *(byte **)(iVar2 + 4);
    pbVar15 = (byte *)s_HONNEY_005abb48;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar16 = *pbVar12 < *pbVar15;
      bVar17 = *pbVar12 == *pbVar15;
      pbVar12 = pbVar12 + 1;
      pbVar15 = pbVar15 + 1;
    } while (bVar17);
    if (!bVar17) {
      iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
    }
    if (((iVar9 != 0) || (uVar7 < uVar8)) || (uVar7 != uVar8)) {
      iVar2 = FUN_0049dd50(*(int *)((int)param_1 + 0x2c4));
      iVar2 = FUN_0049d220(iVar2);
      uVar6 = 0xffffffff;
      pcVar11 = s_SHADOW_005abb50;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar7 = *(uint *)(iVar2 + 8);
      uVar8 = ~uVar6 - 1;
      uVar6 = uVar7;
      if (uVar8 <= uVar7) {
        uVar6 = uVar8;
      }
      bVar16 = false;
      iVar9 = 0;
      bVar17 = true;
      pbVar12 = *(byte **)(iVar2 + 4);
      pbVar15 = (byte *)s_SHADOW_005abb50;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        bVar16 = *pbVar12 < *pbVar15;
        bVar17 = *pbVar12 == *pbVar15;
        pbVar12 = pbVar12 + 1;
        pbVar15 = pbVar15 + 1;
      } while (bVar17);
      if (!bVar17) {
        iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      }
      if (((iVar9 != 0) || (uVar7 < uVar8)) || (uVar7 != uVar8)) {
        if (*(int *)((int)param_1 + 0x34) == 2) {
          FUN_0048f090(param_1,1);
        }
        iVar2 = FUN_00426f60(&DAT_005d3460,*(int *)((int)param_1 + 0x21c));
        iVar2 = FUN_00425300(iVar2);
        local_38 = 1.0;
        local_34 = 0x3f800000;
        local_3c = (float)iVar2 * 0.0009090909;
        (**(code **)(**(int **)((int)param_1 + 0x23c) + 0x24))(&local_3c);
        ExceptionList = pvStack_14;
        return;
      }
    }
  }
  FUN_0048f090(param_1,0);
  ExceptionList = pvStack_10;
  return;
}


