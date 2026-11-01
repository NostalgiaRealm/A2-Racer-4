
/* ==== FUN_004af7a0 @ 004af7a0 ==== 
 * signature: undefined __thiscall FUN_004af7a0(void * this, undefined4 * param_1)
 * body: 004af7a0-004af7bd
 */

void __thiscall FUN_004af7a0(void *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x60) = *param_1;
    *(undefined4 *)((int)this + 100) = param_1[1];
    *(undefined4 *)((int)this + 0x68) = param_1[2];
  }
  return;
}


