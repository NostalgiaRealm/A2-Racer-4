
/* ==== FUN_00543a50 @ 00543a50 ==== 
 * signature: undefined __thiscall FUN_00543a50(void * this, int param_1, int param_2, double param_3)
 * body: 00543a50-00543adc
 */

void __thiscall FUN_00543a50(void *this,int param_1,int param_2,double param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 0x10);
  uVar6 = iVar3 + (iVar2 + 1) * param_1 * 8;
  pdVar7 = (double *)(uVar6 & 0xfffffff0);
  iVar4 = (((int)(uVar6 - (int)pdVar7) >> 3) + *(int *)((int)this + 8)) - param_1;
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (0 < iVar4)) {
    uVar6 = iVar4 + 1U >> 1;
    pdVar8 = (double *)(iVar3 + (iVar2 * param_2 + param_1) * 8 & 0xfffffff0);
    do {
      dVar1 = pdVar7[1];
      uVar6 = uVar6 - 1;
      *pdVar8 = param_3 * *pdVar7 + *pdVar8;
      pdVar8[1] = param_3 * dVar1 + pdVar8[1];
      pdVar7 = pdVar7 + 2;
      pdVar8 = pdVar8 + 2;
    } while (uVar6 != 0);
  }
  iVar2 = *(int *)((int)this + 0x14);
  *(double *)(iVar2 + param_2 * 8) =
       param_3 * *(double *)(iVar2 + param_1 * 8) + *(double *)(iVar2 + param_2 * 8);
  return;
}


