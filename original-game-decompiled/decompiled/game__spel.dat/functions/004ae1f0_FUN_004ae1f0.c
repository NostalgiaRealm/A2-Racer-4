
/* ==== FUN_004ae1f0 @ 004ae1f0 ==== 
 * signature: int __thiscall FUN_004ae1f0(void * this, int param_1, int param_2)
 * body: 004ae1f0-004ae214
 */

int __thiscall FUN_004ae1f0(void *this,int param_1,int param_2)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x80) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)((int)this + 0x7c);
}


