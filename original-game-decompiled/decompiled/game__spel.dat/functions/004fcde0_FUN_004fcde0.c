
/* ==== FUN_004fcde0 @ 004fcde0 ==== 
 * signature: undefined __thiscall FUN_004fcde0(void * this, float param_1)
 * body: 004fcde0-004fcee1
 */

void __thiscall FUN_004fcde0(void *this,float param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [10];
  undefined4 local_30 [11];
  
  if (param_1 == 0.0) {
    if (*(int **)((int)this + 0x130) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x130) + 0x18))();
    }
    *(undefined4 *)((int)this + 0x130) = 0;
    return;
  }
  pvVar1 = *(void **)((int)this + 0x10);
  if (*(void **)((int)this + 0x130) == (void *)0x0) {
    FUN_004fb150(&local_74);
    FUN_004fb2f0(local_58,pvVar1,0.0,0.0,1.0);
    FUN_004fb2f0(local_30,pvVar1,0.0,0.0,-1.0);
    local_70 = local_58;
    local_6c = local_30;
    local_64 = 0;
    local_60 = 1;
    local_5c = 0;
    local_68 = *(float *)(*(int *)((int)pvVar1 + 0xa4) + 0x20) * param_1;
    puVar2 = FUN_004f8100(*(void **)((int)this + 4),&local_74);
    *(undefined4 **)((int)this + 0x130) = puVar2;
    return;
  }
  FUN_004fbbf0(*(void **)((int)this + 0x130),
               (double)(*(float *)(*(int *)((int)pvVar1 + 0xa4) + 0x20) * param_1));
  return;
}


