
/* ==== FUN_004a02a0 @ 004a02a0 ==== 
 * signature: undefined __thiscall FUN_004a02a0(void * this, uint param_1)
 * body: 004a02a0-004a02d4
 */

void __thiscall FUN_004a02a0(void *this,uint param_1)

{
  char local_34 [52];
  
  FUN_00567b81(param_1,local_34,10);
  *(uint *)((int)this + 0x80) = param_1;
  FUN_004f5520(this,local_34);
  return;
}


