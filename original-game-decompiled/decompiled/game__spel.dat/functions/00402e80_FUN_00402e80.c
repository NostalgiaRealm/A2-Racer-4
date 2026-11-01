
/* ==== FUN_00402e80 @ 00402e80 ==== 
 * signature: undefined __thiscall FUN_00402e80(void * this, float param_1)
 * body: 00402e80-00402e9a
 */

void __thiscall FUN_00402e80(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar1;
  FUN_00402e40(this,fVar1);
  return;
}


