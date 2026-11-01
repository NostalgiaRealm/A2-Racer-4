
/* ==== FUN_0042fa51 @ 0042fa51 ==== 
 * signature: undefined4 __thiscall FUN_0042fa51(void * this, int param_1)
 * body: 0042fa51-0042fa5f
 */

int __thiscall FUN_0042fa51(void *this,int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (param_1 < 0) {
    return (uint)uVar1 << 8;
  }
  *(int *)this = param_1;
  return CONCAT31(uVar1,1);
}


