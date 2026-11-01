
/* ==== FUN_004fde30 @ 004fde30 ==== 
 * signature: undefined __thiscall FUN_004fde30(void * this, int param_1, float param_2)
 * body: 004fde30-004fde52
 */

void __thiscall FUN_004fde30(void *this,int param_1,float param_2)

{
  *(float *)((int)this + param_1 * 0x7c + 0x40) =
       (*(float *)((int)this + param_1 * 0x7c + 0x3c) - param_2) * *(float *)((int)this + 0x608);
  return;
}


