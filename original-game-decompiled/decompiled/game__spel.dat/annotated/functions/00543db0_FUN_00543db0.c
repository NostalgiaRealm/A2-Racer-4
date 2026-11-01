
/* ==== FUN_00543db0 @ 00543db0 ==== 
 * signature: undefined __thiscall FUN_00543db0(void * this, int param_1, int * param_2, int param_3)
 * body: 00543db0-00543f4c
 */

void __thiscall FUN_00543db0(void *this,int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  if (param_3 != 0) {
    if (param_2[param_3 + -1] == param_3 + -1) {
      local_c = 0;
      if (0 < param_3) {
        local_18 = param_2;
        do {
          iVar7 = *(int *)((int)this + 0xc);
          local_14 = *(int *)(param_1 + 0x10) + *local_18 * *(int *)(param_1 + 0xc) * 8;
          puVar6 = (undefined4 *)(*(int *)((int)this + 0x10) + iVar7 * local_c * 8);
          piVar4 = (int *)FUN_004f8370();
          if ((*piVar4 == 0) && (-1 < iVar7 + -1)) {
            local_10 = iVar7 + 1U >> 1;
            do {
              iVar7 = 2;
              puVar5 = puVar6;
              do {
                *puVar5 = *(undefined4 *)((local_14 - (int)puVar6) + (int)puVar5);
                puVar5[1] = *(undefined4 *)((local_14 - (int)puVar6) + 4 + (int)puVar5);
                puVar5 = puVar5 + 2;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              puVar6 = puVar6 + 4;
              local_14 = local_14 + 0x10;
              local_10 = local_10 - 1;
            } while (local_10 != 0);
          }
          local_c = local_c + 1;
          iVar7 = *local_18;
          iVar1 = *(int *)(param_1 + 0x14);
          iVar2 = *(int *)((int)this + 0x14);
          *(undefined4 *)(iVar2 + -8 + local_c * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
          *(undefined4 *)(iVar2 + -4 + local_c * 8) = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
          local_18 = local_18 + 1;
        } while (local_c < param_3);
        return;
      }
    }
    else {
      iVar7 = 0;
      if (0 < param_3) {
        local_18 = param_2;
        do {
          iVar1 = *(int *)(param_1 + 0x10) + *local_18 * *(int *)(param_1 + 0xc) * 8;
          local_c = param_3;
          puVar6 = (undefined4 *)
                   (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc) * iVar7 * 8);
          piVar4 = param_2;
          do {
            iVar2 = *piVar4;
            piVar4 = piVar4 + 1;
            *puVar6 = *(undefined4 *)(iVar1 + iVar2 * 8);
            puVar6[1] = *(undefined4 *)(iVar1 + 4 + iVar2 * 8);
            local_c = local_c + -1;
            puVar6 = puVar6 + 2;
          } while (local_c != 0);
          iVar7 = iVar7 + 1;
          iVar1 = *local_18;
          iVar2 = *(int *)(param_1 + 0x14);
          iVar3 = *(int *)((int)this + 0x14);
          *(undefined4 *)(iVar3 + -8 + iVar7 * 8) = *(undefined4 *)(iVar2 + iVar1 * 8);
          *(undefined4 *)(iVar3 + -4 + iVar7 * 8) = *(undefined4 *)(iVar2 + 4 + iVar1 * 8);
          local_18 = local_18 + 1;
        } while (iVar7 < param_3);
      }
    }
  }
  return;
}


