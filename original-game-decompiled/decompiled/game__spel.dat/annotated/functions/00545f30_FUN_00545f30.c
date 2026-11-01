
/* ==== FUN_00545f30 @ 00545f30 ==== 
 * signature: undefined __thiscall FUN_00545f30(void * this, int param_1, int param_2, double param_3)
 * body: 00545f30-00545fc7
 */

void __thiscall FUN_00545f30(void *this,int param_1,int param_2,double param_3)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  
  uVar5 = *(int *)((int)this + 8) + *(int *)((int)this + 0x28) * param_1 * 8;
  uVar1 = *(int *)((int)this + 8) + *(int *)((int)this + 0x28) * param_2 * 8;
  uVar7 = uVar5 & 0xfffffff0;
  iVar3 = ((int)(uVar5 - uVar7) >> 3) + *(int *)((int)this + 0x2c);
  piVar4 = (int *)FUN_004f8370();
  if ((*piVar4 == 0) && (0 < iVar3)) {
    iVar8 = uVar7 - (int)(uVar1 & 0xfffffff0);
    uVar5 = iVar3 + 1U >> 1;
    pdVar6 = (double *)(uVar1 & 0xfffffff0);
    do {
      dVar2 = *(double *)(iVar8 + 8 + (int)pdVar6);
      uVar5 = uVar5 - 1;
      *pdVar6 = -param_3 * *(double *)(iVar8 + -0x10 + (int)(pdVar6 + 2)) + *pdVar6;
      pdVar6[1] = -param_3 * dVar2 + pdVar6[1];
      pdVar6 = pdVar6 + 2;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(uVar1 + param_1 * 8) = 0;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = 0;
  return;
}


