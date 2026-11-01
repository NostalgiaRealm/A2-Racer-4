
/* ==== FUN_00402ea0 @ 00402ea0 ==== 
 * signature: undefined __thiscall FUN_00402ea0(void * this, float param_1)
 * body: 00402ea0-00402efa
 */

void __thiscall FUN_00402ea0(void *this,float param_1)

{
  if (0.0 < (float)*(int *)((int)this + 0x2c)) {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  *(float *)((int)this + 8) = param_1;
  if (100.0 < param_1) {
    *(undefined4 *)((int)this + 8) = 0x42c80000;
    return;
  }
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  return;
}


