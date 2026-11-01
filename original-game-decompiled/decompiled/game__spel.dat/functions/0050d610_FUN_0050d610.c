
/* ==== FUN_0050d610 @ 0050d610 ==== 
 * signature: undefined __thiscall FUN_0050d610(void * this, double param_1)
 * body: 0050d610-0050d62c
 */

void __thiscall FUN_0050d610(void *this,double param_1)

{
  if (*(float *)((int)this + 0x74) != (float)param_1) {
    *(float *)((int)this + 0x74) = (float)param_1;
    FUN_004fb810(this);
  }
  return;
}


