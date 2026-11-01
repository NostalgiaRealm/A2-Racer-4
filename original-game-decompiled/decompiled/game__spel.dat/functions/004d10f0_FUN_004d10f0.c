
/* ==== FUN_004d10f0 @ 004d10f0 ==== 
 * signature: undefined __thiscall FUN_004d10f0(void * this, int * param_1)
 * body: 004d10f0-004d1111
 */

void __thiscall FUN_004d10f0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34);
  *param_1 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return;
}


