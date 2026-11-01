
/* ==== FUN_00457750 @ 00457750 ==== 
 * signature: undefined __thiscall FUN_00457750(void * this, undefined4 * param_1)
 * body: 00457750-00457787
 */

void __thiscall FUN_00457750(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(undefined4 *)((int)this + 0xc) = param_1[2];
  *(undefined4 *)((int)this + 0x58) = 1;
  if (*(int *)((int)this + 0x5c) == 1) {
    *(undefined4 *)((int)this + 0x58) = 0;
    (**(code **)(**(int **)((int)this + 0x54) + 0xc))(*(int **)((int)this + 0x54),this);
  }
  return;
}


