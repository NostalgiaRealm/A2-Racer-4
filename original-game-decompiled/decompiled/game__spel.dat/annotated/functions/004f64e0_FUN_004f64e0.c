
/* ==== FUN_004f64e0 @ 004f64e0 ==== 
 * signature: undefined __thiscall FUN_004f64e0(void * this, int * param_1)
 * body: 004f64e0-004f65ba
 */

void __thiscall FUN_004f64e0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0xc))();
  if (*piVar2 <= *(int *)((int)this + 0x14)) {
    lVar6 = __ftol();
    for (iVar5 = (int)lVar6; -1 < iVar5; iVar5 = iVar5 + -1) {
      iVar1 = *(int *)((int)this + 0x10);
      iVar3 = FUN_004f6450(this,iVar1);
      *(int *)((int)this + 0x10) = iVar3;
      if (iVar1 == 0) {
        return;
      }
      uVar4 = FUN_004f3100(iVar1);
      if ((uVar4 == 0) && ((**(code **)(*param_1 + 4))(iVar1), *(int *)((int)this + 0x14) < *piVar2)
         ) {
        return;
      }
    }
    if (piVar2[2] <= *(int *)((int)this + 0x14)) {
      lVar6 = __ftol();
      iVar5 = (int)lVar6;
      while ((-1 < iVar5 && (iVar1 = *(int *)((int)this + 0x10), iVar1 != 0))) {
        iVar3 = FUN_004f6450(this,iVar1);
        *(int *)((int)this + 0x10) = iVar3;
        uVar4 = FUN_004f3100(iVar1);
        if ((uVar4 == 1) &&
           ((**(code **)(*param_1 + 4))(iVar1), *(int *)((int)this + 0x14) < piVar2[2])) {
          return;
        }
        iVar5 = iVar5 + -1;
      }
    }
  }
  return;
}


