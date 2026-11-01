
/* ==== FUN_0050ca50 @ 0050ca50 ==== 
 * signature: undefined __thiscall FUN_0050ca50(void * this, uint param_1)
 * body: 0050ca50-0050cad1
 */

void __thiscall FUN_0050ca50(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00501070(*(char **)(param_1 + 4));
  if (iVar2 == 0) {
    FUN_0055ab10((byte *)s_insert_active_int__tried_to_inse_005b992c);
    return;
  }
  pvVar1 = *(void **)((int)this + 0xc);
  uVar3 = FUN_0050c6d0(param_1);
  uVar3 = FUN_005013d0(pvVar1,param_1,uVar3);
  if (uVar3 != 0) {
    FUN_0055ab10((byte *)s_insert_active_int__name___s__alr_005b98f0);
    return;
  }
  pvVar1 = *(void **)((int)this + 0xc);
  uVar3 = FUN_0050c6d0(param_1);
  FUN_00501220(pvVar1,param_1,uVar3);
  *(void **)(param_1 + 0x14) = this;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
  return;
}


