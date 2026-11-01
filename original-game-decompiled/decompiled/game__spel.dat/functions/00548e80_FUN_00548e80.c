
/* ==== FUN_00548e80 @ 00548e80 ==== 
 * signature: bool __thiscall FUN_00548e80(void * this, double * param_1, int * param_2, int param_3, void * param_4)
 * body: 00548e80-00548f67
 */

bool __thiscall FUN_00548e80(void *this,double *param_1,int *param_2,int param_3,void *param_4)

{
  double dVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  piVar3 = *(int **)((int)param_4 + 8);
  iVar6 = *(int *)((int)this + 8) * 4;
  uVar5 = (uint)((int)piVar3 + iVar6 + 0x1f) & 0xffffffe0;
  if (uVar5 < *(uint *)((int)param_4 + 0xc)) {
    *(uint *)((int)param_4 + 8) = uVar5;
  }
  else {
    piVar3 = (int *)FUN_004f5be0(param_4,iVar6);
  }
  piVar7 = piVar3;
  for (uVar5 = *(uint *)((int)this + 8) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  bVar2 = false;
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)piVar7 = 0;
    piVar7 = (int *)((int)piVar7 + 1);
  }
  if (0 < param_3) {
    do {
      iVar6 = *param_2;
      dVar1 = *param_1;
      if ((double)*(float *)(*(int *)(*(int *)((int)this + 0x34) + iVar6 * 4) + 0x74) *
          *(double *)((int)this + 0x20) * dVar1 <
          (double)*(float *)(*(int *)((int)this + 0x28) + 0xf0) * 0.009999999776482582) {
        bVar2 = true;
      }
      piVar3[iVar6] = 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      *(double *)(*(int *)((int)this + 0x18) + iVar6 * 8) = dVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar6 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      if ((*piVar3 == 0) && (iVar4 = FUN_005439f0(this,iVar6), iVar4 == 0)) {
        return false;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar6 < *(int *)((int)this + 8));
  }
  return !bVar2;
}


