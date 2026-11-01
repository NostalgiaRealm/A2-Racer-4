
/* ==== FUN_0053cc60 @ 0053cc60 ==== 
 * signature: int __thiscall FUN_0053cc60(void * this, uint param_1)
 * body: 0053cc60-0053cc7e
 */

int __thiscall FUN_0053cc60(void *this,uint param_1)

{
  return (int)this + (*(uint *)((int)this + 0x14) >> 8 & 3 ^ param_1) * 0x1c + 0x18;
}


