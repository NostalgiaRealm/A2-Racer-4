
/* ==== FUN_00402e40 @ 00402e40 ==== 
 * signature: undefined __thiscall FUN_00402e40(void * this, float param_1)
 * body: 00402e40-00402e7f
 */

void __thiscall FUN_00402e40(void *this,float param_1)

{
  *(float *)((int)this + 4) = param_1;
  if (100.0 < param_1) {
    *(undefined4 *)((int)this + 4) = 0x42c80000;
    return;
  }
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


