
/* ==== FUN_00545530 @ 00545530 ==== 
 * signature: undefined4 __thiscall FUN_00545530(void * this, int * param_1, double * param_2)
 * body: 00545530-00545840
 */

undefined4 __thiscall FUN_00545530(void *this,int *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  double local_10;
  
  iVar5 = *(int *)((int)this + 8);
  iVar12 = 0;
  *(undefined4 *)param_2 = 0;
  local_38 = 0;
  local_20 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0x3ff00000;
  if (0 < iVar5) {
    local_34 = 0;
    do {
      dVar1 = 0.0;
      pdVar11 = (double *)(*(int *)((int)this + 0x10) + local_34);
      iVar9 = iVar5;
      do {
        if (dVar1 < ABS(*pdVar11)) {
          dVar1 = ABS(*pdVar11);
        }
        pdVar11 = pdVar11 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (dVar1 == 0.0) {
        dVar1 = 0.0;
      }
      else {
        dVar1 = 1.0 / dVar1;
      }
      *(double *)(*(int *)((int)this + 0x14) + iVar12 * 8) = dVar1;
      iVar12 = iVar12 + 1;
      local_34 = local_34 + iVar5 * 8;
    } while (iVar12 < iVar5);
  }
  local_40 = 0;
  if (0 < iVar5) {
    local_3c = 0;
    local_28 = param_1;
    local_34 = 0;
    iVar12 = iVar5 * 8;
    local_24 = iVar5;
    do {
      iVar9 = 0;
      if (0 < local_3c) {
        local_30 = 0;
        iVar6 = local_3c;
        do {
          iVar10 = *(int *)((int)this + 0x10);
          dVar1 = *(double *)(iVar6 + iVar10);
          if (0 < iVar9) {
            pdVar8 = (double *)(local_3c + iVar10);
            pdVar11 = (double *)(local_30 + iVar10);
            iVar7 = iVar9;
            do {
              dVar2 = *pdVar11;
              dVar3 = *pdVar8;
              pdVar11 = pdVar11 + 1;
              pdVar8 = pdVar8 + iVar5;
              iVar7 = iVar7 + -1;
              dVar1 = dVar1 - dVar2 * dVar3;
            } while (iVar7 != 0);
          }
          *(double *)(iVar6 + iVar10) = dVar1;
          iVar9 = iVar9 + 1;
          local_30 = local_30 + iVar12;
          iVar6 = iVar6 + iVar12;
        } while (iVar9 < local_40);
      }
      local_10 = 0.0;
      if (local_40 < iVar5) {
        local_30 = local_34;
        iVar9 = (iVar5 + 1) * local_40 * 8;
        local_1c = local_40;
        do {
          iVar6 = *(int *)((int)this + 0x10);
          dVar1 = *(double *)(iVar9 + iVar6);
          if (0 < local_3c) {
            pdVar11 = (double *)(local_30 + iVar6);
            pdVar8 = (double *)(local_3c + iVar6);
            iVar10 = local_40;
            do {
              dVar2 = *pdVar11;
              dVar3 = *pdVar8;
              pdVar11 = pdVar11 + 1;
              pdVar8 = pdVar8 + iVar5;
              iVar10 = iVar10 + -1;
              dVar1 = dVar1 - dVar2 * dVar3;
            } while (iVar10 != 0);
          }
          *(double *)(iVar9 + iVar6) = dVar1;
          dVar1 = ABS(dVar1) * *(double *)(*(int *)((int)this + 0x14) + local_1c * 8);
          if (local_10 <= dVar1) {
            local_38 = local_1c;
            local_10 = dVar1;
          }
          local_1c = local_1c + 1;
          local_30 = local_30 + iVar12;
          iVar9 = iVar9 + iVar12;
        } while (local_1c < iVar5);
      }
      if (local_40 != local_38) {
        iVar9 = iVar5 * local_38 * 8;
        iVar6 = local_34;
        local_18 = iVar5;
        do {
          iVar10 = *(int *)((int)this + 0x10);
          uVar4 = *(undefined8 *)(iVar9 + iVar10);
          *(undefined4 *)(iVar9 + iVar10) = *(undefined4 *)(iVar6 + iVar10);
          *(undefined4 *)(iVar9 + 4 + iVar10) = *(undefined4 *)(iVar6 + 4 + iVar10);
          *(undefined8 *)(iVar6 + *(int *)((int)this + 0x10)) = uVar4;
          local_18 = local_18 + -1;
          iVar9 = iVar9 + 8;
          iVar6 = iVar6 + 8;
        } while (local_18 != 0);
        *param_2 = -*param_2;
        iVar9 = *(int *)((int)this + 0x14);
        *(undefined4 *)(iVar9 + local_38 * 8) = *(undefined4 *)(iVar9 + local_3c);
        *(undefined4 *)(iVar9 + 4 + local_38 * 8) = *(undefined4 *)(iVar9 + 4 + local_3c);
      }
      *local_28 = local_38;
      iVar9 = (iVar5 + 1) * local_40;
      if (*(double *)this <= ABS(*(double *)(*(int *)((int)this + 0x10) + iVar9 * 8))) {
        if (local_40 != iVar5 + -1) {
          dVar1 = *(double *)(*(int *)((int)this + 0x10) + iVar9 * 8);
          if (local_40 + 1 < iVar5) {
            iVar9 = (local_24 + local_40) * 8;
            iVar6 = iVar5 - (local_40 + 1);
            do {
              pdVar11 = (double *)(*(int *)((int)this + 0x10) + iVar9);
              iVar9 = iVar9 + iVar12;
              iVar6 = iVar6 + -1;
              *pdVar11 = (1.0 / dVar1) * *pdVar11;
            } while (iVar6 != 0);
          }
        }
      }
      else {
        local_20 = local_20 + 1;
      }
      local_34 = local_34 + iVar12;
      local_3c = local_3c + 8;
      local_40 = local_40 + 1;
      local_28 = local_28 + 1;
      local_24 = local_24 + iVar5;
    } while (local_40 < iVar5);
    if (local_20 != 0) {
      return 0;
    }
  }
  return 1;
}


