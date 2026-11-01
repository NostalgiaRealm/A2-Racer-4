
/* ==== FUN_00539940 @ 00539940 ==== 
 * signature: undefined __thiscall FUN_00539940(void * this, undefined4 * param_1)
 * body: 00539940-00539971
 */

void __thiscall FUN_00539940(void *this,undefined4 *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(uint *)((int)this + 0x2c) & 0xfffffff0);
  *param_1 = puVar1 + ((*puVar1 & 0xfff) + 1) * -4;
  puVar1 = (uint *)(*(uint *)((int)this + 0x48) & 0xfffffff0);
  param_1[1] = puVar1 + ((*puVar1 & 0xfff) + 1) * -4;
  return;
}


