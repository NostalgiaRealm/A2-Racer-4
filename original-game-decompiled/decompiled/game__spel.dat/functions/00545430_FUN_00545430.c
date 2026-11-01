
/* ==== FUN_00545430 @ 00545430 ==== 
 * signature: undefined __thiscall FUN_00545430(void * this, int param_1)
 * body: 00545430-0054545b
 */

void __thiscall FUN_00545430(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 1;
  if (iVar1 < *(int *)((int)this + 0x4c)) {
    do {
      FUN_00544c90(this,param_1,iVar1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x4c));
  }
  return;
}


