
/* ==== FUN_004ae2a0 @ 004ae2a0 ==== 
 * signature: int __thiscall FUN_004ae2a0(void * this, int param_1, int param_2)
 * body: 004ae2a0-004ae2c1
 */

int __thiscall FUN_004ae2a0(void *this,int param_1,int param_2)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x70) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)((int)this + 0x6c);
}


