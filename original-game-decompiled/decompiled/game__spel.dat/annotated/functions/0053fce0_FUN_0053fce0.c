
/* ==== FUN_0053fce0 @ 0053fce0 ==== 
 * signature: undefined4 __thiscall FUN_0053fce0(void * this, int param_1)
 * body: 0053fce0-0053fd6a
 */

undefined4 __thiscall FUN_0053fce0(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  
  if ((*(int *)((int)this + 0x10) == *(int *)(param_1 + 0x28)) &&
     (*(int *)((int)this + 0x24) == *(int *)(param_1 + 0x44))) {
    bVar1 = FUN_0053fc10((void *)((int)this + 8),param_1 + 0x18);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      bVar1 = FUN_0053fc10((void *)((int)this + 0x1c),param_1 + 0x34);
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        return 1;
      }
    }
  }
  if ((*(int *)((int)this + 0x24) == *(int *)(param_1 + 0x28)) &&
     (*(int *)((int)this + 0x10) == *(int *)(param_1 + 0x44))) {
    bVar1 = FUN_0053fc10((void *)((int)this + 0x1c),param_1 + 0x18);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      bVar1 = FUN_0053fc10((void *)((int)this + 8),param_1 + 0x34);
      if (CONCAT31(extraout_var_02,bVar1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


