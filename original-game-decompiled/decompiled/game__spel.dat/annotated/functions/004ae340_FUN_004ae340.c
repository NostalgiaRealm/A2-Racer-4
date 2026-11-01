
/* ==== FUN_004ae340 @ 004ae340 ==== 
 * signature: int __thiscall FUN_004ae340(void * this, int param_1, int param_2)
 * body: 004ae340-004ae361
 */

int __thiscall FUN_004ae340(void *this,int param_1,int param_2)

{
  return (uint)*(ushort *)(*(int *)((int)this + 0x60) + (param_1 + param_2) * 2) * 0x20 +
         *(int *)((int)this + 0x5c);
}


