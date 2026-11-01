
/* ==== FUN_004f7f30 @ 004f7f30 ==== 
 * signature: undefined __thiscall FUN_004f7f30(void * this, double * param_1)
 * body: 004f7f30-004f7f86
 */

void __thiscall FUN_004f7f30(void *this,double *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  dVar1 = param_1[1];
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar3 = *(undefined4 *)((int)param_1 + 0x14);
  *(double *)((int)this + 0xd0) = *param_1;
  *(double *)((int)this + 0xd8) = dVar1;
  *(undefined4 *)((int)this + 0xe0) = uVar2;
  *(undefined4 *)((int)this + 0xe4) = uVar3;
  fVar4 = FUN_004f9470(param_1);
  *(float *)((int)this + 0xf0) = (float)fVar4;
  FUN_00500670(*(void **)this,param_1);
  return;
}


