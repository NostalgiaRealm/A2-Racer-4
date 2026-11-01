
/* ==== FUN_005088d0 @ 005088d0 ==== 
 * signature: undefined __thiscall FUN_005088d0(void * this, double * param_1)
 * body: 005088d0-005089c4
 */

void __thiscall FUN_005088d0(void *this,double *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  double local_200 [12];
  double local_1a0 [16];
  undefined8 local_120 [12];
  undefined8 local_c0 [12];
  double local_60 [12];
  
  iVar2 = *(int *)((int)this + 0xf0);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar2);
  if (*(int *)((int)this + 0xf4) == 0) {
    puVar1 = operator_new(0x60);
    *(undefined4 **)((int)this + 0xf4) = puVar1;
    FUN_004fa040(puVar1);
  }
  if (*(void **)((int)this + 0xf0) == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_1a0);
  }
  else {
    FUN_004f2ab0(*(void **)((int)this + 0xf0),local_1a0);
  }
  FUN_004fa6e0(local_1a0,param_1,local_60);
  FUN_004fa6e0(*(void **)((int)this + 0xf4),local_60,local_200);
  FUN_004fa7b0(local_200,*(double **)((int)this + 0xf4),local_120);
  puVar3 = local_120;
  puVar1 = *(undefined4 **)((int)this + 0xf4);
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *(undefined4 *)puVar3;
    puVar3 = (undefined8 *)((int)puVar3 + 4);
    puVar1 = puVar1 + 1;
  }
  FUN_004fa7b0(local_200,*(double **)((int)this + 0x17c),local_c0);
  puVar3 = local_c0;
  puVar1 = *(undefined4 **)((int)this + 0x17c);
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *(undefined4 *)puVar3;
    puVar3 = (undefined8 *)((int)puVar3 + 4);
    puVar1 = puVar1 + 1;
  }
  return;
}


