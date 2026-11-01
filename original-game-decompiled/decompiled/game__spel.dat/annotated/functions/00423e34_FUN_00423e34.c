
/* ==== FUN_00423e34 @ 00423e34 ==== 
 * signature: undefined __stdcall FUN_00423e34(int param_1, int param_2)
 * body: 00423e34-00423e3f
 */

void FUN_00423e34(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  LPCSTR pCVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  LPCSTR pCVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 uStack_2e9;
  int iStack_2e8;
  undefined1 uStack_2e4;
  undefined1 uStack_2e3;
  undefined1 uStack_2e2;
  undefined1 uStack_2e1;
  undefined1 auStack_2e0 [4];
  char *pcStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 auStack_2d0 [4];
  LPCSTR pCStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined1 auStack_2bc [16];
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 auStack_27c [4];
  int iStack_278;
  undefined1 auStack_26c [16];
  undefined1 auStack_25c [16];
  undefined1 auStack_24c [16];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 auStack_22c [16];
  undefined1 auStack_21c [16];
  char acStack_20c [256];
  byte abStack_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a060;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00424980(auStack_27c,&uStack_2e1);
  uStack_4 = 0;
  FUN_00424980(auStack_26c,&uStack_2e3);
  uStack_4._0_1_ = 1;
  FUN_00424980(auStack_25c,&uStack_2e2);
  uStack_4._0_1_ = 2;
  FUN_00424980(auStack_24c,&uStack_2e4);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  FUN_00424980(auStack_22c,&uStack_2e9);
  uStack_4 = 4;
  auStack_2d0[0] = uStack_2e9;
  FUN_004028f0(auStack_2d0,'\0');
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  pbVar3 = *(byte **)(param_1 + 4);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_0057629c;
  }
  iVar4 = FUN_00448c90(&DAT_006fa558,pbVar3);
  pcVar5 = *(char **)(iVar4 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  set_ini_filename(pcVar5);
  pCVar6 = *(LPCSTR *)(param_2 + 4);
  if (pCVar6 == (LPCSTR)0x0) {
    pCVar6 = "";
  }
  iStack_2c0 = read_ini_value_setting(pCVar6,s_COUNT_00595a38);
  iStack_2e8 = 0;
  if (0 < iStack_2c0) {
    do {
      iVar4 = iStack_2e8;
      puVar7 = FUN_0049df90(auStack_21c,&DAT_00595a40);
      uStack_4._0_1_ = 6;
      FUN_004093c0(auStack_2d0,puVar7,0,0xffffffff);
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_21c,'\x01');
      pCVar6 = pCStack_2cc;
      if (pCStack_2cc == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      pCVar9 = *(LPCSTR *)(param_2 + 4);
      if (pCVar9 == (LPCSTR)0x0) {
        pCVar9 = "";
      }
      read_ini_string_setting(pCVar9,pCVar6,(LPSTR)abStack_10c,0xff);
      iVar10 = -1;
      pbVar3 = abStack_10c;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      if (iVar10 == -2) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__No_settings_for_vehicle___00595a68);
      }
      iVar10 = get_ini_arguments_online(abStack_10c,(uint *)0x0);
      if (iVar10 != 9) {
        pbVar3 = *(byte **)(param_1 + 4);
        if (pbVar3 == (byte *)0x0) {
          pbVar3 = &DAT_0057629c;
        }
        FUN_00448c90(&DAT_006fa558,pbVar3);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__Nr_args_incorrect__Ini___00595abc);
      }
      FUN_004c3f10(0,acStack_20c,0xff);
      auStack_29c[0] = uStack_2e9;
      FUN_004028f0(auStack_29c,'\0');
      uVar11 = 0xffffffff;
      pcVar5 = acStack_20c;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_00402940(auStack_29c,(undefined4 *)acStack_20c,~uVar11 - 1);
      uStack_4._0_1_ = 7;
      FUN_004093c0(auStack_27c,auStack_29c,0,0xffffffff);
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_29c,'\x01');
      FUN_004c3f10(1,acStack_20c,0xff);
      auStack_28c[0] = uStack_2e9;
      FUN_004028f0(auStack_28c,'\0');
      uVar11 = 0xffffffff;
      pcVar5 = acStack_20c;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_00402940(auStack_28c,(undefined4 *)acStack_20c,~uVar11 - 1);
      uStack_4._0_1_ = 8;
      FUN_004093c0(auStack_26c,auStack_28c,0,0xffffffff);
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_28c,'\x01');
      FUN_004c3f10(2,acStack_20c,0xff);
      auStack_2ac[0] = uStack_2e9;
      FUN_004028f0(auStack_2ac,'\0');
      uVar11 = 0xffffffff;
      pcVar5 = acStack_20c;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_00402940(auStack_2ac,(undefined4 *)acStack_20c,~uVar11 - 1);
      uStack_4._0_1_ = 9;
      FUN_004093c0(auStack_25c,auStack_2ac,0,0xffffffff);
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_2ac,'\x01');
      FUN_004c3f10(3,acStack_20c,0xff);
      auStack_2bc[0] = uStack_2e9;
      FUN_004028f0(auStack_2bc,'\0');
      uVar11 = 0xffffffff;
      pcVar5 = acStack_20c;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_00402940(auStack_2bc,(undefined4 *)acStack_20c,~uVar11 - 1);
      uStack_4._0_1_ = 10;
      FUN_004093c0(auStack_24c,auStack_2bc,0,0xffffffff);
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_2bc,'\x01');
      uStack_23c = FUN_004c3ec0(4);
      uStack_238 = FUN_004c3ec0(5);
      uStack_234 = FUN_004c3ec0(6);
      uStack_230 = FUN_004c3ec0(7);
      FUN_004c3f10(8,acStack_20c,0xff);
      auStack_2e0[0] = uStack_2e9;
      FUN_004028f0(auStack_2e0,'\0');
      uVar11 = 0xffffffff;
      pcVar5 = acStack_20c;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar11 = ~uVar11 - 1;
      uVar8 = FUN_00402a00(auStack_2e0,uVar11,'\x01');
      if ((char)uVar8 != '\0') {
        pcVar5 = acStack_20c;
        pcVar13 = pcStack_2dc;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcStack_2dc[uVar11] = '\0';
        iVar4 = iStack_2e8;
        uStack_2d8 = uVar11;
      }
      uStack_4._0_1_ = 0xb;
      FUN_004093c0(auStack_22c,auStack_2e0,0,0xffffffff);
      uStack_4 = CONCAT31(uStack_4._1_3_,5);
      if (pcStack_2dc != (char *)0x0) {
        cVar2 = pcStack_2dc[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_0054b339(pcStack_2dc + -1);
        }
        else {
          pcStack_2dc[-1] = cVar2 + -1;
        }
      }
      pcStack_2dc = (char *)0x0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      FUN_00424ad0(DAT_005d345c,*(undefined1 **)((int)DAT_005d345c + 8),1,auStack_27c);
      iStack_2e8 = iVar4 + 1;
    } while (iStack_2e8 < iStack_2c0);
  }
  if (pCStack_2cc != (LPCSTR)0x0) {
    cVar2 = pCStack_2cc[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(pCStack_2cc + -1);
    }
    else {
      pCStack_2cc[-1] = cVar2 + -1;
    }
  }
  pCStack_2cc = (LPCSTR)0x0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_4 = 0xf;
  FUN_004028f0(auStack_22c,'\x01');
  uStack_4._0_1_ = 0xe;
  FUN_004028f0(auStack_24c,'\x01');
  uStack_4._0_1_ = 0xd;
  FUN_004028f0(auStack_25c,'\x01');
  uStack_4 = CONCAT31(uStack_4._1_3_,0xc);
  FUN_004028f0(auStack_26c,'\x01');
  if (iStack_278 != 0) {
    cVar2 = *(char *)(iStack_278 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(iStack_278 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339((LPVOID)(iStack_278 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}


