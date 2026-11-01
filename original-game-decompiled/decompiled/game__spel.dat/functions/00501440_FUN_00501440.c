
/* ==== FUN_00501440 @ 00501440 ==== 
 * signature: int * __thiscall FUN_00501440(void * this, int param_1)
 * body: 00501440-0050146a
 */

int * __thiscall FUN_00501440(void *this,int param_1)

{
  undefined4 *puVar1;
  
  *(int *)((int)this + 4) = param_1 + -1;
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar1 = FUN_004f5aa0(param_1,0xc);
  *(undefined4 **)((int)this + 0xc) = puVar1;
  return this;
}


