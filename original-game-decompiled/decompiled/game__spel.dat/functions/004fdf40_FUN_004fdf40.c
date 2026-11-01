
/* ==== FUN_004fdf40 @ 004fdf40 ==== 
 * signature: undefined __thiscall FUN_004fdf40(void * this, float param_1)
 * body: 004fdf40-004fdfa3
 */

void __thiscall FUN_004fdf40(void *this,float param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(float *)((int)this + 0x648) != param_1) {
    *(float *)((int)this + 0x648) = param_1;
    if (this == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)((int)this + 4);
    }
    FUN_00500160(piVar1);
    iVar2 = 0;
    if (0 < *(short *)((int)this + 0x18)) {
      do {
        (**(code **)(*(int *)this + 4))(iVar2,param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)((int)this + 0x18));
    }
  }
  return;
}


