
/* ==== FUN_0047a304 @ 0047a304 ==== 
 * signature: undefined4 __thiscall FUN_0047a304(void * this, void * param_1, void * param_2, undefined4 param_3)
 * body: 0047a304-0047a30f
 */

undefined4 __thiscall FUN_0047a304(void *this,void *param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined4 auStack_27c [3];
  undefined4 auStack_270 [3];
  undefined4 auStack_264 [3];
  undefined4 auStack_258 [3];
  undefined4 auStack_24c [3];
  undefined4 auStack_240 [3];
  undefined4 auStack_234 [3];
  undefined4 auStack_228 [3];
  undefined4 auStack_21c [3];
  undefined4 auStack_210 [3];
  undefined4 auStack_204 [3];
  undefined4 auStack_1f8 [3];
  undefined4 auStack_1ec [3];
  undefined4 auStack_1e0 [3];
  undefined4 auStack_1d4 [3];
  undefined4 auStack_1c8 [3];
  undefined4 auStack_1bc [3];
  undefined4 auStack_1b0 [3];
  undefined4 auStack_1a4 [3];
  undefined4 auStack_198 [3];
  undefined4 auStack_18c [3];
  undefined4 auStack_180 [3];
  undefined4 auStack_174 [3];
  undefined4 auStack_168 [3];
  undefined4 auStack_15c [3];
  undefined4 auStack_150 [3];
  undefined4 auStack_144 [3];
  undefined4 auStack_138 [3];
  undefined4 auStack_12c [3];
  undefined4 auStack_120 [3];
  undefined4 auStack_114 [3];
  undefined4 auStack_108 [3];
  undefined4 auStack_fc [3];
  undefined4 auStack_f0 [3];
  undefined4 auStack_e4 [3];
  undefined4 auStack_d8 [3];
  undefined4 auStack_cc [3];
  undefined4 auStack_c0 [3];
  undefined4 auStack_b4 [3];
  undefined4 auStack_a8 [3];
  undefined4 auStack_9c [3];
  undefined4 auStack_90 [3];
  undefined4 auStack_84 [3];
  undefined4 auStack_78 [3];
  undefined4 auStack_6c [3];
  undefined4 auStack_60 [3];
  undefined4 auStack_54 [3];
  undefined4 auStack_48 [3];
  undefined4 auStack_3c [3];
  undefined4 auStack_30 [3];
  undefined4 auStack_24 [3];
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  if (*(char *)((int)this + 0x14) == '\0') {
    return 0xfffffffe;
  }
  iVar2 = FUN_0047b100((int)param_1);
  if (iVar2 < 3) {
    return 0xffffffff;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar8 + 1;
      iVar9 = iVar1;
      if (iVar2 <= iVar1) {
        iVar9 = iVar1 - iVar2;
      }
      pfVar3 = (float *)FUN_0047aff0(param_1,auStack_168,iVar8);
      fStack_2a8 = (*pfVar3 * *(float *)((int)this + 4) +
                   pfVar3[1] * *(float *)((int)this + 8) + pfVar3[2] * *(float *)((int)this + 0xc))
                   - *(float *)((int)this + 0x10);
      pfVar3 = (float *)FUN_0047aff0(param_1,auStack_138,iVar9);
      fVar11 = (*pfVar3 * *(float *)((int)this + 4) +
               pfVar3[2] * *(float *)((int)this + 0xc) + pfVar3[1] * *(float *)((int)this + 8)) -
               *(float *)((int)this + 0x10);
      if (0.0 < fStack_2a8) {
        if (fVar11 <= 0.0) {
          fStack_2a8 = fStack_2a8 / (fStack_2a8 - fVar11);
          pfVar3 = (float *)FUN_0047aff0(param_1,auStack_1ec,iVar9);
          pfVar5 = (float *)FUN_0047aff0(param_1,auStack_1d4,iVar8);
          fVar11 = *pfVar3;
          fVar13 = *pfVar5;
          pfVar3 = (float *)FUN_0047aff0(param_1,auStack_1bc,iVar8);
          fStack_294 = (fVar11 - fVar13) * fStack_2a8 + *pfVar3;
          iVar6 = FUN_0047aff0(param_1,auStack_1a4,iVar9);
          iVar7 = FUN_0047aff0(param_1,auStack_18c,iVar8);
          fVar11 = *(float *)(iVar6 + 4);
          fVar13 = *(float *)(iVar7 + 4);
          iVar6 = FUN_0047aff0(param_1,auStack_174,iVar8);
          fStack_290 = (fVar11 - fVar13) * fStack_2a8 + *(float *)(iVar6 + 4);
          iVar6 = FUN_0047aff0(param_1,auStack_15c,iVar9);
          iVar7 = FUN_0047aff0(param_1,auStack_144,iVar8);
          fVar11 = *(float *)(iVar6 + 8);
          fVar13 = *(float *)(iVar7 + 8);
          iVar6 = FUN_0047aff0(param_1,auStack_12c,iVar8);
          fStack_28c = (fVar11 - fVar13) * fStack_2a8 + *(float *)(iVar6 + 8);
          switch(param_3) {
          case 0:
            goto switchD_0047a698_caseD_0;
          case 1:
            iVar6 = FUN_0047b020(param_1,auStack_114,iVar8);
            fStack_2a0 = *(float *)(iVar6 + 4);
            fStack_2a4 = 0.0;
            uVar10 = *(undefined4 *)(iVar6 + 8);
            iVar9 = FUN_0047b020(param_1,auStack_fc,iVar9);
            puVar4 = auStack_e4;
            break;
          case 2:
            pfVar3 = (float *)FUN_0047b020(param_1,auStack_cc,iVar8);
            fStack_2a4 = *pfVar3;
            fVar11 = pfVar3[2];
            pfVar3 = (float *)FUN_0047b020(param_1,auStack_b4,iVar9);
            pfVar5 = (float *)FUN_0047b020(param_1,auStack_9c,iVar8);
            fStack_2a0 = 0.0;
            fStack_2a4 = (*pfVar3 - *pfVar5) * fStack_2a8 + fStack_2a4;
            goto LAB_0047aaf9;
          case 3:
            iVar6 = FUN_0047b020(param_1,auStack_84,iVar8);
            fStack_2a0 = *(float *)(iVar6 + 4);
            fStack_2a4 = 1.0;
            uVar10 = *(undefined4 *)(iVar6 + 8);
            iVar9 = FUN_0047b020(param_1,auStack_6c,iVar9);
            puVar4 = auStack_54;
            break;
          case 4:
            pfVar3 = (float *)FUN_0047b020(param_1,auStack_3c,iVar8);
            fStack_2a4 = *pfVar3;
            fVar11 = pfVar3[2];
            pfVar3 = (float *)FUN_0047b020(param_1,auStack_24,iVar9);
            puVar4 = auStack_c;
            goto LAB_0047aad9;
          default:
            goto switchD_0047a698_default;
          }
          goto LAB_0047a99e;
        }
        goto switchD_0047a698_default;
      }
      switch(param_3) {
      case 0:
        puVar4 = (undefined4 *)FUN_0047aff0(param_1,auStack_258,iVar8);
        FUN_0047b060(param_2,*puVar4,puVar4[1],puVar4[2]);
        goto switchD_0047a407_default;
      case 1:
        iVar6 = FUN_0047b020(param_1,auStack_30,iVar8);
        fVar13 = *(float *)(iVar6 + 4);
        fVar14 = *(float *)(iVar6 + 8);
        puVar4 = auStack_240;
        fVar12 = fStack_2a8;
        break;
      case 2:
        pfVar3 = (float *)FUN_0047b020(param_1,auStack_120,iVar8);
        fVar14 = pfVar3[2];
        puVar4 = auStack_228;
        fVar12 = *pfVar3;
        fVar13 = fStack_2a8;
        break;
      case 3:
        pfVar3 = (float *)FUN_0047b020(param_1,auStack_90,iVar8);
        fVar14 = pfVar3[2];
        puVar4 = auStack_210;
        fVar12 = *pfVar3 / (*pfVar3 + fStack_2a8);
        fVar13 = pfVar3[1];
        break;
      case 4:
        pfVar3 = (float *)FUN_0047b020(param_1,auStack_108,iVar8);
        fVar14 = pfVar3[2];
        puVar4 = auStack_1f8;
        fVar12 = *pfVar3;
        fVar13 = pfVar3[1] / (pfVar3[1] + fStack_2a8);
        break;
      default:
        goto switchD_0047a407_default;
      }
      puVar4 = (undefined4 *)FUN_0047aff0(param_1,puVar4,iVar8);
      FUN_0047b0a0(param_2,*puVar4,puVar4[1],puVar4[2],fVar12,fVar13,fVar14);
switchD_0047a407_default:
      if (fVar11 <= 0.0) goto switchD_0047a698_default;
      fStack_2a8 = fStack_2a8 / (fStack_2a8 - fVar11);
      pfVar3 = (float *)FUN_0047aff0(param_1,auStack_48,iVar9);
      pfVar5 = (float *)FUN_0047aff0(param_1,auStack_1e0,iVar8);
      fVar11 = *pfVar3;
      fVar13 = *pfVar5;
      pfVar3 = (float *)FUN_0047aff0(param_1,auStack_f0,iVar8);
      fStack_294 = (fVar11 - fVar13) * fStack_2a8 + *pfVar3;
      iVar6 = FUN_0047aff0(param_1,auStack_1c8,iVar9);
      iVar7 = FUN_0047aff0(param_1,auStack_78,iVar8);
      fVar11 = *(float *)(iVar6 + 4);
      fVar13 = *(float *)(iVar7 + 4);
      iVar6 = FUN_0047aff0(param_1,auStack_1b0,iVar8);
      fStack_290 = (fVar11 - fVar13) * fStack_2a8 + *(float *)(iVar6 + 4);
      iVar6 = FUN_0047aff0(param_1,auStack_d8,iVar9);
      iVar7 = FUN_0047aff0(param_1,auStack_198,iVar8);
      fVar11 = *(float *)(iVar6 + 8);
      fVar13 = *(float *)(iVar7 + 8);
      iVar6 = FUN_0047aff0(param_1,auStack_18,iVar8);
      fStack_28c = (fVar11 - fVar13) * fStack_2a8 + *(float *)(iVar6 + 8);
      switch(param_3) {
      case 0:
switchD_0047a698_caseD_0:
        FUN_0047b060(param_2,fStack_294,fStack_290,fStack_28c);
        break;
      case 1:
        iVar6 = FUN_0047b020(param_1,auStack_180,iVar8);
        fVar11 = *(float *)(iVar6 + 4);
        uVar10 = *(undefined4 *)(iVar6 + 8);
        iVar9 = FUN_0047b020(param_1,auStack_c0,iVar9);
        iVar8 = FUN_0047b020(param_1,auStack_27c,iVar8);
        FUN_0047b0a0(param_2,fStack_294,fStack_290,fStack_28c,0,
                     (*(float *)(iVar9 + 4) - *(float *)(iVar8 + 4)) * fStack_2a8 + fVar11,uVar10);
        break;
      case 2:
        pfVar3 = (float *)FUN_0047b020(param_1,auStack_60,iVar8);
        fStack_2a4 = *pfVar3;
        fVar11 = pfVar3[2];
        pfVar3 = (float *)FUN_0047b020(param_1,auStack_150,iVar9);
        pfVar5 = (float *)FUN_0047b020(param_1,auStack_a8,iVar8);
        fStack_2a0 = 0.0;
        fStack_2a4 = (*pfVar3 - *pfVar5) * fStack_2a8 + fStack_2a4;
        goto LAB_0047aaf9;
      case 3:
        iVar6 = FUN_0047b020(param_1,auStack_270,iVar8);
        fStack_2a0 = *(float *)(iVar6 + 4);
        fStack_2a4 = 1.0;
        uVar10 = *(undefined4 *)(iVar6 + 8);
        iVar9 = FUN_0047b020(param_1,auStack_264,iVar9);
        puVar4 = auStack_24c;
LAB_0047a99e:
        iVar8 = FUN_0047b020(param_1,puVar4,iVar8);
        FUN_0047b0a0(param_2,fStack_294,fStack_290,fStack_28c,fStack_2a4,
                     (*(float *)(iVar9 + 4) - *(float *)(iVar8 + 4)) * fStack_2a8 + fStack_2a0,
                     uVar10);
        break;
      case 4:
        pfVar3 = (float *)FUN_0047b020(param_1,auStack_234,iVar8);
        fStack_2a4 = *pfVar3;
        fVar11 = pfVar3[2];
        pfVar3 = (float *)FUN_0047b020(param_1,auStack_21c,iVar9);
        puVar4 = auStack_204;
LAB_0047aad9:
        pfVar5 = (float *)FUN_0047b020(param_1,puVar4,iVar8);
        fStack_2a0 = 1.0;
        fStack_2a4 = (*pfVar3 - *pfVar5) * fStack_2a8 + fStack_2a4;
LAB_0047aaf9:
        FUN_0047b0a0(param_2,fStack_294,fStack_290,fStack_28c,fStack_2a4,fStack_2a0,fVar11);
      }
switchD_0047a698_default:
      iVar8 = iVar1;
    } while (iVar1 < iVar2);
  }
  return 0;
}


