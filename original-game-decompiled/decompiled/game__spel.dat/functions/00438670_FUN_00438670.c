
/* ==== FUN_00438670 @ 00438670 ==== 
 * signature: undefined __stdcall FUN_00438670(void)
 * body: 00438670-00438b76;00438b7a-00438c39
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00438b77-00438b79
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438670(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 auStack_50 [3];
  float afStack_44 [17];
  
  iVar2 = FUN_004c5e40(0x31);
  if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(DAT_006fba5c + 5);
  }
  iVar2 = FUN_004c5e40(0x32);
  if (iVar2 != 0) {
    if (DAT_006fb8a0 != 0) goto LAB_00438706;
    FUN_004390d0(0);
  }
  if (DAT_006fb8a0 == 0) {
    iVar2 = FUN_004c5e40(0x33);
    if (iVar2 == 0) {
      iVar2 = FUN_004390c0();
      uVar8 = DAT_00599728;
      if (iVar2 != 4) goto LAB_00438706;
    }
    else {
      iVar2 = FUN_004390c0();
      if (iVar2 == 4) goto LAB_00438706;
      DAT_00599728 = FUN_004390c0();
      uVar8 = 4;
    }
    FUN_004390d0(uVar8);
  }
LAB_00438706:
  iVar2 = FUN_004c5e40(0x34);
  if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(3);
  }
  iVar2 = FUN_004c5e40(0x36);
  if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(6);
  }
  iVar2 = FUN_004c5e40(0x37);
  if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(7);
  }
  iVar2 = FUN_004c5e40(0x38);
  if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(8);
  }
  iVar2 = FUN_004c5e40(0x39);
  if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(9);
  }
  iVar2 = FUN_004c5e40(0x30);
  if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
    FUN_004390d0(10);
  }
  if (DAT_006fb950 != 0) {
    iVar2 = FUN_004c5e40(0x55);
    if ((iVar2 != 0) && (DAT_006fb8a0 == 0)) {
      FUN_004390d0(0xe);
    }
    if ((((&DAT_006c3518)[DAT_006c3568] != 7) && (DAT_006fb8a0 == 0)) && (DAT_006fb950 != 0)) {
      piVar3 = (int *)FUN_00469fa0();
      pfVar4 = (float *)FUN_004701d0(piVar3);
      fStack_68 = *pfVar4;
      fStack_64 = pfVar4[1];
      fStack_60 = pfVar4[2];
      fVar6 = FUN_004a6800(0x7128b0);
      fStack_68 = (float)(fVar6 * (float10)3000.0 * (float10)fStack_68);
      fVar6 = FUN_004a6800(0x7128b0);
      fStack_64 = (float)(fVar6 * (float10)1400.0 * (float10)fStack_64);
      pfVar4 = (float *)FUN_004b11c0((void *)(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178),
                                     auStack_50);
      fStack_5c = *pfVar4;
      fStack_58 = pfVar4[1];
      fVar1 = fStack_58 + fStack_64;
      fStack_54 = pfVar4[2];
      lVar7 = __ftol();
      FUN_004afe30(&fStack_74,&fStack_5c,(uint)lVar7);
      fStack_70 = fVar1;
      iVar2 = FUN_004c5e40(0x49);
      if (iVar2 != 0) {
        fVar1 = _DAT_0059971c + 1.0;
        fStack_74 = fVar1 * fStack_74;
        fStack_70 = fVar1 * fStack_70;
        fStack_6c = fStack_6c * fVar1;
      }
      iVar2 = FUN_004c5e40(0x4b);
      if (iVar2 != 0) {
        fVar1 = 1.0 - _DAT_0059971c;
        fStack_74 = fVar1 * fStack_74;
        fStack_70 = fVar1 * fStack_70;
        fStack_6c = fStack_6c * fVar1;
      }
      iVar2 = FUN_004c5e40(0x4a);
      if (iVar2 != 0) {
        fStack_74 = fStack_74 - _DAT_00599718;
      }
      iVar2 = FUN_004c5e40(0x4c);
      if (iVar2 != 0) {
        fStack_74 = _DAT_00599718 + fStack_74;
      }
      iVar2 = FUN_004c5e40(0x41);
      if (iVar2 != 0) {
        fStack_70 = _DAT_00599718 + fStack_70;
      }
      iVar2 = FUN_004c5e40(0x5a);
      if (iVar2 != 0) {
        fStack_70 = fStack_70 - _DAT_00599718;
      }
      iVar2 = FUN_004c5e40(0x52);
      if (iVar2 != 0) {
        pfVar4 = (float *)FUN_00437990(auStack_50);
        fStack_74 = *pfVar4;
        fStack_70 = pfVar4[1];
        fStack_6c = pfVar4[2];
      }
      iVar2 = FUN_004c5e40(0x54);
      if (iVar2 != 0) {
        FUN_00437a80();
      }
      FUN_004b1210((void *)(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178),fStack_74,
                   fStack_70,fStack_6c);
    }
  }
  if ((&DAT_006c3518)[DAT_006c3568] == 7) {
    FUN_00439910();
  }
  pfVar4 = (float *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  DAT_006c356c = FUN_004af230(&DAT_00715250,(&DAT_006c3540)[DAT_006c3568],*pfVar4,pfVar4[1],
                              pfVar4[2]);
  (&DAT_006c3540)[DAT_006c3568] = DAT_006c356c;
  FUN_004b1380((int *)(DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178));
  iVar2 = DAT_00719b50 + (&DAT_006c3518)[DAT_006c3568] * 0x178;
  pfVar4 = (float *)FUN_004b3a60(afStack_44,(float *)(iVar2 + 8),(float *)(iVar2 + 0x54),
                                 (float *)(iVar2 + 0x60),0.0);
  pfVar5 = afStack_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar4 = afStack_44;
  pfVar5 = (float *)&DAT_0073b434;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,2,&DAT_0073b434);
  if (iVar2 == 0) {
    iVar2 = (&DAT_006c3518)[DAT_006c3568];
    fVar1 = *(float *)(DAT_00719b50 + 0x54 + iVar2 * 0x178) -
            *(float *)(DAT_00719b50 + 8 + iVar2 * 0x178);
    iVar2 = DAT_00719b50 + iVar2 * 0x178;
    fStack_70 = *(float *)(iVar2 + 0x58) - *(float *)(iVar2 + 0xc);
    fStack_6c = *(float *)(iVar2 + 0x5c) - *(float *)(iVar2 + 0x10);
    fVar6 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fStack_6c * (float10)fStack_6c);
    fStack_74 = (float)((float10)fVar1 / fVar6);
    fpatan((float10)fStack_6c / fVar6,(float10)fStack_74);
    __ftol();
    FUN_004457d0();
    return;
  }
  FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
}


