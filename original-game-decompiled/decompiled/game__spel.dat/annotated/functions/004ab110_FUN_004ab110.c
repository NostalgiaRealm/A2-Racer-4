
/* ==== FUN_004ab110 @ 004ab110 ==== 
 * signature: undefined __thiscall FUN_004ab110(void * this, undefined4 param_1)
 * body: 004ab110-004ab13e
 */

void __thiscall FUN_004ab110(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x24) != 10) {
    FUN_004c3fa0((byte *)s_adding_object___d_to_list__005b029c);
    *(undefined4 *)((int)this + *(int *)((int)this + 0x24) * 4 + 0x28) = param_1;
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  return;
}


