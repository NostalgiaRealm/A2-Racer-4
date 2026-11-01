
/* ==== FUN_0047b060 @ 0047b060 ==== 
 * signature: undefined __thiscall FUN_0047b060(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0047b060-0047b090
 */

void __thiscall FUN_0047b060(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 4) < *(int *)((int)this + 8)) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4) * 0xc);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return;
}


