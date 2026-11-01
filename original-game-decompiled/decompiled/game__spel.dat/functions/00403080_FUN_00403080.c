
/* ==== FUN_00403080 @ 00403080 ==== 
 * signature: undefined __thiscall FUN_00403080(void * this, int param_1)
 * body: 00403080-004030a5
 */

void __thiscall FUN_00403080(void *this,int param_1)

{
  *(int *)((int)this + 0x1c) = param_1;
  if (10000 < param_1) {
    *(undefined4 *)((int)this + 0x1c) = 10000;
    return;
  }
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return;
}


