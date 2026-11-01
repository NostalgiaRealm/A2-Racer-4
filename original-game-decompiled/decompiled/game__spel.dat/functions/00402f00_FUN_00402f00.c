
/* ==== FUN_00402f00 @ 00402f00 ==== 
 * signature: undefined __thiscall FUN_00402f00(void * this, float param_1)
 * body: 00402f00-00402f35
 */

void __thiscall FUN_00402f00(void *this,float param_1)

{
  float fVar1;
  
  if (0.0 < (float)*(int *)((int)this + 0x2c)) {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  fVar1 = param_1 + *(float *)((int)this + 8);
  *(float *)((int)this + 8) = fVar1;
  FUN_00402ea0(this,fVar1);
  return;
}


