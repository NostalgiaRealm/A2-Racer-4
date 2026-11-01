
/* ==== FUN_0050d920 @ 0050d920 ==== 
 * signature: undefined __thiscall FUN_0050d920(void * this, float param_1)
 * body: 0050d920-0050d945
 */

void __thiscall FUN_0050d920(void *this,float param_1)

{
  if (*(float *)((int)this + 0x98) != param_1) {
    *(float *)((int)this + 0x98) = param_1 * *(float *)((int)this + 0x78);
    FUN_004fb810(this);
  }
  return;
}


