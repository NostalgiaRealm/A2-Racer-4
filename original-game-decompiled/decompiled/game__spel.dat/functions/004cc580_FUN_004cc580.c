
/* ==== FUN_004cc580 @ 004cc580 ==== 
 * signature: undefined4 __cdecl FUN_004cc580(LPCSTR param_1, int param_2)
 * body: 004cc580-004cc9dd
 */

undefined4 __cdecl FUN_004cc580(LPCSTR param_1,int param_2)

{
  short sVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  char local_2b;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  int local_20;
  short *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  pFVar2 = (FILE *)FUN_005589a5(param_1,&DAT_005b496c);
  if (pFVar2 == (FILE *)0x0) {
    return 1000;
  }
  FUN_0055a2d4((int *)pFVar2);
  FUN_00558b35((char *)&local_26,1,2,(int *)pFVar2);
  DAT_005b5ea8 = local_26 + 1;
  FUN_004c3fa0((byte *)s__s_maxmemimages____d_005b60a0);
  uVar5 = (uint)(((byte)param_2 & 1) == 1);
  iVar3 = param_2 - uVar5;
  iVar4 = FUN_004cbc70(DAT_005b5ea8,iVar3);
  if (iVar4 != 0) {
    return 2000;
  }
  if (uVar5 == 0) {
    if ((DAT_00740d4c != 0) && (iVar4 = 0, 0 < DAT_005b5ea8)) {
      iVar7 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar7 + DAT_00740d44) = 0;
        *(undefined4 *)(iVar7 + 0x1c + DAT_00740d44) = 0;
        *(int *)(iVar7 + 0x18 + DAT_00740d44) = iVar3;
        iVar7 = iVar7 + 0x20;
      } while (iVar4 < DAT_005b5ea8);
    }
  }
  else {
    DAT_00740d50 = 1;
    FUN_004c3fa0((byte *)s__s_allocating_images_005b6088);
    local_10 = 0;
    if (0 < DAT_005b5ea8) {
      local_18 = 0;
      do {
        iVar4 = local_10;
        iVar3 = local_18;
        FUN_004c3fa0((byte *)s__s_allocating_image__d_005b6070);
        FUN_00558b35((char *)&local_28,1,2,(int *)pFVar2);
        FUN_00558b35((char *)&local_2a,1,2,(int *)pFVar2);
        FUN_00558b35((char *)&local_24,1,2,(int *)pFVar2);
        FUN_00558b35((char *)&local_22,1,2,(int *)pFVar2);
        *(int *)(DAT_00740d44 + 8 + iVar3) = (int)local_28;
        *(int *)(DAT_00740d44 + 0xc + iVar3) = (int)local_2a;
        *(int *)(DAT_00740d44 + 0x10 + iVar3) = (int)local_24;
        *(int *)(DAT_00740d44 + 0x14 + iVar3) = (int)local_22;
        FUN_004cbd20(iVar4);
        FUN_004cbff0(iVar4,&local_14);
        psVar8 = *(short **)(DAT_00740d44 + iVar3);
        local_1c = psVar8;
        switch(DAT_007409cc) {
        case 0:
          local_20 = 0;
          if (0 < local_2a) {
            do {
              FUN_00558b35((char *)psVar8,1,(int)local_28,(int *)pFVar2);
              psVar8 = (short *)((int)psVar8 + local_14);
              local_20 = local_20 + 1;
            } while (local_20 < local_2a);
          }
          break;
        case 1:
          local_20 = 0;
          sVar1 = local_28;
          if (0 < local_2a) {
            do {
              iVar3 = 0;
              local_1c = psVar8;
              if (0 < sVar1) {
                do {
                  FUN_00558b35((char *)&local_8,1,1,(int *)pFVar2);
                  uVar5 = FUN_004c81b0(local_8 & 0xff,8);
                  *psVar8 = (short)uVar5;
                  psVar8 = psVar8 + 1;
                  iVar3 = iVar3 + 1;
                  sVar1 = local_28;
                } while (iVar3 < local_28);
              }
              psVar8 = (short *)((int)local_1c + local_14);
              local_20 = local_20 + 1;
              iVar4 = local_10;
              iVar3 = local_18;
              local_1c = psVar8;
            } while (local_20 < local_2a);
          }
          break;
        case 2:
          local_20 = 0;
          sVar1 = local_28;
          if (0 < local_2a) {
            do {
              iVar3 = 0;
              local_1c = psVar8;
              if (0 < sVar1) {
                do {
                  FUN_00558b35((char *)&local_4,1,1,(int *)pFVar2);
                  FUN_004c8380(local_4 & 0xff,8,psVar8);
                  psVar8 = (short *)((int)psVar8 + 3);
                  iVar3 = iVar3 + 1;
                  sVar1 = local_28;
                } while (iVar3 < local_28);
              }
              psVar8 = (short *)((int)local_1c + local_14);
              local_20 = local_20 + 1;
              iVar4 = local_10;
              iVar3 = local_18;
              local_1c = psVar8;
            } while (local_20 < local_2a);
          }
          break;
        case 4:
          FUN_004c3fa0((byte *)s_converting_from_24_to_16_bits_005b5ff8);
          local_20 = 0;
          if (0 < *(int *)(DAT_00740d44 + 0xc + iVar3)) {
            iVar7 = iVar3 + 8;
            iVar6 = DAT_00740d44;
            do {
              iVar3 = 0;
              if (0 < *(int *)(iVar7 + iVar6)) {
                iVar7 = local_18 + 8;
                do {
                  FUN_00558b35((char *)&local_c,1,1,(int *)pFVar2);
                  FUN_00558b35(&local_2b,1,1,(int *)pFVar2);
                  FUN_00558b35((char *)&param_2,1,1,(int *)pFVar2);
                  uVar5 = FUN_004c81b0((uint)CONCAT11((undefined1)param_2,local_2b) << 8 |
                                       local_c & 0xff,0x18);
                  *psVar8 = (short)uVar5;
                  psVar8 = psVar8 + 1;
                  iVar3 = iVar3 + 1;
                  iVar6 = DAT_00740d44;
                } while (iVar3 < *(int *)(iVar7 + DAT_00740d44));
              }
              psVar8 = (short *)((int)local_1c + local_14);
              local_20 = local_20 + 1;
              iVar4 = local_10;
              iVar3 = local_18;
              local_1c = psVar8;
            } while (local_20 < *(int *)(local_18 + 0xc + iVar6));
          }
        }
        FUN_004cc060(iVar4);
        if ((pFVar2->_flag & 0x20) != 0) {
          DAT_00740d50 = 0;
          FUN_005588fd(pFVar2);
          return 0x3e9;
        }
        local_10 = iVar4 + 1;
        local_18 = iVar3 + 0x20;
      } while (local_10 < DAT_005b5ea8);
    }
    FUN_004c3fa0((byte *)s__s_allocating_images_done_005b6054);
  }
  FUN_005588fd(pFVar2);
  DAT_00740d50 = 1;
  return 0;
}


