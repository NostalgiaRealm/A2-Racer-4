
/* ==== FUN_00545900 @ 00545900 ==== 
 * signature: undefined4 __thiscall FUN_00545900(void * this, int * param_1)
 * body: 00545900-00545a88
 */

undefined4 __thiscall FUN_00545900(void *this,int *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)((int)this + 8);
  iVar9 = 0;
  local_8 = -1;
  if (0 < iVar4) {
    pdVar8 = *(double **)((int)this + 0x10);
    do {
      if (ABS(*pdVar8) < *(double *)this) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      pdVar8 = pdVar8 + iVar4 + 1;
    } while (iVar9 < iVar4);
  }
  iVar9 = 0;
  if (0 < iVar4) {
    local_c = 0;
    iVar11 = -1;
    do {
      iVar7 = *param_1;
      iVar10 = *(int *)((int)this + 0x14);
      dVar1 = *(double *)(iVar10 + iVar7 * 8);
      *(undefined4 *)(iVar10 + iVar7 * 8) = *(undefined4 *)(iVar10 + iVar9);
      *(undefined4 *)(iVar10 + 4 + iVar7 * 8) = *(undefined4 *)(iVar10 + 4 + iVar9);
      if (local_8 < 0) {
        if (dVar1 != 0.0) {
          local_8 = iVar11 + 2;
        }
      }
      else {
        iVar7 = local_8 + -1;
        if (iVar7 <= iVar11) {
          pdVar6 = (double *)(local_8 * 8 + -8 + *(int *)((int)this + 0x14));
          pdVar8 = (double *)(*(int *)((int)this + 0x10) + (local_c + iVar7) * 8);
          iVar7 = (iVar11 - iVar7) + 1;
          do {
            dVar2 = *pdVar8;
            dVar3 = *pdVar6;
            pdVar8 = pdVar8 + 1;
            pdVar6 = pdVar6 + 1;
            iVar7 = iVar7 + -1;
            dVar1 = dVar1 - dVar2 * dVar3;
          } while (iVar7 != 0);
        }
      }
      param_1 = param_1 + 1;
      pdVar8 = (double *)(iVar9 + *(int *)((int)this + 0x14));
      iVar9 = iVar9 + 8;
      *pdVar8 = dVar1;
      local_c = local_c + iVar4;
      iVar7 = iVar11 + 2;
      iVar11 = iVar11 + 1;
    } while (iVar7 < iVar4);
  }
  iVar9 = iVar4 + -1;
  if (-1 < iVar9) {
    iVar7 = iVar9 * iVar4;
    iVar11 = iVar4;
    do {
      dVar1 = *(double *)(*(int *)((int)this + 0x14) + iVar9 * 8);
      if (iVar11 < iVar4) {
        pdVar6 = (double *)(*(int *)((int)this + 0x14) + 8 + iVar9 * 8);
        pdVar8 = (double *)(*(int *)((int)this + 0x10) + (iVar7 + iVar11) * 8);
        iVar10 = iVar4 - iVar11;
        do {
          dVar2 = *pdVar8;
          dVar3 = *pdVar6;
          pdVar8 = pdVar8 + 1;
          pdVar6 = pdVar6 + 1;
          iVar10 = iVar10 + -1;
          dVar1 = dVar1 - dVar2 * dVar3;
        } while (iVar10 != 0);
      }
      iVar10 = (iVar4 + 1) * iVar9;
      iVar9 = iVar9 + -1;
      iVar11 = iVar11 + -1;
      *(double *)(*(int *)((int)this + 0x14) + 8 + iVar9 * 8) =
           dVar1 / *(double *)(*(int *)((int)this + 0x10) + iVar10 * 8);
      iVar10 = *(int *)((int)this + 0x14);
      iVar5 = *(int *)((int)this + 0x18);
      *(undefined4 *)(iVar5 + 8 + iVar9 * 8) = *(undefined4 *)(iVar10 + 8 + iVar9 * 8);
      *(undefined4 *)(iVar5 + 0xc + iVar9 * 8) = *(undefined4 *)(iVar10 + 0xc + iVar9 * 8);
      iVar7 = iVar7 - iVar4;
    } while (-1 < iVar9);
  }
  return 1;
}


