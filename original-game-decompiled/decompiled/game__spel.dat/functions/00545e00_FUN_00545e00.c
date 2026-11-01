
/* ==== FUN_00545e00 @ 00545e00 ==== 
 * signature: undefined __thiscall FUN_00545e00(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * body: 00545e00-00545f22
 */

void __thiscall
FUN_00545e00(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  
  iVar7 = *(int *)((int)this + 0xc);
  iVar4 = *(int *)((int)this + 0x28) * param_2;
  dVar3 = -(double)CONCAT44(param_4,param_3);
  iVar9 = *(int *)((int)this + 0x28) * param_1;
  iVar10 = iVar4 + param_1;
  uVar6 = iVar7 + 8 + (iVar9 + param_1) * 8;
  pdVar8 = (double *)(uVar6 & 0xfffffff0);
  iVar1 = (((int)(uVar6 - (int)pdVar8) >> 3) - param_1) + -1 + *(int *)((int)this + 0x2c);
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (0 < iVar1)) {
    uVar6 = iVar1 + 1U >> 1;
    pdVar11 = (double *)(iVar7 + 8 + iVar10 * 8 & 0xfffffff0);
    do {
      dVar2 = pdVar8[1];
      uVar6 = uVar6 - 1;
      *pdVar11 = dVar3 * *pdVar8 + *pdVar11;
      pdVar11[1] = dVar3 * dVar2 + pdVar11[1];
      pdVar8 = pdVar8 + 2;
      pdVar11 = pdVar11 + 2;
    } while (uVar6 != 0);
  }
  iVar1 = *(int *)((int)this + 8);
  uVar6 = iVar1 + iVar9 * 8;
  pdVar8 = (double *)(uVar6 & 0xfffffff0);
  iVar7 = ((int)(uVar6 - (int)pdVar8) >> 3) + *(int *)((int)this + 0x2c);
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (0 < iVar7)) {
    uVar6 = iVar7 + 1U >> 1;
    pdVar11 = (double *)(iVar1 + iVar4 * 8 & 0xfffffff0);
    do {
      dVar2 = pdVar8[1];
      uVar6 = uVar6 - 1;
      *pdVar11 = dVar3 * *pdVar8 + *pdVar11;
      pdVar11[1] = dVar3 * dVar2 + pdVar11[1];
      pdVar8 = pdVar8 + 2;
      pdVar11 = pdVar11 + 2;
    } while (uVar6 != 0);
  }
  iVar1 = *(int *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
  *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
  return;
}


