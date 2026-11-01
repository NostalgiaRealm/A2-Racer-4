
/* ==== FUN_004fb0f0 @ 004fb0f0 ==== 
 * signature: undefined __thiscall FUN_004fb0f0(void * this, int param_1, undefined8 * param_2)
 * body: 004fb0f0-004fb10d
 */

void __thiscall FUN_004fb0f0(void *this,int param_1,undefined8 *param_2)

{
  *(undefined8 *)((int)this + param_1 * 8) = *param_2;
  *(undefined8 *)((int)this + param_1 * 8 + 0x20) = param_2[1];
  *(undefined8 *)((int)this + param_1 * 8 + 0x40) = param_2[2];
  return;
}


