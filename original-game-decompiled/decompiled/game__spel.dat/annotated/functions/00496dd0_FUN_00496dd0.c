
/* ==== FUN_00496dd0 @ 00496dd0 ==== 
 * signature: undefined __thiscall FUN_00496dd0(void * this, undefined4 param_1)
 * body: 00496dd0-00496e1e
 */

void __thiscall FUN_00496dd0(void *this,undefined4 param_1)

{
  if ((&DAT_006fa61c)[DAT_006fb898 * 0x25] == 1) {
    (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(param_1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(0);
  }
  (**(code **)(**(int **)((int)this + 0x18) + 0x20))(param_1);
  (**(code **)(**(int **)((int)this + 0x20) + 0x20))(param_1);
  (**(code **)(**(int **)((int)this + 0x24) + 0x20))(param_1);
  return;
}


