
/* ==== FUN_0047aff0 @ 0047aff0 ==== 
 * signature: undefined __thiscall FUN_0047aff0(void * this, undefined4 * param_1, int param_2)
 * body: 0047aff0-0047b017
 */

void __thiscall FUN_0047aff0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + param_2 * 0xc);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return;
}


