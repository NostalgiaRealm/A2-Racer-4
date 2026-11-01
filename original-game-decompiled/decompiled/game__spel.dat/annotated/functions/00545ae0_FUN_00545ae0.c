
/* ==== FUN_00545ae0 @ 00545ae0 ==== 
 * signature: undefined4 __thiscall FUN_00545ae0(void * this, int param_1)
 * body: 00545ae0-00545b7d
 */

undefined4 __thiscall FUN_00545ae0(void *this,int param_1)

{
  uint uVar1;
  double dVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  
  uVar1 = *(int *)((int)this + 8) + *(int *)((int)this + 0x28) * param_1 * 8;
  dVar2 = *(double *)(uVar1 + param_1 * 8);
  if (*(double *)this <= ABS(dVar2)) {
    dVar2 = 1.0 / dVar2;
    iVar5 = ((int)(uVar1 - (int)(uVar1 & 0xfffffff0)) >> 3) + *(int *)((int)this + 0x2c);
    piVar3 = (int *)FUN_004f8370();
    if ((*piVar3 == 0) && (0 < iVar5)) {
      uVar4 = iVar5 + 1U >> 1;
      pdVar6 = (double *)(uVar1 & 0xfffffff0);
      do {
        uVar4 = uVar4 - 1;
        *pdVar6 = dVar2 * *pdVar6;
        pdVar6[1] = dVar2 * pdVar6[1];
        pdVar6 = pdVar6 + 2;
      } while (uVar4 != 0);
    }
    *(undefined4 *)(uVar1 + param_1 * 8) = 0;
    *(undefined4 *)(uVar1 + 4 + param_1 * 8) = 0x3ff00000;
    return 1;
  }
  return 0;
}


