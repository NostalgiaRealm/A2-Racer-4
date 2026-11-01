
/* ==== FUN_004e30d0 @ 004e30d0 ==== 
 * signature: undefined4 * __thiscall FUN_004e30d0(void * this, undefined4 * param_1, int param_2)
 * body: 004e30d0-004e3128
 */

undefined4 * __thiscall FUN_004e30d0(void *this,undefined4 *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)((int)this + 8) + 0x44))();
  if ((cVar1 != '\0') && (*(char *)((int)this + 0xc) == '\0')) {
    FUN_004db3d0(*(void **)((int)this + 8),param_1,*(int *)(param_2 + 8));
    return param_1;
  }
  (**(code **)(**(int **)((int)this + 8) + 0x3c))(param_1,*(undefined4 *)(param_2 + 8));
  return param_1;
}


