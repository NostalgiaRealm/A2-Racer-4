
/* ==== FUN_0050d950 @ 0050d950 ==== 
 * signature: undefined __thiscall FUN_0050d950(void * this, float param_1)
 * body: 0050d950-0050d972
 */

void __thiscall FUN_0050d950(void *this,float param_1)

{
  if (*(float *)((int)this + 0x9c) != param_1) {
    *(float *)((int)this + 0x9c) = param_1;
    FUN_004fb810(this);
  }
  return;
}


