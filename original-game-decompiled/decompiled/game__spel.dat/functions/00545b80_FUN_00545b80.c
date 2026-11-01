
/* ==== FUN_00545b80 @ 00545b80 ==== 
 * signature: undefined4 __thiscall FUN_00545b80(void * this, int param_1)
 * body: 00545b80-00545c78
 */

undefined4 __thiscall FUN_00545b80(void *this,int param_1)

{
  int iVar1;
  double dVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  
  iVar5 = *(int *)((int)this + 0x28) * param_1;
  iVar1 = iVar5 + param_1;
  dVar2 = *(double *)(*(int *)((int)this + 0xc) + iVar1 * 8);
  if (*(double *)this <= ABS(dVar2)) {
    dVar2 = 1.0 / dVar2;
    uVar4 = *(int *)((int)this + 8) + iVar5 * 8;
    pdVar6 = (double *)(uVar4 & 0xfffffff0);
    iVar5 = ((int)(uVar4 - (int)pdVar6) >> 3) + *(int *)((int)this + 0x2c);
    piVar3 = (int *)FUN_004f8370();
    if ((*piVar3 == 0) && (0 < iVar5)) {
      uVar4 = iVar5 + 1U >> 1;
      do {
        uVar4 = uVar4 - 1;
        *pdVar6 = dVar2 * *pdVar6;
        pdVar6[1] = dVar2 * pdVar6[1];
        pdVar6 = pdVar6 + 2;
      } while (uVar4 != 0);
    }
    uVar4 = *(int *)((int)this + 0xc) + 8 + iVar1 * 8;
    pdVar6 = (double *)(uVar4 & 0xfffffff0);
    iVar5 = (((int)(uVar4 - (int)pdVar6) >> 3) - param_1) + -1 + *(int *)((int)this + 0x2c);
    piVar3 = (int *)FUN_004f8370();
    if ((*piVar3 == 0) && (0 < iVar5)) {
      uVar4 = iVar5 + 1U >> 1;
      do {
        uVar4 = uVar4 - 1;
        *pdVar6 = dVar2 * *pdVar6;
        pdVar6[1] = dVar2 * pdVar6[1];
        pdVar6 = pdVar6 + 2;
      } while (uVar4 != 0);
    }
    iVar5 = *(int *)((int)this + 0xc);
    *(undefined4 *)(iVar5 + iVar1 * 8) = 0;
    *(undefined4 *)(iVar5 + 4 + iVar1 * 8) = 0x3ff00000;
    return 1;
  }
  return 0;
}


