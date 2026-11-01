
/* ==== FUN_004f5f60 @ 004f5f60 ==== 
 * signature: undefined __thiscall FUN_004f5f60(void * this, undefined4 * param_1)
 * body: 004f5f60-004f5f79
 */

void __thiscall FUN_004f5f60(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return;
}


