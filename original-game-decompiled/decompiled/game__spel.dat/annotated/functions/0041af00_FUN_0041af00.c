
/* ==== FUN_0041af00 @ 0041af00 ==== 
 * signature: undefined __thiscall FUN_0041af00(void * this, int param_1)
 * body: 0041af00-0041af3b;0041af3f-0041b210
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041af3c-0041af3e
 */

void __thiscall FUN_0041af00(void *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CHAR *pCVar6;
  char *pcVar7;
  CHAR *pCVar8;
  undefined1 auStack_d8 [4];
  CHAR *pCStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  undefined **ppuStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  CHAR aCStack_8c [64];
  CHAR aCStack_4c [64];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569d51;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (0x31 < param_1)) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d___Location___d__out_of_ra_005942cc);
  }
  local_c8 = (void *)((int)this + 0x30);
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0041c5f0(local_c8,param_1);
  if ((char)uVar2 == '\0') {
    wsprintfA(aCStack_8c,s_CE_dL_d_0059431c,DAT_006fb898,param_1);
    wsprintfA(aCStack_4c,s_CE_dL_d_wav_00594324,DAT_006fb898,param_1);
    FUN_004c3fa0((byte *)s_COPRADIO_Loading_location_type___00594330);
    iVar3 = FUN_0049ef80(&DAT_006fbb6c,s_COPRADIO_00594360);
    uStack_c0 = *(undefined4 *)(iVar3 + 4);
    uStack_bc = *(undefined4 *)(iVar3 + 8);
    uStack_b8 = *(undefined4 *)(iVar3 + 0xc);
    uStack_b4 = *(undefined4 *)(iVar3 + 0x10);
    uStack_b0 = *(undefined4 *)(iVar3 + 0x14);
    auStack_ac[0] = *(undefined1 *)(iVar3 + 0x18);
    FUN_004028f0(auStack_ac,'\0');
    FUN_004093c0(auStack_ac,(undefined1 *)(iVar3 + 0x18),0,0xffffffff);
    uStack_4 = 0;
    FUN_0041c870(auStack_9c,(undefined1 *)(iVar3 + 0x28));
    ppuStack_c4 = &PTR_FUN_005764c0;
    uStack_4 = 1;
    FUN_004c3fa0((byte *)s_COPRADIO_Got_default_type_0059436c);
    FUN_004028f0(auStack_d8,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = aCStack_8c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(auStack_d8,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      pCVar6 = aCStack_8c;
      pCVar8 = pCStack_d4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
        pCVar6 = pCVar6 + 4;
        pCVar8 = pCVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pCVar8 = *pCVar6;
        pCVar6 = pCVar6 + 1;
        pCVar8 = pCVar8 + 1;
      }
      FUN_004029e0(auStack_d8,uVar4);
    }
    uStack_4._0_1_ = 2;
    FUN_004093c0(auStack_9c,auStack_d8,0,0xffffffff);
    uStack_4._0_1_ = 1;
    FUN_004028f0(auStack_d8,'\x01');
    FUN_004028f0(auStack_d8,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = aCStack_4c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(auStack_d8,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      pCVar6 = aCStack_4c;
      pCVar8 = pCStack_d4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
        pCVar6 = pCVar6 + 4;
        pCVar8 = pCVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pCVar8 = *pCVar6;
        pCVar6 = pCVar6 + 1;
        pCVar8 = pCVar8 + 1;
      }
      pCStack_d4[uVar4] = '\0';
      uStack_d0 = uVar4;
    }
    uStack_4._0_1_ = 3;
    FUN_004093c0(auStack_ac,auStack_d8,0,0xffffffff);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (pCStack_d4 != (CHAR *)0x0) {
      cVar1 = pCStack_d4[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(pCStack_d4 + -1);
      }
      else {
        pCStack_d4[-1] = cVar1 + -1;
      }
    }
    pCStack_d4 = (CHAR *)0x0;
    uStack_d0 = 0;
    uStack_cc = 0;
    FUN_004c3fa0((byte *)s_COPRADIO_Adding_new_type_00594388);
    FUN_0049f030(&DAT_006fbb6c,(uint)&ppuStack_c4);
    FUN_004c3fa0((byte *)s_COPRADIO_Creating_soundsource_005943a4);
    iVar3 = FUN_0049ecb0(&DAT_006fbb5c,aCStack_8c);
    uVar2 = FUN_0041c5a0(local_c8,param_1,iVar3);
    if ((char)uVar2 == '\0') {
      FUN_004c3fa0((byte *)s_COPRADIO_Too_many_location_sampl_005943c4);
    }
    FUN_004c3fa0((byte *)s_COPRADIO_done_with_location__d_00594400);
    uStack_4 = 0xffffffff;
    FUN_0049f4c0(&ppuStack_c4);
  }
  else {
    FUN_004c3fa0((byte *)s_COPRADIO__location_allready_load_005942f8);
  }
  ExceptionList = pvStack_c;
  return;
}


