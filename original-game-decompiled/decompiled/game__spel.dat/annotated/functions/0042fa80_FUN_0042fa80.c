
/* ==== FUN_0042fa80 @ 0042fa80 ==== 
 * signature: undefined4 __thiscall FUN_0042fa80(void * this, int param_1)
 * body: 0042fa80-0042fa94
 */

int __thiscall FUN_0042fa80(void *this,int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (param_1 < 0) {
    return (uint)uVar1 << 8;
  }
  *(int *)((int)this + 4) = param_1;
  return CONCAT31(uVar1,1);
}


