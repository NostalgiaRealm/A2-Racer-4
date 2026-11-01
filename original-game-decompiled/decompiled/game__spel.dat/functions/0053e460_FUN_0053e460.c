
/* ==== FUN_0053e460 @ 0053e460 ==== 
 * signature: undefined __cdecl FUN_0053e460(undefined1 * param_1, void * param_2)
 * body: 0053e460-0053e5d4
 */

void __cdecl FUN_0053e460(undefined1 *param_1,void *param_2)

{
  float *pfVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  float *pfVar13;
  int local_14;
  
  uVar3 = FUN_0053e740((int)param_1);
  iVar9 = CONCAT22(extraout_var,uVar3);
  piVar5 = *(int **)((int)param_2 + 8);
  uVar4 = (int)piVar5 + iVar9 * 4 + 0x1f & 0xffffffe0;
  if (uVar4 < *(uint *)((int)param_2 + 0xc)) {
    *(uint *)((int)param_2 + 8) = uVar4;
  }
  else {
    piVar5 = (int *)FUN_004f5be0(param_2,iVar9 * 4);
  }
  FUN_00559400();
  iVar6 = *(ushort *)(param_1 + 2) - 1;
  if (-1 < iVar6) {
    puVar7 = (undefined4 *)(&stack0xffffffdc + iVar6 * 0x10);
    do {
      piVar5[iVar6] = *(int *)(*(int *)(param_1 + 4) + iVar6 * 4);
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      iVar6 = iVar6 + -1;
      puVar7 = puVar7 + -4;
    } while (-1 < iVar6);
  }
  param_1 = &stack0xffffffd4;
  if (iVar9 != 1 && -1 < iVar9 + -1) {
    local_14 = 1;
    piVar11 = piVar5;
    do {
      iVar6 = *piVar11;
      if (local_14 < iVar9) {
        iVar8 = iVar9 - local_14;
        piVar12 = piVar11;
        puVar10 = param_1;
        do {
          puVar10 = puVar10 + 0x10;
          piVar12 = piVar12 + 1;
          pfVar13 = *(float **)(iVar6 + 0x40);
          pfVar1 = *(float **)(*piVar12 + 0x40);
          if (ABS(ABS(*pfVar13 * *pfVar1 + pfVar13[1] * pfVar1[1] + pfVar13[2] * pfVar1[2]) - 1.0) <
              0.001) {
            FUN_0053e1e0(*piVar12,iVar6,puVar10,param_1,1.0 / ((double)iVar9 + 1e-19));
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      piVar11 = piVar11 + 1;
      param_1 = param_1 + 0x10;
      bVar2 = local_14 < iVar9 + -1;
      local_14 = local_14 + 1;
    } while (bVar2);
  }
  pfVar13 = (float *)&stack0xffffffd4;
  if (0 < iVar9) {
    do {
      FUN_0053e180((void *)*piVar5,pfVar13);
      piVar5 = piVar5 + 1;
      pfVar13 = pfVar13 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}


