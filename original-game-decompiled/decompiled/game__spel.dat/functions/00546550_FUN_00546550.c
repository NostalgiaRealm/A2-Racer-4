
/* ==== FUN_00546550 @ 00546550 ==== 
 * signature: undefined __thiscall FUN_00546550(void * this, int param_1, int param_2, double param_3)
 * body: 00546550-005465c6
 */

void __thiscall FUN_00546550(void *this,int param_1,int param_2,double param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  
  iVar2 = *(int *)((int)this + 0x28);
  iVar3 = *(int *)((int)this + 8);
  uVar6 = iVar3 + iVar2 * param_1 * 8;
  pdVar8 = (double *)(uVar6 & 0xfffffff0);
  iVar4 = ((int)(uVar6 - (int)pdVar8) >> 3) + *(int *)((int)this + 0x2c);
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (0 < iVar4)) {
    uVar6 = iVar4 + 1U >> 1;
    pdVar7 = (double *)(iVar3 + iVar2 * param_2 * 8 & 0xfffffff0);
    do {
      dVar1 = pdVar8[1];
      uVar6 = uVar6 - 1;
      *pdVar7 = -param_3 * *pdVar8 + *pdVar7;
      pdVar7[1] = -param_3 * dVar1 + pdVar7[1];
      pdVar7 = pdVar7 + 2;
      pdVar8 = pdVar8 + 2;
    } while (uVar6 != 0);
  }
  return;
}


