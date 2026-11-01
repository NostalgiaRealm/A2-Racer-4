
/* ==== FUN_00508740 @ 00508740 ==== 
 * signature: undefined __thiscall FUN_00508740(void * this, double * param_1)
 * body: 00508740-005087af
 */

void __thiscall FUN_00508740(void *this,double *param_1)

{
  int iVar1;
  double local_e0 [16];
  double local_60 [12];
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  if (*(void **)((int)this + 0xf0) == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_e0);
  }
  else {
    FUN_004f2ab0(*(void **)((int)this + 0xf0),local_e0);
  }
  FUN_004fa6e0(local_e0,param_1,local_60);
  FUN_004faa20((void *)((int)this + 0x70),local_60);
  return;
}


