
/* ==== FUN_00544cc0 @ 00544cc0 ==== 
 * signature: undefined __thiscall FUN_00544cc0(void * this, double param_1)
 * body: 00544cc0-00544d6e
 */

void __thiscall FUN_00544cc0(void *this,double param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    do {
      iVar2 = iVar3 * 8;
      pdVar4 = (double *)(*(int *)((int)this + 0x34) + iVar2);
      *pdVar4 = param_1 * *(double *)(iVar2 + *(int *)((int)this + 0x38)) + *pdVar4;
      pdVar4 = (double *)(*(int *)((int)this + 0x2c) + iVar2);
      iVar3 = iVar3 + 1;
      *pdVar4 = param_1 * *(double *)(*(int *)((int)this + 0x30) + iVar2) + *pdVar4;
    } while (iVar3 < *(int *)((int)this + 0x4c));
  }
  iVar3 = *(int *)((int)this + 0x54);
  if (iVar3 < *(int *)((int)this + 0x5c)) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0x44) + iVar3 * 4);
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x34) + iVar2 * 8);
      if (*(double *)(*(int *)((int)this + 0x34) + iVar2 * 8) < 0.0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x5c));
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x54)) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0x44) + iVar3 * 4);
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x2c) + iVar2 * 8);
      if (*(double *)(*(int *)((int)this + 0x2c) + iVar2 * 8) < 0.0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x54));
  }
  return;
}


