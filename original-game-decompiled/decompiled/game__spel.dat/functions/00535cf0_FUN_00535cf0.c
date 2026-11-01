
/* ==== FUN_00535cf0 @ 00535cf0 ==== 
 * signature: undefined __cdecl FUN_00535cf0(int param_1)
 * body: 00535cf0-00535e77
 */

void __cdecl FUN_00535cf0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  iVar2 = param_1;
  uVar8 = 0;
  bVar1 = false;
  if ((*(uint *)(param_1 + 0x50) & 0x1000) != 0) {
    if (3 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_makeridges__make_ridges_for_f_005c5de0);
    }
    iVar6 = *(int *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffffefff;
    if (iVar6 != 0) {
      piVar7 = (int *)(iVar6 + 4);
      iVar6 = *(int *)(iVar6 + 4);
      while (iVar6 != 0) {
        piVar7 = piVar7 + 1;
        if (iVar6 == 2) {
          bVar1 = true;
        }
        else {
          *(uint *)(iVar6 + 0x50) = *(uint *)(iVar6 + 0x50) & 0xffffdfff;
        }
        iVar6 = *piVar7;
      }
    }
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 != 0) {
      piVar7 = (int *)(iVar6 + 4);
      iVar6 = *(int *)(iVar6 + 4);
      while (iVar6 != 0) {
        piVar7 = piVar7 + 1;
        iVar3 = *(int *)(iVar6 + 4);
        if (iVar3 == param_1) {
          iVar3 = *(int *)(iVar6 + 8);
        }
        *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 0x2000;
        iVar6 = *piVar7;
      }
    }
    piVar7 = *(int **)(param_1 + 0x3c);
    if (piVar7 != (int *)0x0) {
      iVar6 = piVar7[1];
      iVar3 = FUN_00514af0(piVar7);
      if (0 < iVar3) {
        param_1 = 4;
        do {
          if ((iVar6 != 2) && ((*(uint *)(iVar6 + 0x50) & 0x2000) == 0)) {
            puVar4 = FUN_005163f0();
            uVar5 = FUN_00514880(*(int **)(iVar2 + 0x34),DAT_0074c03c,uVar8,0);
            *puVar4 = uVar5;
            if ((*(uint *)(iVar2 + 0x50) >> 0xb & 1) == (uVar8 & 1)) {
              puVar4[1] = iVar6;
              puVar4[2] = iVar2;
            }
            else {
              puVar4[1] = iVar2;
              puVar4[2] = iVar6;
            }
            FUN_00514020((int *)(iVar2 + 0x38),(int)puVar4);
            FUN_00514020((int *)(iVar6 + 0x38),(int)puVar4);
          }
          uVar8 = uVar8 + 1;
          param_1 = param_1 + 4;
          iVar6 = *(int *)(*(int *)(iVar2 + 0x3c) + param_1);
        } while ((int)uVar8 < iVar3);
      }
    }
    if (bVar1) {
      iVar6 = FUN_00514280(*(int **)(iVar2 + 0x3c),2);
      while (iVar6 != 0) {
        iVar6 = FUN_00514280(*(int **)(iVar2 + 0x3c),2);
      }
    }
  }
  return;
}


