
/* ==== FUN_00457790 @ 00457790 ==== 
 * signature: undefined __thiscall FUN_00457790(void * this, undefined4 * param_1)
 * body: 00457790-004577c7
 */

void __thiscall FUN_00457790(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x14) = *param_1;
  *(undefined4 *)((int)this + 0x18) = param_1[1];
  *(undefined4 *)((int)this + 0x1c) = param_1[2];
  *(undefined4 *)((int)this + 0x58) = 1;
  if (*(int *)((int)this + 0x5c) == 1) {
    *(undefined4 *)((int)this + 0x58) = 0;
    (**(code **)(**(int **)((int)this + 0x54) + 0xc))(*(int **)((int)this + 0x54),this);
  }
  return;
}


