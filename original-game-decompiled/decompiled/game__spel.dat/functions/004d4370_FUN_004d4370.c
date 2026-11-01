
/* ==== FUN_004d4370 @ 004d4370 ==== 
 * signature: undefined __thiscall FUN_004d4370(void * this, int * param_1)
 * body: 004d4370-004d4391
 */

void __thiscall FUN_004d4370(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x20);
  *param_1 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return;
}


