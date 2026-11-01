
/* ==== FUN_00519820 @ 00519820 ==== 
 * signature: undefined __cdecl FUN_00519820(int * param_1, uint param_2, uint param_3, int * param_4)
 * body: 00519820-00519c35
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00519820(int *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int local_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  double local_18;
  double local_10;
  
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_20 = 0xffffffff;
  uStack_1c = 0xffefffff;
  uVar7 = FUN_00515690(param_3,param_1[0xd],DAT_0074c03c,1,*(uint *)(param_1[0xd] + 4 + param_2 * 4)
                      );
  local_4c = uVar7;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchduplicates__find_duplica_005bc4e0);
  }
  local_54 = 0;
  do {
    DAT_0074c6d0 = DAT_0074c6d0 + 1;
    piVar5 = param_1;
    uVar6 = param_2;
    piVar4 = local_48;
    while (uVar3 = uVar6, piVar2 = piVar5, local_48 = piVar4, piVar2 != (int *)0x0) {
      DAT_0074ca60 = DAT_0074ca60 + 1;
      piVar2[0x12] = DAT_0074c6d0;
      local_3c = (int *)0x0;
      piVar1 = *(int **)(DAT_0074c6e8 + 4 + uVar7 * 4);
      local_40 = uVar7;
      while (piVar5 = local_3c, uVar6 = local_38, uVar7 = local_4c, piVar4 = local_48,
            piVar1 != (int *)0x0) {
        if (((piVar1[0x14] & 0x100000U) != 0) && (piVar1[0x12] != DAT_0074c6d0)) {
          DAT_0074ca78 = DAT_0074ca78 + 1;
          iVar8 = FUN_00516220(1,piVar2[0xd],uVar3,piVar1[0xd],&local_50,&local_2c);
          piVar4 = local_3c;
          uVar7 = local_38;
          if (iVar8 == 0) {
LAB_00519a1d:
            local_38 = uVar7;
            local_3c = piVar4;
            if (local_54 == 0) goto LAB_00519a5d;
          }
          else {
            if (*(int *)(piVar1[0xf] + 4 + local_50 * 4) == 1) {
              piVar4 = piVar1;
              uVar7 = local_50;
              if (local_2c == ((uint)(piVar2[0x14] ^ piVar1[0x14]) >> 0xb & 1)) {
                if (local_54 == 0) {
                  fVar9 = FUN_00528490((int)piVar1,(int)piVar2,&local_10,&local_18);
                  local_28 = (double)fVar9;
                  fVar9 = FUN_00528490((int)piVar2,(int)piVar1,&local_10,&local_18);
                  if (fVar9 < (float10)local_28) {
                    local_28 = (double)fVar9;
                  }
                  if ((double)CONCAT44(uStack_1c,local_20) < local_28) {
                    local_20 = (undefined4)local_28;
                    uStack_1c = local_28._4_4_;
                    local_34 = local_50;
                    local_48 = piVar1;
                    local_44 = piVar2;
                    local_30 = uVar3;
                  }
                  if (2 < DAT_0074be68) {
                    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchduplicates__duplicate_f__005bc278);
                  }
                  goto LAB_00519a5d;
                }
                piVar4 = local_3c;
                uVar7 = local_38;
                if (*(int *)(piVar2[0xf] + 4 + uVar3 * 4) == 1) {
                  *(int **)(piVar1[0xf] + 4 + local_50 * 4) = piVar2;
                  *(undefined4 *)(piVar2[0xf] + 4 + uVar3 * 4) = 2;
                  *param_4 = *param_4 + -2;
                  if (3 < DAT_0074be68) {
                    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchduplicates__duplicate_f__005bc428);
                    piVar4 = local_3c;
                    uVar7 = local_38;
                  }
                }
              }
              goto LAB_00519a1d;
            }
            if (local_54 == 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_matchdu_005bc478);
              FUN_005258d0(5,piVar1,piVar2);
              goto LAB_00519a5d;
            }
          }
          if ((piVar1 == (int *)0x0) && (*(int *)(_DAT_0000003c + 4 + local_50 * 4) == 1)) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_matchdu_005bc3c0);
            FUN_0051e8e0(5,piVar2);
          }
        }
LAB_00519a5d:
        local_40 = local_40 + 1 & ((int)param_3 <= (int)(local_40 + 1)) - 1;
        piVar1 = *(int **)(DAT_0074c6e8 + 4 + local_40 * 4);
      }
    }
    if (local_54 == 0) {
      if (piVar4 == (int *)0x0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_matchdu_005bc35c);
        FUN_0051e8e0(5,param_1);
      }
      piVar5 = local_44;
      *(int **)(piVar4[0xf] + 4 + local_34 * 4) = local_44;
      *(int **)(local_44[0xf] + 4 + local_30 * 4) = piVar4;
      *param_4 = *param_4 + -2;
      DAT_0074cb80 = DAT_0074cb80 + 1;
      if (DAT_0074be68 != 0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchduplicates__duplicate_f__005bc30c);
      }
      FUN_00526a20();
      if (3 < DAT_0074be68) {
        FUN_0051eb30(s_DUPLICATED_MATCH_005bc2d8,(uint)piVar4,(uint)piVar5,(int *)0x0,0);
      }
    }
    local_54 = local_54 + 1;
    if (1 < local_54) {
      return;
    }
  } while( true );
}


