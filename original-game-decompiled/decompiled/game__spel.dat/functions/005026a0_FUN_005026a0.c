
/* ==== FUN_005026a0 @ 005026a0 ==== 
 * signature: ushort __thiscall FUN_005026a0(void * this, undefined4 param_1)
 * body: 005026a0-005026d4
 */

ushort __thiscall FUN_005026a0(void *this,undefined4 param_1)

{
  ushort uVar1;
  
  if (*(ushort *)this <= *(ushort *)((int)this + 2)) {
    FUN_004f6060(this);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + (uint)*(ushort *)((int)this + 2) * 4) = param_1;
  uVar1 = *(ushort *)((int)this + 2);
  *(ushort *)((int)this + 2) = uVar1 + 1;
  return uVar1;
}


