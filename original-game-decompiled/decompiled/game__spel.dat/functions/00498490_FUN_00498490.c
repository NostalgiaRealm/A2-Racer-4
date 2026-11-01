
/* ==== FUN_00498490 @ 00498490 ==== 
 * signature: undefined __fastcall FUN_00498490(int * param_1)
 * body: 00498490-004984ca;004984ce-004986ea;004986ee-00498757
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004984cb-004984cd 004986eb-004986ed
 */

void __fastcall FUN_00498490(int *param_1)

{
  byte bVar1;
  void *pvVar2;
  int *piVar3;
  byte *pbVar4;
  LPCSTR pCVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  short asStack_20 [2];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_004c3fa0((byte *)s_Creating_the_texture_detail_list_005ae170);
  pvVar2 = operator_new(*param_1 << 2);
  param_1[5] = (int)pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Could_not_allocate_textu_005ae1f8);
  }
  iVar6 = 0;
  if (0 < *param_1) {
    iVar9 = 0;
    do {
      *(undefined4 *)(param_1[5] + iVar9) = 0xffffffff;
      piVar3 = (int *)FUN_00468530(param_1 + 2,&local_1c);
      iStack_30 = *piVar3;
      iVar7 = iVar6;
      if (0 < iVar9) {
        do {
          FUN_00448fd0(&iStack_30,&uStack_18);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      pbVar4 = *(byte **)(*(int *)(iStack_30 + 8) + 4);
      pbVar8 = PTR_s_CACHED_PIPELINE_1_005addd8;
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = &DAT_0057629c;
      }
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00498552:
          iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00498557;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00498552;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00498557:
      if (iVar7 == 0) {
LAB_00498737:
        *(undefined4 *)(param_1[5] + iVar9) = 0x100;
      }
      else {
        piVar3 = (int *)FUN_00468530(param_1 + 2,&uStack_14);
        iStack_2c = *piVar3;
        iVar7 = iVar6;
        if (0 < iVar9) {
          do {
            FUN_00448fd0(&iStack_2c,&uStack_10);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        pbVar4 = *(byte **)(*(int *)(iStack_2c + 8) + 4);
        pbVar8 = PTR_s_CACHED_PIPELINE_2_005adddc;
        if (pbVar4 == (byte *)0x0) {
          pbVar4 = &DAT_0057629c;
        }
        do {
          bVar1 = *pbVar4;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_004985c8:
            iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_004985cd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_004985c8;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_004985cd:
        if (iVar7 == 0) goto LAB_00498737;
        piVar3 = (int *)FUN_00468530(param_1 + 2,&uStack_c);
        iStack_28 = *piVar3;
        iVar7 = iVar6;
        if (0 < iVar9) {
          do {
            FUN_00448fd0(&iStack_28,&uStack_8);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        pCVar5 = *(LPCSTR *)(*(int *)(iStack_28 + 8) + 4);
        if (pCVar5 == (LPCSTR)0x0) {
          pCVar5 = "";
        }
        piVar3 = FUN_004c62c0(pCVar5);
        FUN_004c6160(piVar3,0xc,0);
        FUN_00558b35((char *)&uStack_34,2,1,piVar3);
        FUN_00558b35((char *)asStack_20,2,1,piVar3);
        if ((short)uStack_34 == asStack_20[0]) {
          iVar7 = FUN_004c1080(0x73b258);
          if ((iVar7 != 0) && (iVar7 = FUN_004c1080(0x73b258), iVar7 < (int)(uStack_34 & 0xffff))) {
            iStack_24 = *(int *)param_1[3];
            if (0 < iVar9) {
              do {
                FUN_00448fd0(&iStack_24,&uStack_4);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            FUN_004c1080(0x73b258);
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s___s___d_The_texture__s_violates_t_005ae25c);
          }
          iVar7 = iVar6;
          if (0 < iVar9) {
            do {
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_004c3fa0((byte *)s_Added_single_size_texture__s_wit_005ae2b8);
          *(uint *)(param_1[5] + iVar9) = uStack_34 & 0xffff;
        }
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar6 < *param_1);
  }
  return;
}


