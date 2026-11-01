
/* ==== FUN_004fe500 @ 004fe500 ==== 
 * signature: int * __thiscall FUN_004fe500(void * this, int param_1)
 * body: 004fe500-004fe526
 */

int * __thiscall FUN_004fe500(void *this,int param_1)

{
  undefined4 *puVar1;
  
  *(int *)this = param_1;
  puVar1 = FUN_004f5aa0(0xd0,param_1);
  *(undefined4 **)((int)this + 8) = puVar1;
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


