
/* ==== FUN_00515c30 @ 00515c30 ==== 
 * signature: undefined __cdecl FUN_00515c30(uint param_1, uint param_2, uint param_3, int * param_4)
 * body: 00515c30-00515fa6
 */

void __cdecl FUN_00515c30(uint param_1,uint param_2,uint param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_4;
  
  uVar2 = param_2;
  bVar1 = false;
  uVar3 = FUN_00515690(param_3,*(int *)(param_1 + 0x34),DAT_0074c03c,1,
                       *(uint *)(*(int *)(param_1 + 0x34) + 4 + param_2 * 4));
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchneighbor__newfacet_f_d_s_005ba88c);
  }
  DAT_0074ca60 = DAT_0074ca60 + 1;
  uVar7 = uVar3 + 1;
  uVar8 = *(uint *)(DAT_0074c6e8 + uVar7 * 4);
  uVar5 = uVar3;
  iVar6 = DAT_0074c6e8;
  if (uVar8 != 0) {
    do {
      if (uVar8 == param_1) {
        bVar1 = true;
      }
      else {
        DAT_0074ca78 = DAT_0074ca78 + 1;
        iVar4 = FUN_00516220(1,*(int *)(param_1 + 0x34),uVar2,*(int *)(uVar8 + 0x34),&param_2,
                             &local_4);
        iVar6 = DAT_0074c6e8;
        if (iVar4 != 0) {
          if (*(int *)(*(int *)(param_1 + 0x34) + 4 + uVar2 * 4) ==
              *(int *)(*(int *)(uVar8 + 0x34) + 4 + param_2 * 4)) {
            FUN_00526a20();
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__Vertex_se_005ba7d4);
            FUN_005258d0(3,uVar8,param_1);
          }
          uVar7 = *(uint *)(*(int *)(uVar8 + 0x3c) + 4 + param_2 * 4);
          if ((local_4 == ((*(uint *)(param_1 + 0x50) ^ *(uint *)(uVar8 + 0x50)) >> 0xb & 1)) &&
             (uVar7 == 0)) {
            *(uint *)(*(int *)(uVar8 + 0x3c) + 4 + param_2 * 4) = param_1;
            *(uint *)(*(int *)(param_1 + 0x3c) + 4 + uVar2 * 4) = uVar8;
            *param_4 = *param_4 + -1;
            if (DAT_0074be68 < 4) {
              return;
            }
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchneighbor__f_d_skip__d_ma_005ba798);
            return;
          }
          if ((DAT_0074bed8 == 0) && (DAT_0074be90 == 0)) {
            FUN_00526a20();
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__facets_f__005ba700);
            FUN_005258d0(3,uVar8,param_1);
          }
          *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4 + uVar2 * 4) = 1;
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x100000;
          if (*(int *)(param_1 + 0x18) == 0) {
            FUN_00528970(param_1);
          }
          FUN_00516860(param_1,DAT_0074c6e8,param_3,uVar3);
          *param_4 = *param_4 + 1;
          if (*(int *)(uVar8 + 0x18) == 0) {
            FUN_00528970(uVar8);
          }
          if (uVar7 != 1) {
            *(undefined4 *)(*(int *)(uVar8 + 0x3c) + 4 + param_2 * 4) = 1;
            *(uint *)(uVar8 + 0x50) = *(uint *)(uVar8 + 0x50) | 0x100000;
            if (*(int *)(uVar8 + 0x18) == 0) {
              FUN_00528970(uVar8);
            }
            if (uVar7 != 0) {
              iVar6 = FUN_005146b0(*(int **)(uVar7 + 0x3c),uVar8);
              *(undefined4 *)(*(int *)(uVar7 + 0x3c) + 4 + iVar6 * 4) = 1;
              *(uint *)(uVar7 + 0x50) = *(uint *)(uVar7 + 0x50) | 0x100000;
              if (*(int *)(uVar7 + 0x18) == 0) {
                FUN_00528970(uVar7);
              }
              FUN_00516860(uVar7,DAT_0074c6e8,param_3,uVar3);
              *param_4 = *param_4 + 2;
            }
          }
          if (DAT_0074be68 < 4) {
            return;
          }
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchneighbor__new_f_d_skip___005ba698);
          return;
        }
      }
      uVar5 = ((int)param_3 <= (int)uVar7) - 1 & uVar7;
      uVar8 = *(uint *)(iVar6 + 4 + uVar5 * 4);
      uVar7 = uVar5 + 1;
    } while (uVar8 != 0);
    if (bVar1) goto LAB_00515d1b;
  }
  *(uint *)(iVar6 + 4 + uVar5 * 4) = param_1;
LAB_00515d1b:
  *param_4 = *param_4 + 1;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchneighbor__no_match_for_f_005ba854);
  }
  return;
}


