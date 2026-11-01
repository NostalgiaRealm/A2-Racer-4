
/* ==== FUN_0048f720 @ 0048f720 ==== 
 * signature: undefined __fastcall FUN_0048f720(int param_1)
 * body: 0048f720-0048fc69
 */

void __fastcall FUN_0048f720(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined1 local_1c [4];
  byte *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056df08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  iVar11 = *(int *)(param_1 + 0x34);
  local_4 = 0;
  if (iVar11 < 0x1000002) {
    if (iVar11 == 0x1000001) {
      uVar6 = 0xffffffff;
      pcVar9 = s_BUSY_INIT_005acac4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar9 = s_BUSY_INIT_005acac4;
LAB_0048f8be:
        pbVar4 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pbVar4 = pbVar4 + 4;
        }
LAB_0048f8cb:
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pbVar4 = pbVar4 + 1;
        }
        FUN_004029e0(local_1c,uVar6);
      }
    }
    else if (iVar11 == 1) {
      uVar6 = 0xffffffff;
      pcVar9 = s_STATE_INIT_005acab8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar9 = s_STATE_INIT_005acab8;
        pbVar4 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pbVar4 = pbVar4 + 4;
        }
        goto LAB_0048f8cb;
      }
    }
    else if (iVar11 == 2) {
      uVar6 = 0xffffffff;
      pcVar9 = s_STATE_ONSCREEN_005acad0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar9 = s_STATE_ONSCREEN_005acad0;
        goto LAB_0048f8be;
      }
    }
    else if (iVar11 == 3) {
      uVar6 = 0xffffffff;
      pcVar9 = s_STATE_OFFSCREEN_005acaf0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar9 = s_STATE_OFFSCREEN_005acaf0;
        pbVar4 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pbVar4 = pbVar4 + 4;
        }
        goto LAB_0048f8cb;
      }
    }
  }
  else if (iVar11 == 0x1000002) {
    uVar6 = 0xffffffff;
    pcVar9 = s_BUSY_ONSCREEN_005acae0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar9 = s_BUSY_ONSCREEN_005acae0;
      goto LAB_0048f8be;
    }
  }
  else if (iVar11 == 0x1000003) {
    uVar6 = 0xffffffff;
    pcVar9 = s_BUSY_OFFSCREEN_005acb00;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar9 = s_BUSY_OFFSCREEN_005acb00;
      pbVar4 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pbVar4 = pbVar4 + 4;
      }
      goto LAB_0048f8cb;
    }
  }
  pbVar4 = local_18;
  if (local_18 == (byte *)0x0) {
    pbVar4 = &DAT_0057629c;
  }
  FUN_004c5930(1,0x28,0xfa,pbVar4);
  iVar11 = *(int *)(param_1 + 0x30);
  if (iVar11 < 0x1000002) {
    if (iVar11 == 0x1000001) {
      uVar6 = 0xffffffff;
      pcVar9 = s_BUSY_INIT_005acb1c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 == '\0') goto LAB_0048fa7a;
      pcVar9 = s_BUSY_INIT_005acb1c;
      goto LAB_0048fa5e;
    }
    if (iVar11 == 1) {
      uVar6 = 0xffffffff;
      pcVar9 = s_STATE_INIT_005acb10;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 == '\0') goto LAB_0048fa7a;
      pcVar9 = s_STATE_INIT_005acb10;
      pbVar4 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pbVar4 = pbVar4 + 4;
      }
    }
    else {
      if (iVar11 == 2) {
        uVar6 = 0xffffffff;
        pcVar9 = s_STATE_ONSCREEN_005acb28;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6 - 1;
        uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
        if ((char)uVar3 == '\0') goto LAB_0048fa7a;
        pcVar9 = s_STATE_ONSCREEN_005acb28;
        goto LAB_0048fa5e;
      }
      if (iVar11 != 3) goto LAB_0048fa7a;
      uVar6 = 0xffffffff;
      pcVar9 = s_STATE_OFFSCREEN_005acb48;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 == '\0') goto LAB_0048fa7a;
      pcVar9 = s_STATE_OFFSCREEN_005acb48;
      pbVar4 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pbVar4 = pbVar4 + 4;
      }
    }
  }
  else {
    if (iVar11 != 0x1000002) {
      if (iVar11 != 0x1000003) goto LAB_0048fa7a;
      uVar6 = 0xffffffff;
      pcVar9 = s_BUSY_OFFSCREEN_005acb58;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
      if ((char)uVar3 == '\0') goto LAB_0048fa7a;
      pcVar9 = s_BUSY_OFFSCREEN_005acb58;
      pbVar4 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pbVar4 = pbVar4 + 4;
      }
      goto LAB_0048fa6b;
    }
    uVar6 = 0xffffffff;
    pcVar9 = s_BUSY_ONSCREEN_005acb38;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
    if ((char)uVar3 == '\0') goto LAB_0048fa7a;
    pcVar9 = s_BUSY_ONSCREEN_005acb38;
LAB_0048fa5e:
    pbVar4 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pbVar4 = pbVar4 + 4;
    }
  }
LAB_0048fa6b:
  for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar4 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pbVar4 = pbVar4 + 1;
  }
  FUN_004029e0(local_1c,uVar6);
LAB_0048fa7a:
  pbVar4 = local_18;
  if (local_18 == (byte *)0x0) {
    pbVar4 = &DAT_0057629c;
  }
  FUN_004c5930(1,0x1b8,0xfa,pbVar4);
  FUN_004c5930(1,400,0xdc,(byte *)s__d___d__005acb68);
  FUN_004c5930(1,0x1e0,0xa0,(byte *)s_CopAlert__d__d_005acb70);
  FUN_004c5930(1,0x1e0,0xb4,(byte *)s_DamageAlert__d_005acb80);
  FUN_004c5930(1,0x1e0,200,(byte *)s_TurboAlert__f_005acb90);
  if (*(int *)(param_1 + 0x2c4) != 0) {
    FUN_0049dd90(*(int *)(param_1 + 0x2c4));
    FUN_004c5930(1,10,0xf,(byte *)s_SHOW__ID__s___Time__d__005acba0);
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x360)) {
    iVar8 = 0x28;
    piVar10 = (int *)(param_1 + 0x2d0);
    do {
      FUN_0049dd90(*piVar10);
      FUN_0049dd60(*piVar10);
      iVar5 = FUN_0049dd50(*piVar10);
      FUN_0049d200(iVar5);
      FUN_004c5930(1,10,iVar8,(byte *)s__2d__Prio__d__d__Time__d__ID__s__005acbc0);
      iVar11 = iVar11 + 1;
      iVar8 = iVar8 + 0x14;
      piVar10 = piVar10 + 3;
    } while (iVar11 < *(int *)(param_1 + 0x360));
  }
  if (local_18 != (byte *)0x0) {
    bVar2 = local_18[-1];
    if ((bVar2 != 0) && (bVar2 != 0xff)) {
      local_18[-1] = bVar2 - 1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}


