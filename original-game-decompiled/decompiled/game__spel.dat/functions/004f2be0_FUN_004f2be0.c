
/* ==== FUN_004f2be0 @ 004f2be0 ==== 
 * signature: undefined __thiscall FUN_004f2be0(void * this, int param_1)
 * body: 004f2be0-004f2c03
 */

void __thiscall FUN_004f2be0(void *this,int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    *(int *)(*(int *)((int)this + 0x1c) + 0xc) = param_1;
  }
  *(int *)((int)this + 0x1c) = param_1;
  *(void **)(param_1 + 0x10) = this;
  return;
}


