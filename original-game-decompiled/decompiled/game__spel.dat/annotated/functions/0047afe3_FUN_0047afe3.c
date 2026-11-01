
/* ==== FUN_0047afe3 @ 0047afe3 ==== 
 * signature: undefined __thiscall FUN_0047afe3(void * this, undefined4 * param_1, int param_2)
 * body: 0047afe3-0047afef
 */

void __thiscall FUN_0047afe3(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + param_2 * 0xc);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return;
}


