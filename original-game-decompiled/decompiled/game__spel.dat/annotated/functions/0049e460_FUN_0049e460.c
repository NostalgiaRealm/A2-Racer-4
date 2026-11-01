
/* ==== FUN_0049e460 @ 0049e460 ==== 
 * signature: undefined __thiscall FUN_0049e460(void * this, int param_1)
 * body: 0049e460-0049e4aa
 */

void __thiscall FUN_0049e460(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0049e630((int)this);
  if (uVar1 != 0) {
    FUN_004a00b0(param_1,-10000,10000);
    FUN_004c7670(*(int *)((int)this + 0x38),param_1);
    *(int *)((int)this + 0x50) = param_1;
    return;
  }
  *(int *)((int)this + 0x50) = param_1;
  return;
}


