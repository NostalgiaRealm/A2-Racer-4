
/* ==== FUN_00551379 @ 00551379 ==== 
 * signature: undefined4 __thiscall FUN_00551379(void * this, undefined4 param_1)
 * body: 00551379-005513a9
 */

undefined4 __thiscall FUN_00551379(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = **(uint **)((int)this + 0x20);
  if ((uVar1 == 0) || (uVar1 + **(int **)((int)this + 0x30) * 2 <= uVar1)) {
    param_1 = (**(code **)(*(int *)this + 4))(param_1);
  }
  else {
    puVar2 = (undefined2 *)FUN_0054c5ca((int)this);
    *puVar2 = (short)param_1;
  }
  return param_1;
}


