
/* ==== FUN_00423e40 @ 00423e40 ==== 
 * signature: undefined __stdcall FUN_00423e40(int param_1, int param_2)
 * body: 00423e40-00424012;00424016-0042407f;00424087-004244a1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00424013-00424015 00424080-00424086
 */

void FUN_00423e40(int param_1,int param_2)

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
  undefined1 local_2e9;
  int local_2e8;
  undefined1 local_2e4;
  undefined1 local_2e3;
  undefined1 local_2e2;
  undefined1 local_2e1;
  undefined1 auStack_2e0 [4];
  char *pcStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 local_2d0 [4];
  LPCSTR local_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  undefined1 auStack_2bc [16];
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 local_27c [4];
  int iStack_278;
  undefined1 local_26c [16];
  undefined1 local_25c [16];
  undefined1 local_24c [16];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 local_22c [16];
  undefined1 local_21c [16];
  char acStack_20c [256];
  byte local_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a060;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00424980(local_27c,&local_2e1);
  local_4 = 0;
  FUN_00424980(local_26c,&local_2e3);
  local_4._0_1_ = 1;
  FUN_00424980(local_25c,&local_2e2);
  local_4._0_1_ = 2;
  FUN_00424980(local_24c,&local_2e4);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00424980(local_22c,&local_2e9);
  local_4 = 4;
  local_2d0[0] = local_2e9;
  FUN_004028f0(local_2d0,'\0');
  local_4 = CONCAT31(local_4._1_3_,5);
  pbVar3 = *(byte **)(param_1 + 4);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = &DAT_0057629c;
  }
  iVar4 = FUN_00448c90(&DAT_006fa558,pbVar3);
  pcVar5 = *(char **)(iVar4 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  FUN_004c3b60(pcVar5);
  pCVar6 = *(LPCSTR *)(param_2 + 4);
  if (pCVar6 == (LPCSTR)0x0) {
    pCVar6 = "";
  }
  local_2c0 = FUN_004c3cd0(pCVar6,s_COUNT_00595a38);
  local_2e8 = 0;
  if (0 < local_2c0) {
    do {
      iVar4 = local_2e8;
      puVar7 = FUN_0049df90(local_21c,&DAT_00595a40);
      local_4._0_1_ = 6;
      FUN_004093c0(local_2d0,puVar7,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(local_21c,'\x01');
      pCVar6 = local_2cc;
      if (local_2cc == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      pCVar9 = *(LPCSTR *)(param_2 + 4);
      if (pCVar9 == (LPCSTR)0x0) {
        pCVar9 = "";
      }
      FUN_004c3d10(pCVar9,pCVar6,(LPSTR)local_10c,0xff);
      iVar10 = -1;
      pbVar3 = local_10c;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      if (iVar10 == -2) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s___d__No_settings_for_vehicle___00595a68);
      }
      iVar10 = FUN_004c3d60(local_10c,(uint *)0x0);
      if (iVar10 != 9) {
        pbVar3 = *(byte **)(param_1 + 4);
        if (pbVar3 == (byte *)0x0) {
          pbVar3 = &DAT_0057629c;
        }
        FUN_00448c90(&DAT_006fa558,pbVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s___d__Nr_args_incorrect__Ini___00595abc);
      }
      FUN_004c3f10(0,acStack_20c,0xff);
      auStack_29c[0] = local_2e9;
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
      local_4._0_1_ = 7;
      FUN_004093c0(local_27c,auStack_29c,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_29c,'\x01');
      FUN_004c3f10(1,acStack_20c,0xff);
      auStack_28c[0] = local_2e9;
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
      local_4._0_1_ = 8;
      FUN_004093c0(local_26c,auStack_28c,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_28c,'\x01');
      FUN_004c3f10(2,acStack_20c,0xff);
      auStack_2ac[0] = local_2e9;
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
      local_4._0_1_ = 9;
      FUN_004093c0(local_25c,auStack_2ac,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_2ac,'\x01');
      FUN_004c3f10(3,acStack_20c,0xff);
      auStack_2bc[0] = local_2e9;
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
      local_4._0_1_ = 10;
      FUN_004093c0(local_24c,auStack_2bc,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004028f0(auStack_2bc,'\x01');
      uStack_23c = FUN_004c3ec0(4);
      uStack_238 = FUN_004c3ec0(5);
      uStack_234 = FUN_004c3ec0(6);
      uStack_230 = FUN_004c3ec0(7);
      FUN_004c3f10(8,acStack_20c,0xff);
      auStack_2e0[0] = local_2e9;
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
        iVar4 = local_2e8;
        uStack_2d8 = uVar11;
      }
      local_4._0_1_ = 0xb;
      FUN_004093c0(local_22c,auStack_2e0,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,5);
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
      FUN_00424ad0(DAT_005d345c,*(undefined1 **)((int)DAT_005d345c + 8),1,local_27c);
      local_2e8 = iVar4 + 1;
    } while (local_2e8 < local_2c0);
  }
  if (local_2cc != (LPCSTR)0x0) {
    cVar2 = local_2cc[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339(local_2cc + -1);
    }
    else {
      local_2cc[-1] = cVar2 + -1;
    }
  }
  local_2cc = (LPCSTR)0x0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  local_4 = 0xf;
  FUN_004028f0(local_22c,'\x01');
  local_4._0_1_ = 0xe;
  FUN_004028f0(local_24c,'\x01');
  local_4._0_1_ = 0xd;
  FUN_004028f0(local_25c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(local_26c,'\x01');
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


