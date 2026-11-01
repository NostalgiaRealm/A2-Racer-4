
/* ==== FUN_00515880 @ 00515880 ==== 
 * signature: undefined4 * __cdecl FUN_00515880(int param_1, int param_2, int * param_3)
 * body: 00515880-00515ad6
 */

undefined4 * __cdecl FUN_00515880(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_c;
  undefined4 *local_8;
  uint local_4;
  
  iVar2 = *(int *)(param_1 + 0x38);
  puVar6 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(iVar2 + 4);
    local_8 = (undefined4 *)(iVar2 + 8);
    while (puVar3 != (undefined4 *)0x0) {
      local_4 = puVar3[3] & 0xffffff;
      iVar2 = puVar3[1];
      iVar7 = iVar2;
      if (iVar2 == param_1) {
        iVar7 = puVar3[2];
      }
      if ((*(uint *)(iVar7 + 0x50) & 0x400) == 0) {
        local_c = FUN_005147d0(DAT_0074c03c);
        FUN_00514020(&local_c,param_2);
        FUN_00514070(&local_c,(int *)*puVar3);
        puVar6 = FUN_005157a0(local_c,(uint)(iVar2 == param_1),iVar7);
        *param_3 = *param_3 + 1;
        if ((*(uint *)(iVar7 + 0x50) & 0x800000) != 0) {
          puVar6[0x14] = puVar6[0x14] | 0x1000000;
          if ((*(uint *)(iVar7 + 0x50) & 0x2000) == 0) {
            puVar6[8] = puVar6;
            *(undefined4 **)(iVar7 + 0x20) = puVar6;
          }
          else {
            iVar4 = *(int *)(iVar7 + 0x20);
            puVar6[8] = *(undefined4 *)(iVar4 + 0x20);
            *(undefined4 **)(iVar4 + 0x20) = puVar6;
          }
        }
        uVar5 = *(uint *)(iVar7 + 0x50);
        if (DAT_0074bec8 == 0) {
          if ((uVar5 & 0x2000) == 0) {
            FUN_00514a80(*(int **)(iVar7 + 0x3c),param_1,(int)puVar6);
          }
          else {
            if ((uVar5 & 0x1000) != 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_makenew_005ba5bc);
              FUN_005258d0(5,iVar7,param_1);
            }
            FUN_00514020((int *)(iVar7 + 0x3c),(int)puVar6);
          }
          if ((*(uint *)(iVar7 + 0x50) & 0x1000) == 0) {
            FUN_00514020(puVar6 + 0xe,(int)puVar3);
            if ((iVar2 == param_1) == 0) {
              puVar3[2] = puVar6;
            }
            else {
              puVar3[1] = puVar6;
            }
          }
          else {
            FUN_00514280(*(int **)(iVar7 + 0x38),(int)puVar3);
            FUN_005145f0(puVar3);
            FUN_0051e2b0(puVar3,0x10);
          }
          if (3 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_makenew_nonsimplicial__create_005ba56c);
          }
        }
        else if ((uVar5 & 0x1000) == 0) {
          FUN_00514020(puVar6 + 0xe,(int)puVar3);
        }
      }
      else if (((DAT_0074bec8 == 0) && (*(int *)(iVar7 + 0x48) == DAT_0074c6d0)) &&
              (FUN_005145f0(puVar3), puVar3 != (undefined4 *)0x0)) {
        DAT_0074c79c = DAT_0074c79c + 1;
        puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
        *puVar3 = *(undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
        *puVar1 = puVar3;
      }
      *(uint *)(iVar7 + 0x50) = *(uint *)(iVar7 + 0x50) | 0x2000;
      puVar3 = (undefined4 *)*local_8;
      local_8 = local_8 + 1;
    }
  }
  if (DAT_0074bec8 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 4) = 0;
  }
  return puVar6;
}


