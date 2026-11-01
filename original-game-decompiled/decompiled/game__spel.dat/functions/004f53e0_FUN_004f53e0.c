
/* ==== FUN_004f53e0 @ 004f53e0 ==== 
 * signature: undefined __thiscall FUN_004f53e0(void * this, undefined4 param_1, undefined2 param_2)
 * body: 004f53e0-004f53f9
 */

void __thiscall FUN_004f53e0(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined2 *)this = param_2;
  *(undefined2 *)((int)this + 2) = 0;
  return;
}


