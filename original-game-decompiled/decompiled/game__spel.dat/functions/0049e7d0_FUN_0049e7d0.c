
/* ==== FUN_0049e7d0 @ 0049e7d0 ==== 
 * signature: int __thiscall FUN_0049e7d0(void * this, int param_1)
 * body: 0049e7d0-0049e80c
 */

int __thiscall FUN_0049e7d0(void *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  param_1 = 100 - ((int)lVar1 * 100) / *(int *)((int)this + 0xc);
  FUN_004a01a0(&param_1,0,100);
  return param_1;
}


