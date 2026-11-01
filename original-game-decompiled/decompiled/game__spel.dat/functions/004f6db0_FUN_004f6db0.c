
/* ==== FUN_004f6db0 @ 004f6db0 ==== 
 * signature: undefined __thiscall FUN_004f6db0(void * this, int * param_1)
 * body: 004f6db0-004f6dd3
 */

void __thiscall FUN_004f6db0(void *this,int *param_1)

{
  int iVar1;
  
  param_1[0x1c] = (int)this;
  iVar1 = *(int *)((int)this + 0x20);
  param_1[1] = 0;
  *param_1 = iVar1;
  *(int **)((int)this + 0x20) = param_1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_1;
  }
  *(short *)((int)this + 0x3e) = *(short *)((int)this + 0x3e) + 1;
  return;
}


