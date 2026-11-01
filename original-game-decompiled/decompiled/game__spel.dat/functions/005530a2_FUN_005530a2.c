
/* ==== FUN_005530a2 @ 005530a2 ==== 
 * signature: undefined __thiscall FUN_005530a2(void * this, uint param_1)
 * body: 005530a2-005530c7
 */

void __thiscall FUN_005530a2(void *this,uint param_1)

{
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_00553039(this,param_1 - *(uint *)((int)this + 8),0);
  }
  else {
    FUN_00553613(this,param_1,0xffffffff);
  }
  return;
}


