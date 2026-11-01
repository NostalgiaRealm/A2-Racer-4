
/* ==== FUN_004f5400 @ 004f5400 ==== 
 * signature: undefined __thiscall FUN_004f5400(void * this, int param_1)
 * body: 004f5400-004f5429
 */

void __thiscall FUN_004f5400(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) + 0x1f + param_1 & 0xffffffe0;
  if (*(uint *)((int)this + 0xc) <= uVar1) {
    FUN_004f5be0(this,param_1);
    return;
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


