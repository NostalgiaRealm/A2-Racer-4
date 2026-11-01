
/* ==== FUN_004cc0b0 @ 004cc0b0 ==== 
 * signature: undefined4 __cdecl FUN_004cc0b0(LPCSTR param_1, LPCSTR param_2, int * param_3)
 * body: 004cc0b0-004cc179;004cc17d-004cc505
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cc17a-004cc17c
 */

undefined4 __cdecl FUN_004cc0b0(LPCSTR param_1,LPCSTR param_2,int *param_3)

{
  FILE *pFVar1;
  int *piVar2;
  FILE *pFVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  short sStack_2a;
  int iStack_28;
  short *psStack_24;
  int local_20;
  int iStack_1c;
  int *local_18;
  FILE *local_14;
  int local_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  if (DAT_00740d50 != 0) {
    pFVar3 = (FILE *)FUN_005589a5(param_1,&DAT_005b496c);
    if (pFVar3 == (FILE *)0x0) {
      return 1000;
    }
    local_14 = (FILE *)FUN_005589a5(param_2,&DAT_005b496c);
    if (local_14 == (FILE *)0x0) {
      FUN_005588fd(pFVar3);
      return 1000;
    }
    DAT_00740d48 = 0;
    iVar7 = *param_3;
    pFVar1 = local_14;
    piVar2 = param_3;
    piVar6 = local_18;
    while (local_18 = piVar2, local_14 = pFVar1, -1 < iVar7) {
      FUN_0055a06b((int *)pFVar1,*local_18 * 4 + -2,0);
      if ((pFVar1->_flag & 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____index_file_seek_error___005b6018);
      }
      FUN_00558b35((char *)&local_10,1,4,(int *)pFVar1);
      if (((pFVar1->_flag & 0x20) != 0) ||
         (FUN_0055a06b((int *)pFVar3,local_10,0), (pFVar3->_flag & 0x20) != 0)) {
        FUN_005588fd(pFVar3);
        return 0x3e9;
      }
      iVar7 = *local_18;
      iVar9 = iVar7 * 0x20;
      local_20 = iVar7;
      FUN_00558b35((char *)(iVar9 + 8 + DAT_00740d44),1,2,(int *)pFVar3);
      FUN_00558b35((char *)(iVar9 + 0xc + DAT_00740d44),1,2,(int *)pFVar3);
      FUN_00558b35((char *)&sStack_2a,1,2,(int *)pFVar3);
      *(int *)(iVar9 + 0x10 + DAT_00740d44) = (int)sStack_2a;
      FUN_00558b35((char *)&sStack_2a,1,2,(int *)pFVar3);
      *(int *)(iVar9 + 0x14 + DAT_00740d44) = (int)sStack_2a;
      DAT_00740d48 = DAT_00740d48 +
                     *(int *)(iVar9 + 0xc + DAT_00740d44) * *(int *)(iVar9 + 8 + DAT_00740d44);
      FUN_004cbd20(iVar7);
      FUN_004cbff0(iVar7,&iStack_1c);
      psVar8 = *(short **)(iVar9 + DAT_00740d44);
      psStack_24 = psVar8;
      switch(DAT_007409cc) {
      case 0:
        FUN_004c3fa0((byte *)s_pf_none_005b5fbc);
        iStack_28 = 0;
        if (0 < *(int *)(iVar9 + 0xc + DAT_00740d44)) {
          do {
            FUN_00558b35((char *)psVar8,1,*(uint *)(iVar9 + 8 + DAT_00740d44),(int *)pFVar3);
            psVar8 = (short *)((int)psVar8 + iStack_1c);
            iStack_28 = iStack_28 + 1;
          } while (iStack_28 < *(int *)(iVar9 + 0xc + DAT_00740d44));
        }
        break;
      case 1:
        FUN_004c3fa0((byte *)s_converting_to_16_bits_005b5fe0);
        iStack_28 = 0;
        iVar5 = DAT_00740d44;
        if (0 < *(int *)(iVar9 + 0xc + DAT_00740d44)) {
          do {
            iVar7 = 0;
            if (0 < *(int *)(iVar9 + 8 + iVar5)) {
              do {
                FUN_00558b35((char *)&uStack_8,1,1,(int *)pFVar3);
                uVar4 = FUN_004c81b0(uStack_8 & 0xff,8);
                *psVar8 = (short)uVar4;
                psVar8 = psVar8 + 1;
                iVar7 = iVar7 + 1;
                iVar5 = DAT_00740d44;
              } while (iVar7 < *(int *)(iVar9 + 8 + DAT_00740d44));
            }
            psVar8 = (short *)((int)psStack_24 + iStack_1c);
            iStack_28 = iStack_28 + 1;
            iVar7 = local_20;
            psStack_24 = psVar8;
          } while (iStack_28 < *(int *)(iVar9 + 0xc + iVar5));
        }
        break;
      case 2:
        FUN_004c3fa0((byte *)s_converting_to_24_bits_005b5fc8);
        iStack_28 = 0;
        iVar5 = DAT_00740d44;
        if (0 < *(int *)(iVar9 + 0xc + DAT_00740d44)) {
          do {
            iVar7 = 0;
            if (0 < *(int *)(iVar9 + 8 + iVar5)) {
              do {
                FUN_00558b35((char *)&uStack_4,1,1,(int *)pFVar3);
                FUN_004c8380(uStack_4 & 0xff,8,psVar8);
                psVar8 = (short *)((int)psVar8 + 3);
                iVar7 = iVar7 + 1;
                iVar5 = DAT_00740d44;
              } while (iVar7 < *(int *)(iVar9 + 8 + DAT_00740d44));
            }
            psVar8 = (short *)((int)psStack_24 + iStack_1c);
            iStack_28 = iStack_28 + 1;
            iVar7 = local_20;
            psStack_24 = psVar8;
          } while (iStack_28 < *(int *)(iVar9 + 0xc + iVar5));
        }
        break;
      case 4:
        FUN_004c3fa0((byte *)s_converting_from_24_to_16_bits_005b5ff8);
        iStack_28 = 0;
        iVar5 = DAT_00740d44;
        if (0 < *(int *)(iVar9 + 0xc + DAT_00740d44)) {
          do {
            iVar7 = 0;
            if (0 < *(int *)(iVar9 + 8 + iVar5)) {
              do {
                FUN_00558b35((char *)&uStack_c,1,1,(int *)pFVar3);
                FUN_00558b35((char *)&param_2,1,1,(int *)pFVar3);
                FUN_00558b35((char *)&param_1,1,1,(int *)pFVar3);
                uVar4 = FUN_004c81b0((uint)CONCAT11(param_1._0_1_,param_2._0_1_) << 8 |
                                     uStack_c & 0xff,0x18);
                *psVar8 = (short)uVar4;
                psVar8 = psVar8 + 1;
                iVar7 = iVar7 + 1;
                iVar5 = DAT_00740d44;
              } while (iVar7 < *(int *)(iVar9 + 8 + DAT_00740d44));
            }
            psVar8 = (short *)((int)psStack_24 + iStack_1c);
            iStack_28 = iStack_28 + 1;
            iVar7 = local_20;
            psStack_24 = psVar8;
          } while (iStack_28 < *(int *)(iVar9 + 0xc + iVar5));
        }
      }
      FUN_004cc060(iVar7);
      piVar6 = local_18 + 1;
      pFVar1 = local_14;
      piVar2 = piVar6;
      iVar7 = *piVar6;
    }
    local_18 = piVar6;
    FUN_005588fd(pFVar1);
    FUN_005588fd(pFVar3);
  }
  return 0;
}


