
/* ==== FUN_00544d70 @ 00544d70 ==== 
 * signature: undefined4 __fastcall FUN_00544d70(int param_1)
 * body: 00544d70-00544f4c
 */

undefined4 __fastcall FUN_00544d70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_14;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      iVar1 = *(int *)(param_1 + 0x30);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar1 + -8 + iVar4 * 8) = 0;
      *(undefined4 *)(iVar1 + -4 + iVar4 * 8) = 0;
    } while (iVar4 < *(int *)(param_1 + 0x50));
  }
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x5c) * 4);
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar4 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *(double *)(*(int *)(param_1 + 0x98) + -8 + iVar5 * 8) =
               -*(double *)
                 (*(int *)(param_1 + 0x20) +
                 (*(int *)(*(int *)(param_1 + 0x44) + iVar4) * *(int *)(param_1 + 0x50) + iVar1) * 8
                 );
        } while (iVar5 < *(int *)(param_1 + 0x54));
      }
      FUN_00546510(param_1 + 0x80);
      uVar6 = 1;
    }
    else {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      *(int *)(param_1 + 0xb8) = iVar4;
      *(uint *)(param_1 + 0xbc) = iVar4 + 1U & 0xfffffffe;
      iVar4 = *(int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x5c) * 4);
      local_14 = 0;
      if (0 < *(int *)(param_1 + 0x54)) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x44) + local_14 * 4);
          *(double *)(*(int *)(param_1 + 0xc4) + local_14 * 8) =
               -*(double *)
                 (*(int *)(param_1 + 0x20) + (iVar1 * *(int *)(param_1 + 0x50) + iVar4) * 8);
          iVar5 = 0;
          if (0 < *(int *)(param_1 + 0x54)) {
            do {
              iVar2 = *(int *)(param_1 + 0xc0);
              iVar9 = *(int *)(*(int *)(param_1 + 0x44) + iVar5 * 4) +
                      iVar1 * *(int *)(param_1 + 0x50);
              iVar3 = *(int *)(param_1 + 0x20);
              iVar8 = *(int *)(param_1 + 0xbc) * local_14 + iVar5;
              iVar5 = iVar5 + 1;
              *(undefined4 *)(iVar2 + iVar8 * 8) = *(undefined4 *)(iVar3 + iVar9 * 8);
              *(undefined4 *)(iVar2 + 4 + iVar8 * 8) = *(undefined4 *)(iVar3 + 4 + iVar9 * 8);
            } while (iVar5 < *(int *)(param_1 + 0x54));
          }
          local_14 = local_14 + 1;
        } while (local_14 < *(int *)(param_1 + 0x54));
      }
      uVar6 = FUN_00543ae0((double *)(param_1 + 0xb0));
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x54)) {
        do {
          puVar7 = (undefined4 *)(iVar4 * 8 + *(int *)(param_1 + 0x9c));
          puVar10 = (undefined4 *)(iVar4 * 8 + *(int *)(param_1 + 200));
          iVar4 = iVar4 + 1;
          *puVar7 = *puVar10;
          puVar7[1] = puVar10[1];
        } while (iVar4 < *(int *)(param_1 + 0x54));
      }
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        iVar5 = *(int *)(param_1 + 0x9c);
        iVar2 = *(int *)(param_1 + 0x30);
        iVar3 = *(int *)(*(int *)(param_1 + 0x44) + iVar4 * 4);
        iVar1 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar2 + iVar3 * 8) = *(undefined4 *)(iVar5 + iVar1);
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = *(undefined4 *)(iVar5 + -4 + iVar4 * 8);
      } while (iVar4 < *(int *)(param_1 + 0x54));
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x5c) * 4);
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar1 + iVar4 * 8) = 0;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = 0x3ff00000;
    return uVar6;
  }
  return 1;
}


