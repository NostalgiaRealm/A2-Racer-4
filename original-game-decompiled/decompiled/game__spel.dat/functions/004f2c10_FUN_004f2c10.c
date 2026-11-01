
/* ==== FUN_004f2c10 @ 004f2c10 ==== 
 * signature: undefined __thiscall FUN_004f2c10(void * this, int param_1)
 * body: 004f2c10-004f2c38
 */

void __thiscall FUN_004f2c10(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}


