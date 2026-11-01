
/* ==== FUN_00416be0 @ 00416be0 ==== 
 * signature: int __thiscall FUN_00416be0(void * this, undefined4 * param_1)
 * body: 00416be0-00416c02
 */

int __thiscall FUN_00416be0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  FUN_00417270(*(void **)((int)this + 0x1c),*(undefined4 **)((int)*(void **)((int)this + 0x1c) + 8),
               1,param_1);
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x18))();
  return iVar1 + -1;
}


