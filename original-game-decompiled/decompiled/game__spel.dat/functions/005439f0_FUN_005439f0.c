
/* ==== FUN_005439f0 @ 005439f0 ==== 
 * signature: undefined4 __thiscall FUN_005439f0(void * this, int param_1)
 * body: 005439f0-00543a4d
 */

undefined4 __thiscall FUN_005439f0(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  
  dVar3 = 0.0;
  iVar6 = *(int *)((int)this + 8);
  pdVar5 = (double *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc) * param_1 * 8);
  if (0 < iVar6) {
    pdVar4 = *(double **)((int)this + 0x18);
    do {
      dVar1 = *pdVar5;
      dVar2 = *pdVar4;
      pdVar5 = pdVar5 + 1;
      pdVar4 = pdVar4 + 1;
      iVar6 = iVar6 + -1;
      dVar3 = dVar1 * dVar2 + dVar3;
    } while (iVar6 != 0);
  }
  if (*(double *)(*(int *)((int)this + 0x14) + param_1 * 8) <=
      ABS(*(double *)(*(int *)((int)this + 0x14) + param_1 * 8) * 9.999999747378752e-06) + dVar3) {
    return 1;
  }
  return 0;
}


