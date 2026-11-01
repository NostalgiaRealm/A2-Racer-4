
/* ==== FUN_00508690 @ 00508690 ==== 
 * signature: undefined __thiscall FUN_00508690(void * this, double * param_1)
 * body: 00508690-0050873a
 */

void __thiscall FUN_00508690(void *this,double *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double local_1a0 [12];
  double local_140 [16];
  double local_c0 [12];
  undefined8 local_60 [12];
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  if (*(void **)((int)this + 0xf0) == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_140);
  }
  else {
    FUN_004f2ab0(*(void **)((int)this + 0xf0),local_140);
  }
  FUN_004fa6e0(local_140,param_1,local_1a0);
  FUN_004fa6e0((void *)((int)this + 0x70),local_1a0,local_c0);
  FUN_004faa20((void *)((int)this + 0x70),local_1a0);
  FUN_004fa7b0(local_c0,(double *)((int)this + 0xf8),local_60);
  puVar2 = local_60;
  pdVar3 = (double *)((int)this + 0xf8);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  return;
}


