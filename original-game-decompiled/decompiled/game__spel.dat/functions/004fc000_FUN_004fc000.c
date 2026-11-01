
/* ==== FUN_004fc000 @ 004fc000 ==== 
 * signature: undefined __thiscall FUN_004fc000(void * this, double param_1)
 * body: 004fc000-004fc025
 */

void __thiscall FUN_004fc000(void *this,double param_1)

{
  if (*(float *)((int)this + 0xd4) != (float)param_1) {
    *(float *)((int)this + 0xd4) = (float)param_1;
    FUN_004f32e0(*(int *)((int)this + 0x14));
  }
  return;
}


