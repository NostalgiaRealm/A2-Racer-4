
/* ==== FUN_005089d0 @ 005089d0 ==== 
 * signature: undefined __thiscall FUN_005089d0(void * this, double * param_1)
 * body: 005089d0-00508a6c
 */

void __thiscall FUN_005089d0(void *this,double *param_1)

{
  void *pvVar1;
  int iVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double local_e0 [16];
  double local_60 [12];
  
  iVar2 = *(int *)((int)this + 0xf0);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar2);
  if (*(int *)((int)this + 0xf4) == 0) {
    pvVar1 = operator_new(0x60);
    *(void **)((int)this + 0xf4) = pvVar1;
  }
  if (*(void **)((int)this + 0xf0) == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_e0);
  }
  else {
    FUN_004f2ab0(*(void **)((int)this + 0xf0),local_e0);
  }
  FUN_004fa6e0(local_e0,param_1,local_60);
  pdVar3 = local_60;
  puVar4 = *(undefined4 **)((int)this + 0xf4);
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    puVar4 = puVar4 + 1;
  }
  FUN_004fa9e0(*(undefined8 **)((int)this + 0xf4));
  return;
}


