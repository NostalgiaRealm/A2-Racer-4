
/* ==== FUN_0041aed6 @ 0041aed6 ==== 
 * signature: undefined __fastcall FUN_0041aed6(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 0041aed6-0041aed7
 */

void __fastcall FUN_0041aed6(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char cVar4;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int unaff_ESI;
  CHAR *pCVar8;
  int unaff_EDI;
  CHAR *pCVar9;
  undefined1 auStack_d4 [4];
  CHAR *pCStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  void *pvStack_c4;
  undefined **ppuStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  CHAR aCStack_88 [64];
  CHAR aCStack_48 [64];
  char *pcStack_8;
  code *pcStack_4;
  
  *(int *)(unaff_ESI + -0x5177ffbf) = *(int *)(unaff_ESI + -0x5177ffbf) + -0x41;
  *(char *)(in_EAX + -0x67ffbe52) = *(char *)(in_EAX + -0x67ffbe52) + (char)param_2;
  cVar4 = (char)((uint)in_EAX >> 8);
  *(char *)(in_EAX + -0x57ffbe52) = *(char *)(in_EAX + -0x57ffbe52) + cVar4;
  *(char *)(in_EAX + -0x47ffbe52) = *(char *)(in_EAX + -0x47ffbe52) + (char)((uint)param_2 >> 8);
  cVar1 = (char)in_EAX * '\x02' + (char)param_1 + '\x04';
  pcStack_8 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  pcVar5 = (char *)(param_1 + 5);
  *pcVar5 = *pcVar5 + cVar4;
  *pcStack_8 = *pcStack_8 + cVar1;
  *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + (char)((uint)pcVar5 >> 8);
  pcStack_4 = FUN_00569d51;
  ExceptionList = &pcStack_8;
  if ((param_4 < 0) || (0x31 < param_4)) {
    ExceptionList = &pcStack_8;
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d___Location___d__out_of_ra_005942cc);
  }
  pvStack_c4 = (void *)(param_1 + 0x35);
  uVar2 = FUN_0041c5f0(pvStack_c4,param_4);
  if ((char)uVar2 == '\0') {
    wsprintfA(aCStack_88,s_CE_dL_d_0059431c,DAT_006fb898,param_4,unaff_EDI + 5);
    wsprintfA(aCStack_48,s_CE_dL_d_wav_00594324,DAT_006fb898,param_4);
    FUN_004c3fa0((byte *)s_COPRADIO_Loading_location_type___00594330);
    iVar3 = FUN_0049ef80(&DAT_006fbb6c,s_COPRADIO_00594360);
    uStack_bc = *(undefined4 *)(iVar3 + 4);
    uStack_b8 = *(undefined4 *)(iVar3 + 8);
    uStack_b4 = *(undefined4 *)(iVar3 + 0xc);
    uStack_b0 = *(undefined4 *)(iVar3 + 0x10);
    uStack_ac = *(undefined4 *)(iVar3 + 0x14);
    auStack_a8[0] = *(undefined1 *)(iVar3 + 0x18);
    FUN_004028f0(auStack_a8,'\0');
    FUN_004093c0(auStack_a8,(undefined1 *)(iVar3 + 0x18),0,0xffffffff);
    FUN_0041c870(auStack_98,(undefined1 *)(iVar3 + 0x28));
    ppuStack_c0 = &PTR_FUN_005764c0;
    FUN_004c3fa0((byte *)s_COPRADIO_Got_default_type_0059436c);
    FUN_004028f0(auStack_d4,'\0');
    uVar6 = 0xffffffff;
    pcVar5 = aCStack_88;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar2 = FUN_00402a00(auStack_d4,uVar6,'\x01');
    if ((char)uVar2 != '\0') {
      pCVar8 = aCStack_88;
      pCVar9 = pCStack_d0;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pCVar9 = *(undefined4 *)pCVar8;
        pCVar8 = pCVar8 + 4;
        pCVar9 = pCVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pCVar9 = *pCVar8;
        pCVar8 = pCVar8 + 1;
        pCVar9 = pCVar9 + 1;
      }
      FUN_004029e0(auStack_d4,uVar6);
    }
    FUN_004093c0(auStack_98,auStack_d4,0,0xffffffff);
    FUN_004028f0(auStack_d4,'\x01');
    FUN_004028f0(auStack_d4,'\0');
    uVar6 = 0xffffffff;
    pcVar5 = aCStack_48;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar2 = FUN_00402a00(auStack_d4,uVar6,'\x01');
    if ((char)uVar2 != '\0') {
      pCVar8 = aCStack_48;
      pCVar9 = pCStack_d0;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pCVar9 = *(undefined4 *)pCVar8;
        pCVar8 = pCVar8 + 4;
        pCVar9 = pCVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pCVar9 = *pCVar8;
        pCVar8 = pCVar8 + 1;
        pCVar9 = pCVar9 + 1;
      }
      pCStack_d0[uVar6] = '\0';
      uStack_cc = uVar6;
    }
    FUN_004093c0(auStack_a8,auStack_d4,0,0xffffffff);
    if (pCStack_d0 != (CHAR *)0x0) {
      cVar1 = pCStack_d0[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(pCStack_d0 + -1);
      }
      else {
        pCStack_d0[-1] = cVar1 + -1;
      }
    }
    pCStack_d0 = (CHAR *)0x0;
    uStack_cc = 0;
    uStack_c8 = 0;
    FUN_004c3fa0((byte *)s_COPRADIO_Adding_new_type_00594388);
    FUN_0049f030(&DAT_006fbb6c,(uint)&ppuStack_c0);
    FUN_004c3fa0((byte *)s_COPRADIO_Creating_soundsource_005943a4);
    iVar3 = FUN_0049ecb0(&DAT_006fbb5c,aCStack_88);
    uVar2 = FUN_0041c5a0(pvStack_c4,param_4,iVar3);
    if ((char)uVar2 == '\0') {
      FUN_004c3fa0((byte *)s_COPRADIO_Too_many_location_sampl_005943c4);
    }
    FUN_004c3fa0((byte *)s_COPRADIO_done_with_location__d_00594400);
    FUN_0049f4c0(&ppuStack_c0);
  }
  else {
    FUN_004c3fa0((byte *)s_COPRADIO__location_allready_load_005942f8);
  }
  ExceptionList = pcStack_8;
  return;
}


