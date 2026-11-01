
/* ==== FUN_005010f0 @ 005010f0 ==== 
 * signature: undefined4 * __thiscall FUN_005010f0(void * this, int param_1)
 * body: 005010f0-0050111d
 */

undefined4 * __thiscall FUN_005010f0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  *(undefined ***)this = &PTR_FUN_00578718;
  *(int *)((int)this + 4) = param_1 + -1;
  *(undefined4 *)((int)this + 8) = 0;
  puVar1 = FUN_004f5aa0(param_1,8);
  *(undefined4 **)((int)this + 0xc) = puVar1;
  return this;
}


