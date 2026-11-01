
/* ==== FUN_004fbbf0 @ 004fbbf0 ==== 
 * signature: undefined __thiscall FUN_004fbbf0(void * this, double param_1)
 * body: 004fbbf0-004fbc0c
 */

void __thiscall FUN_004fbbf0(void *this,double param_1)

{
  if (*(float *)((int)this + 0x70) != (float)param_1) {
    *(float *)((int)this + 0x70) = (float)param_1;
    FUN_004fb810(this);
  }
  return;
}


