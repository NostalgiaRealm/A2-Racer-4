
/* ==== FUN_004ae3e0 @ 004ae3e0 ==== 
 * signature: int __thiscall FUN_004ae3e0(void * this, int param_1, int param_2)
 * body: 004ae3e0-004ae407
 */

int __thiscall FUN_004ae3e0(void *this,int param_1,int param_2)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x90) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)((int)this + 0x8c);
}


