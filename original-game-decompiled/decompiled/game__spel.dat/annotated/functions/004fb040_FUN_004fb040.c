
/* ==== FUN_004fb040 @ 004fb040 ==== 
 * signature: undefined __thiscall FUN_004fb040(void * this, double * param_1)
 * body: 004fb040-004fb0e1
 */

void __thiscall FUN_004fb040(void *this,double *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  double local_10;
  
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar3 = *(undefined4 *)((int)param_1 + 0x14);
  dVar1 = param_1[1];
  pdVar5 = (double *)((int)this + 0x10);
  *(double *)this = *param_1;
  *(undefined4 *)pdVar5 = uVar2;
  *(undefined4 *)((int)this + 0x14) = uVar3;
  *(double *)((int)this + 8) = dVar1;
  iVar6 = 0;
  iVar4 = 2;
  local_10 = 0.0;
  do {
    if (local_10 < ABS(*pdVar5)) {
      iVar6 = iVar4;
      local_10 = ABS(*pdVar5);
    }
    iVar4 = iVar4 + -1;
    pdVar5 = pdVar5 + -1;
  } while (-1 < iVar4);
  dVar1 = *(double *)((int)this + iVar6 * 8) * -1.0;
  iVar4 = iVar6 + -1;
  *(double *)((int)this + iVar6 * 8) = dVar1;
  if (iVar4 < 0) {
    iVar4 = 2;
  }
  *(undefined4 *)((int)this + iVar6 * 8) = *(undefined4 *)((int)this + iVar4 * 8);
  *(undefined4 *)((int)this + iVar6 * 8 + 4) = *(undefined4 *)((int)this + iVar4 * 8 + 4);
  *(double *)((int)this + iVar4 * 8) = dVar1;
  FUN_004f99d0(this,this,param_1);
  return;
}


