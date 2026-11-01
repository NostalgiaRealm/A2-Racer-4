
/* ==== FUN_0050c9d0 @ 0050c9d0 ==== 
 * signature: undefined __thiscall FUN_0050c9d0(void * this, uint param_1)
 * body: 0050c9d0-0050ca4f
 */

void __thiscall FUN_0050c9d0(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00501070(*(char **)(param_1 + 4));
  if (iVar2 == 0) {
    FUN_0055ab10((byte *)s_insert_active_float__tried_to_in_005b98a8);
    return;
  }
  pvVar1 = *(void **)((int)this + 8);
  uVar3 = FUN_0050c6d0(param_1);
  uVar3 = FUN_005013d0(pvVar1,param_1,uVar3);
  if (uVar3 != 0) {
    FUN_0055ab10((byte *)s_insert_active_float__name___s__a_005b9868);
    return;
  }
  pvVar1 = *(void **)((int)this + 8);
  uVar3 = FUN_0050c6d0(param_1);
  FUN_00501220(pvVar1,param_1,uVar3);
  *(void **)(param_1 + 0x14) = this;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}


