
/* ==== FUN_004a3310 @ 004a3310 ==== 
 * signature: undefined __thiscall FUN_004a3310(void * this, int param_1, float param_2)
 * body: 004a3310-004a3332
 */

void __thiscall FUN_004a3310(void *this,int param_1,float param_2)

{
  if (0.0 <= param_2) {
    *(float *)((int)this + param_1 * 4 + 0xa4) = param_2;
  }
  return;
}


