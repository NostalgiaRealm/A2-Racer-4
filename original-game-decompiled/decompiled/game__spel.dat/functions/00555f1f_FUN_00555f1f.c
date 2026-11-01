
/* ==== FUN_00555f1f @ 00555f1f ==== 
 * signature: undefined __thiscall FUN_00555f1f(void * this, uint param_1)
 * body: 00555f1f-00555f44
 */

void __thiscall FUN_00555f1f(void *this,uint param_1)

{
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_0047eab0(this,param_1 - *(uint *)((int)this + 8),0);
  }
  else {
    FUN_0040f800(this,param_1,0xffffffff);
  }
  return;
}


