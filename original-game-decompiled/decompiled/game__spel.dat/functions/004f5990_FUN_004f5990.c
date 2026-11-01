
/* ==== FUN_004f5990 @ 004f5990 ==== 
 * signature: undefined __thiscall FUN_004f5990(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004f5990-004f59ac
 */

void __thiscall FUN_004f5990(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x1e4) = param_3;
  *(undefined4 *)((int)this + param_1 * 4 + 0x1cc) = param_2;
  return;
}


