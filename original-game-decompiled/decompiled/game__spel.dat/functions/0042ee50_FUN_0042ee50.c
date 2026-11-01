
/* ==== FUN_0042ee50 @ 0042ee50 ==== 
 * signature: uint __thiscall FUN_0042ee50(void * this, int param_1)
 * body: 0042ee50-0042ee65
 */

uint __thiscall FUN_0042ee50(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 0x14) + param_1 * 4);
  return -(uint)(uVar1 != 0xffffffff) & uVar1;
}


