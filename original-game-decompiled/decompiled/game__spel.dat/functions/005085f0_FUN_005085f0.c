
/* ==== FUN_005085f0 @ 005085f0 ==== 
 * signature: undefined __thiscall FUN_005085f0(void * this, double * param_1)
 * body: 005085f0-0050868e
 */

void __thiscall FUN_005085f0(void *this,double *param_1)

{
  int iVar1;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a0 [4];
  double local_80 [16];
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  if (*(void **)((int)this + 0xf0) == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_80);
  }
  else {
    FUN_004f2ab0(*(void **)((int)this + 0xf0),local_80);
  }
  FUN_004fad20(local_80,param_1,local_a0);
  FUN_004fad20((void *)((int)this + 0x70),local_a0,&local_c0);
  *(double *)((int)this + 0xd0) = *(double *)((int)this + 0xd0) - local_c0;
  *(double *)((int)this + 0xd8) = *(double *)((int)this + 0xd8) - local_b8;
  *(double *)((int)this + 0xe0) = *(double *)((int)this + 0xe0) - local_b0;
  return;
}


