
/* ==== FUN_004fc3d0 @ 004fc3d0 ==== 
 * signature: undefined __thiscall FUN_004fc3d0(void * this, float param_1)
 * body: 004fc3d0-004fc458
 */

void __thiscall FUN_004fc3d0(void *this,float param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(float *)((int)this + 0x13c) != param_1) {
    *(float *)((int)this + 0x13c) = param_1;
    FUN_00500160(*(int **)((int)this + 0x3c));
    iVar2 = 0;
    iVar1 = *(int *)((int)this + 8) / *(int *)((int)this + 0xc);
    if (0 < iVar1) {
      do {
        (**(code **)(*(int *)this + 4))(iVar2,param_1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    if (4 < *(int *)((int)this + 8)) {
      (**(code **)(*(int *)this + 4))(4,param_1 * 0.5);
      (**(code **)(*(int *)this + 4))(5,param_1 * 0.5);
    }
  }
  return;
}


